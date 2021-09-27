#include "Server.h"

Server::Server(){}
Server::~Server(){
	close(sock);
}
