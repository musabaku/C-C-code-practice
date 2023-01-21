#include <stdio.h>
#include <sys/socket.h> //For Sockets
#include <stdlib.h>
#include <netinet/in.h> //For the AF_INET (Address Family)

struct sockaddr_in serv; //This is our main socket variable.
int fd; //This is the socket file descriptor that will be used to identify the socket
int conn; //This is the connection file descriptor that will be used to distinguish client connections.
char message[100] = ""; //This array will store the messages that are sent by the server

serv.sin_family = AF_INET;
serv.sin_port = htons(8096); //Define the port at which the server will listen for connections.
server.sin_addr.s_addr = INADDR_ANY;
fd = socket(AF_INET, SOCK_STREAM, 0); //This will create a new socket and also return the identifier of the socket into fd.
// To handle errors, you can add an if condition that checks whether fd is greater than 0. If it isn't, prompt an error
bind(fd, (struct sockaddr *)&serv, sizeof(serv)); //assigns the address specified by serv to the socket
listen(fd,5); //Listen for client connections. Maximum 5 connections will be permitted.
//Now we start handling the connections.
while(conn = accept(fd, (struct sockaddr *)NULL, NULL)) {
    int pid;
    if((pid = fork()) == 0) {
        while (recv(conn, message, 100, 0)>0) {
            printf("Message Received: %s\n", message);
            //An extra breaking condition can be added here (to terminate the child process)            
            message = "";
        }
        exit(0);
    }
}


fd = socket(AF_INET, SOCK_STREAM, 0);
server.sin_family = AF_INET;
server.sin_port = htons(8096);
inet_pton(AF_INET, "127.0.0.1", &serv.sin_addr); //This binds the client to localhost
connect(fd, (struct sockaddr *)&serv, sizeof(serv))); //This connects the client to the server.
while(1) {
    printf("Enter a message: ");
    fgets(message, 100, stdin);
    send(fd, message, strlen(message), 0);
    //An extra breaking condition can be added here (to terminate the while loop)
}