#include "ClientTCP.h"
#include <iostream>
#include <string.h>

using namespace std;

ClientTCP::ClientTCP(){
	int con;
	sock = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
	if(sock == -1){
		cout<<"Error creating socket"<<endl;
		return;
	}
	memset(&sa, 0, sizeof sa);
	sa.sin_family = AF_INET;
	sa.sin_addr.s_addr = inet_addr("127.0.0.1");
	sa.sin_port = htons(7655);
	con = connect(sock, (struct sockaddr *)&sa, sizeof(struct sockaddr));
	if(con == -1)
	{
		std::cout<<"Error: connect()\n";
		close(sock);
		sock = -1;
		return;
	}
}
ClientTCP::ClientTCP(char *ip, int port){
	int con;
	sock = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
	if(sock == -1){
		cout<<"Error creating socket"<<endl;
		return;
	}
	memset(&sa, 0, sizeof sa);
	sa.sin_family = AF_INET;
	sa.sin_addr.s_addr = inet_addr(ip);
	sa.sin_port = htons(port);
	con = connect(sock, (struct sockaddr*)&sa, sizeof(struct sockaddr));
	if(con == -1)
	{
		std::cout<<"Error: connect()\n";
		close(sock);
		sock = -1;
		return;
	}
}
ClientTCP::~ClientTCP(){
	close(sock);
}
int		ClientTCP::read(char* recv_s){
	int numbytes;
	if((numbytes = recv(sock, (void *)recv_s, 1024, 0)) == -1)
	{
		std::cout<<"Error: recv()";
	}
	recv_s[numbytes] = '\0';
	return numbytes;
}
int 	ClientTCP::write(char *buffer){
	int numbytes;
	numbytes = send(sock, buffer, strlen(buffer), 0);
	if(numbytes < 0){
		cout<<"Error sending packet data"<<endl;
	}
	return numbytes;
}
