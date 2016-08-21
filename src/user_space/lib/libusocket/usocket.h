#ifndef _USOCKET_H_
#define _USOCKET_H_

#include <sys/types.h>          /* See NOTES */
#include <sys/socket.h>


int usocket(int domain, int type, int protocol);
int ubind(int sockfd, const struct sockaddr *addr, socklen_t addrlen);


#endif
