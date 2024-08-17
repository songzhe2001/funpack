#include "tcpecho.h"

#include "board.h"
#include "fsl_p3t1755.h"
#include "lwip/netif.h"
#include "lwip/ip.h"
#include "lwip/tcp.h"
#include "lwip/init.h"
#include "netif/etharp.h"
#include "lwip/udp.h"
#include "lwip/pbuf.h"
#include <stdio.h>
#include <string.h>

extern double temperature;
extern  int  touch_state;
extern  int  led_state;
char receive_buf[5];
char output_buf[8];

//extern struct tcp_pcb *tcp_active_pcbs;


static err_t tcpecho_recv(void *arg,
		struct tcp_pcb *tpcb,
		struct pbuf *p,
		err_t err)
{
	struct pbuf *q;
	uint32_t data_len=0;
	int dac_value=0;


	if (p != NULL)
	{
		/* 更新窗口*/
		tcp_recved(tpcb, p->tot_len);
		for(q=p;q!=NULL;q=q->next)
		{
			memcpy(receive_buf+data_len,q->payload,q->tot_len);
			data_len+=q->tot_len;
		}
		tcp_write(tpcb, p->payload, 1, 1);

		memset(p->payload, 0 , p->tot_len);
		pbuf_free(p);


		switch(receive_buf[0]){

		case 'l':
			switch(receive_buf[1]){
			case 'b':
				if(receive_buf[2]=='1')
					GPIO_PortClear(BOARD_LED_BLUE_GPIO, 1u << BOARD_LED_BLUE_GPIO_PIN);
				else
					GPIO_PortSet(BOARD_LED_BLUE_GPIO, 1u << BOARD_LED_BLUE_GPIO_PIN);
				break;

			case 'g':
				if(receive_buf[2]=='1')
					GPIO_PortClear(BOARD_LED_GREEN_GPIO, 1u << BOARD_LED_GREEN_GPIO_PIN);
				else
					GPIO_PortSet(BOARD_LED_GREEN_GPIO, 1u << BOARD_LED_GREEN_GPIO_PIN);
				break;

			case 'r':
				switch(receive_buf[2])
				{
				case '1':
					GPIO_PortClear(BOARD_LED_RED_GPIO, 1u << BOARD_LED_RED_GPIO_PIN);
					break;
				case'0':
					GPIO_PortSet(BOARD_LED_RED_GPIO, 1u << BOARD_LED_RED_GPIO_PIN);
					break;
//					GPIO_PortToggle(BOARD_LED_RED_GPIO, 1u << BOARD_LED_RED_GPIO_PIN);
				}
				break;
			}
			break;

		default:
		}
	}
	else if (err == ERR_OK)
	{
		return tcp_close(tpcb);
	}
	return ERR_OK;
}

void	tim1_net_task()
{
	;
	struct tcp_pcb *pcb;
	for (pcb = tcp_active_pcbs; pcb != NULL; pcb = pcb->next)
	{
		sprintf(output_buf,"s");
		tcp_write(pcb, output_buf,1, 1);
		sprintf(output_buf,"%d\n",touch_state);
		tcp_write(pcb, output_buf,2, 1);
	}
}

void	tim2_net_task()
{
	;
	struct tcp_pcb *pcb;
	for (pcb = tcp_active_pcbs; pcb != NULL; pcb = pcb->next)
	{
		sprintf(output_buf,"t");
		tcp_write(pcb, output_buf,1, 1);
		sprintf(output_buf,"%f\n",temperature);
		tcp_write(pcb, output_buf, sizeof(output_buf), 1);
	}
}

void	tim3_net_task()
{
	;
	struct tcp_pcb *pcb;
	for (pcb = tcp_active_pcbs; pcb != NULL; pcb = pcb->next)
	{
		sprintf(output_buf,"i");
		tcp_write(pcb, output_buf,1, 1);
		sprintf(output_buf,"%d\n",GPIO_PinRead(GPIO0, 6));
		tcp_write(pcb, output_buf,2, 1);
	}
}

void	tim4_net_task()
{
	;
	struct tcp_pcb *pcb;
	for (pcb = tcp_active_pcbs; pcb != NULL; pcb = pcb->next)
	{
		sprintf(output_buf,"w");
		tcp_write(pcb, output_buf,1, 1);
		sprintf(output_buf,"%d\n",GPIO_PinRead(GPIO0, 23));
		tcp_write(pcb, output_buf,2, 1);
	}
}


static err_t tcpecho_accept(void *arg,
		struct tcp_pcb *newpcb,
		err_t err)
{
	tcp_recv(newpcb, tcpecho_recv);
	return ERR_OK;
}

void TCP_Echo_Init(void)
{
	struct tcp_pcb *pcb = NULL;

	/* 创建一个TCP控制块  */
	pcb = tcp_new();

	/* 绑定TCP控制块 */
	tcp_bind(pcb, IP_ADDR_ANY, TCP_ECHO_PORT);


	/* 进入监听状态 */
	pcb = tcp_listen(pcb);

	/* 处理连接 */
	tcp_accept(pcb, tcpecho_accept);
}
