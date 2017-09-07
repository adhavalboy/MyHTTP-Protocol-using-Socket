#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<netinet/in.h>
#define PORT 5252
#define REQ 5
int main(){
 FILE *html_data;
 int opt = 1;
 html_data= fopen("index.html","r");//open index.html
 char response_data[1024];
 fgets(response_data,1024,html_data);//response data read 1024 byte from html_data
 char http_header[2048]="HTTP/1.1 200 OK\r\n\n"; // responce to client on success 
 strcat(http_header,response_data);//concate header and data
 
 //create server socket 
 int server_socket;
 server_socket=socket(AF_INET,SOCK_STREAM,0);
 if (setsockopt(server_socket, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT,
                                                  &opt, sizeof(opt)))//getrid of socket bind error
    {
        perror("setsockopt");
        exit(EXIT_FAILURE);
    }
 //define the address 
 struct sockaddr_in server_address;
 server_address.sin_family=AF_INET;
 server_address.sin_port=htons(PORT);
 server_address.sin_addr.s_addr=INADDR_ANY;
 if(bind(server_socket,(struct sockaddr*)&server_address,sizeof(server_address))<0){
 printf("bind error \n");
 exit(0);
 }
 if(listen(server_socket,REQ)<0){
 printf("Server not listen Your Request");
 exit(0);
 }
/* int stat=accept(server_socket,
 (struct sockaddr*)&server_address,NULL,NULL);
 */
 int client_socket;
 while(1){
 client_socket=accept(server_socket,NULL,NULL);
 send(client_socket,http_header,sizeof(http_header),0);
 close(client_socket);
 }
 
return 0;
}
