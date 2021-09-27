#include "Server.h"
#include "ServerUDP.h"
#include "ServerTCP.h"
#include "ManipStr.h"
#include <cstring>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char** argv){
	char *recv = new char[1024];
	Server *server;
	ManipStr text;
	if(argc > 1 && (strcmp(argv[1], "UDP")==0)){
		if(argc > 2){
			server = new ServerUDP(atoi(argv[2]));
		}
		else{
			server = new ServerUDP();
		}
	}
	else if((argc == 1) || (strcmp(argv[1], "TCP")==0)){
		if(argc > 2){
			server = new ServerTCP(atoi(argv[2]));
		}
		else{
			server = new ServerTCP();
		}
	}
	int numby = 0;
	while(1){
		server->acceptClient();
		numby = server->read(recv);
		if(numby == 1){
			continue;
		}
		text.createVector(recv);
		text.orderStr();
		text.calculateSum();
		text.createStr();
		server->write((char*)text.getAns().c_str());
		text.clearData();
		server->close_s();
	}
	delete recv;
	delete server;
	exit(0);
}