#ifndef ClientTCP_h
#define ClientTCP_h

#include "Client.h"
#include <iostream>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <netdb.h>

class ClientTCP : public Client
{
public:
	ClientTCP();
	ClientTCP(char *ip, int port);
	~ClientTCP();
	int		read(char *recv_s);
	int 	write(char *buffer);
};
#endif