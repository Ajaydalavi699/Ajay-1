#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<arpa/inet.h>
#include<netinet/in.h>
#include<sys/socket.h>
int newsockfd;
unsigned size=sizeof(const struct sockaddr_in);
int main()
{
 int len,sockfd;
 char string[20];
 const struct sockaddr_in server={AF_INET,8000,INADDR_ANY};
 sockfd=socket(AF_INET,SOCK_STREAM,0);
 bind(sockfd,(struct sockaddr*)&server,size);
 listen(sockfd,5);
 newsockfd=accept(sockfd,0,0);
 recv(newsockfd,&string,sizeof(string),0);
 len=strlen(string);
 send(newsockfd,&len,sizeof(len),0);
 close(newsockfd);
 close(sockfd);
 return 0;
}
