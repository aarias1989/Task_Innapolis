#ifndef ClientUDP_h
#define ClientUDP_h

#include <stdlib.h>
#include "Client.h"
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <iostream>
#include <unistd.h>

using namespace std;

class ClientUDP : public Client
{
public:
	ClientUDP();
	ClientUDP(char *ip, int port = 8080);
	~ClientUDP();
	int		read(char* recv_s);
	int		write(char *buffer);
};
#endif