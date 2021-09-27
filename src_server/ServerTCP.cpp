#include "ServerTCP.h"
#include <string.h>

using namespace std;

ServerTCP::ServerTCP(){
	sock = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
	if(sock == -1){
		cout<<"Error creating the socket"<<endl;
		return;
	}
	memset(&server, 0, sizeof server);
	server.sin_family = AF_INET;
	server.sin_port = htons(7655);
	server.sin_addr.s_addr = htonl(INADDR_ANY);
	if(bind(sock, (struct sockaddr *)&server, sizeof server) == -1){
		cout<<"Error making the bind"<<endl;
		close(sock);
		return;
	}
	if(listen(sock, 10) == -1){
		cout<<"Error listening"<<endl;
		close(sock);
		return;
	}
}
ServerTCP::ServerTCP(int port){
	sock = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
	if(sock == -1){
		cout<<"Error creating the socket"<<endl;
		return;
	}
	memset(&server, 0, sizeof server);
	server.sin_family = AF_INET;
	server.sin_port = htons(port);
	server.sin_addr.s_addr = htonl(INADDR_ANY);
	if(bind(sock, (struct sockaddr *)&server, sizeof server) == -1){
		cout<<"Error making the bind"<<endl;
		close(sock);
		return;
	}
	if(listen(sock, 10) == -1){
		cout<<"Error listening"<<endl;
		return;
	}
}
ServerTCP::~ServerTCP()
{
	close(sock);
	close(client_sock);
}
int 	ServerTCP::acceptClient(){
	unsigned int addr_len;
	addr_len = sizeof(struct sockaddr_in);
	client_sock = accept(sock, (struct sockaddr *)&sa_client, &addr_len);
	if(client_sock == -1){
		cout<<"Error accepting conection"<<endl;
		close(sock);
	}
	return client_sock;
}
int 	ServerTCP::read(char *recv_s){
	int numbytes;
	numbytes = recv(client_sock, (void *)recv_s, 1024, 0);
	if(numbytes < 0){
		cout<<"Error receving packet data"<<endl;
	}
	recv_s[numbytes] = '\0';
	return numbytes;
}
int ServerTCP::write(char* buffer){
	int numbytes;
	numbytes = send(client_sock, buffer, strlen(buffer), 0);
	if(numbytes < 0){
		cout<<"Error sending packet data"<<endl;
	}
	return numbytes;
	//close(client_sock);
}
void	ServerTCP::close_s(){
	close(client_sock);
	//close(sock);
}