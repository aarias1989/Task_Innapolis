#ifndef Server_h
#define Server_h

#include <arpa/inet.h>
#include <unistd.h>

class Server
{
public:
	Server();
	~Server();
	virtual int		read(char* recv_s)=0;
	virtual int		write(char* buffer)=0;
	virtual int		acceptClient()=0;
	virtual void	close_s()=0;
protected:
	int sock;
	struct sockaddr_in server;
};
#endif