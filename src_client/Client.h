#ifndef Client_h
#define Client_h

#include <arpa/inet.h>


class Client
{
public:
	virtual int	read(char* recv_s)=0;
	virtual int 	write(char* buffer)=0;
	int	getSock(){return sock;};
protected:
	int sock;
	struct sockaddr_in sa;
};
#endif
