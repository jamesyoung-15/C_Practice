#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/socket.h>

#include <netinet/in.h>

int main()
{
    //create socket
    int network_socket;
    network_socket = socket(AF_INET, SOCK_STREAM, 0);

    //address for socket
    struct sockaddr_in server_adress;
    server_adress.sin_family = AF_INET;
    server_adress.sin_port = htons(9002);
    return 0;
}