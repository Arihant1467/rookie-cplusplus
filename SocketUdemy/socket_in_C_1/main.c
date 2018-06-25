#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
int main()
{
    //create a network socket
    int network_socket;
    //parameters 1-to specify internet socket
    //2-t specify stream
    //3-to specify which protocol 0 for default ie TCP protocol
    network_socket=socket(AF_INET,SOCK_STREAM,0);
    struct sockaddr_in server_address;
    server_address.sin_family=AF_INET;
    server_address.sin_port=htoans(9002);
    server_address.sin_addr.s_addr=INADDR_ANY;
    int connection_status=connect(network_socket,(struct sockaddr*) &server_address,sizeof(server_address));
    return 0;
}
