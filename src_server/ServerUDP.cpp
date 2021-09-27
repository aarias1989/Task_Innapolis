#include "ServerUDP.h"
#include <iostream>
#include <string.h>

using namespace std;

ServerUDP::ServerUDP(){
	int port;

	port = 7654;
	memset(&server, 0, sizeof server);
	server.sin_family = AF_INET;
	server.sin_port = htons(port);
	server.sin_addr.s_addr = htonl(INADDR_ANY);
	if((sock = socket(PF_INET, SOCK_DGRAM, IPPROTO_UDP)) < 0)
	{
		cout<<"Error: Don't open socket server"<<endl;
		return;
	}
	if (bind(sock, (struct sockaddr *)&server, sizeof server) == -1)
	{
		cout<<"Error: Bind() was problem"<<endl;
		close(sock);
		return;
	}

}
ServerUDP::ServerUDP(int port){
	server.sin_family = AF_INET;
	server.sin_port = htons(port);
	server.sin_addr.s_addr = htonl(INADDR_ANY);
	//server.sin_addr.s_addr = inet_addr(ip);
	if((sock = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP)) < 0)
	{
		cout<<"Error: Don't open socket server"<<endl;
		return;
	}
	if(bind(sock, (struct sockaddr*)&server, sizeof(struct sockaddr)) == -1)
	{
		cout<<"Error: Bind() was problem"<<endl;
		//close(sock);
		return;
	}
}
ServerUDP::~ServerUDP(){
	close(sock);
}
int 	ServerUDP::read(char* recv_s){
	//char *buffer = new char;
	ssize_t numbytes;
	socklen_t fromlen;
	fromlen = sizeof server;
	numbytes = recvfrom(sock, (void*)recv_s, 1024, 0, (struct sockaddr*)&server, &fromlen);
	if(numbytes < 0)
	{
		cout<<"Error: receving packet data"<<(int)numbytes<<endl;
		//return NULL; 
	}
	recv_s[numbytes] = '\0';
	return numbytes;
}
int 	ServerUDP::write(char *buffer){
	int numbytes;
	numbytes = sendto(sock, buffer, strlen(buffer), 0,(struct sockaddr*)&server, sizeof server);
	if(numbytes < 0)
	{
		cout<<"Error sending packet data"<<endl;
	}
	return numbytes;
}
void	ServerUDP::close_s(){
	//close(sock);
}