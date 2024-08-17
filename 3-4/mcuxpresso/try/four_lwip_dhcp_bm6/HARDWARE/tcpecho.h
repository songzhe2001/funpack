 #ifndef _TCPECHO_H_
 #define _TCPECHO_H_

#include "lwip/tcp.h"


 #define TCP_ECHO_PORT 5001

 void TCP_Echo_Init(void);
 void 	tim1_net_task(void);
 void	tim2_net_task(void);
 void	tim3_net_task(void);
 void	tim4_net_task(void);

 extern struct tcp_pcb *tcp_active_pcbs;



 #endif
