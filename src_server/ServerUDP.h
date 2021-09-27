#ifndef ServerUDP_h
#define ServerUDP_h

#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include "Server.h"

using namespace std;

class ServerUDP : public Server{
public:
	ServerUDP();
	ServerUDP(int port);
	~ServerUDP();
	int		acceptClient(){return 0;};
	int 	read(char* recv_s);
	int		write(char *buffer);
	void	close_s();
};
#endif
