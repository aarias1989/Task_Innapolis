#include "ClientUDP.h"
#include <string.h>
using namespace std;

ClientUDP::ClientUDP(){
	sock = socket(PF_INET, SOCK_DGRAM, IPPROTO_UDP);
	if(sock == -1){
		cout<<"Error creating socket"<<endl;
		return;
	}
	memset(&sa, 0, sizeof sa);
	sa.sin_family = AF_INET;
	sa.sin_addr.s_addr = inet_addr("127.0.0.1");
	sa.sin_port = htons(7654);
}

ClientUDP::ClientUDP(char *ip, int port){
	sock = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
	if(sock == -1){
		cout<<"Error creating socket"<<endl;
		return;
	}
	memset(&sa, 0, sizeof sa);
	sa.sin_family = AF_INET;
	sa.sin_addr.s_addr = inet_addr(ip);
	sa.sin_port = htons(port);
}
ClientUDP::~ClientUDP(){
	close(sock);
}
int		ClientUDP::read(char* recv_s){
	int numbytes;
	socklen_t len = sizeof sa;
	numbytes = recvfrom(sock, recv_s, 1024, 0, (struct sockaddr*)&sa, &len);
	if(numbytes < 0)
	{
		std::cout<<"Error: receving packet data"<<endl;
	}
	recv_s[numbytes] = '\0';
	return numbytes;
}

int	ClientUDP::write(char buffer[]){
	int numbytes;
	numbytes = sendto(sock, buffer, strlen(buffer), 0,(struct sockaddr*)&sa, sizeof sa);
	if(numbytes < 0){
		cout<<"Error sending packet data"<<endl;
	}
	return numbytes;
}