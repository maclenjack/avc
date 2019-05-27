# include <stdio.h>
# include <time.h>

extern "C" int init(int d_lev);
extern "C" int connect_to_server( char server_addr[15],int port);
extern "C" int send_to_server(char message[24]);
extern "C" int receive_from_server(char message[24]);

int main () { 
	init(1);
	char ip = //{ 'e','n',ter IP HERE...};
	connect_to_server(ip,port/*port num just an int */);
	send_to_server("Please"); // can send anything to activate server?
	receive_from_server(password);
	send_to_server(password);// literally a ping pong
	
	return 0;
	}
