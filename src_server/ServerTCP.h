#ifndef ServerTCP_h
#define ServerTCP_h

#include "Server.h"
#include <iostream>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include <unistd.h>

class ServerTCP : public Server
{
public:
	ServerTCP();
	ServerTCP(int port);
	~ServerTCP();
	int		acceptClient();
	int 	read(char* recv_s);
	int 	write(char* buffer);
	void	close_s();
private:
	int 	client_sock;
	struct 	sockaddr_in sa_client;
};
#endif