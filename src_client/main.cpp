#include "ClientUDP.h"
#include "ClientTCP.h"
#include "Client.h"
#include <termios.h>
#include <unistd.h>
#include <cstring>

using namespace std;

int main(int argc, char** argv){
	char buffer[1024];
	char *recv = new char[1024];
	int num;
	Client *client;

	termios oldt;
    tcgetattr(STDIN_FILENO, &oldt);
    termios newt = oldt;
    newt.c_lflag &= ~ECHO;
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);

	if(argc > 1 && (strcmp(argv[1], "UDP")==0)){
		if(argc > 3){
			client = new ClientUDP(argv[2], atoi(argv[3]));
		}
		else{
			client = new ClientUDP();
		}
	}
	else if((argc == 1) || (strcmp(argv[1], "TCP")==0)){
		if(argc > 3){
			client = new ClientTCP(argv[2], atoi(argv[3]));
		}
		else{
			client = new ClientTCP();
		}
	}
	else{
		tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
		delete recv;
		return 0;
	}

	if(client->getSock() == -1)
	{
		tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
		delete recv;
		delete client;
		return 0;
	}
	fgets(buffer, 1024, stdin);

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
	num = client->write(buffer);
	if(num == 1){
		delete recv;
		delete client;
		return 0;
	}
	num = client->read(recv);
	cout<<recv<<endl;
	delete recv;
	delete client;
	return 0;
}