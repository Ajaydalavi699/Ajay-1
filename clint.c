#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<arpa/inet.h>
#include<netinet/in.h>
#include<sys/socket.h>

unsigned size=sizeof(const struct sockaddr_in);
int main()
{
 int len,sockfd;
 char string[20];
 struct sockaddr_in client={AF_INET,8000,INADDR_ANY};
 client.sin_addr.s_addr=inet_addr("127.0.0.1");
 sockfd=socket(AF_INET,SOCK_STREAM,0);
 connect(sockfd,(struct sockaddr*)&client,size);
 printf("Enter String");
 scanf("%s",&string);
 send(sockfd,&string,sizeof(string),0);
 recv(sockfd,&len,sizeof(len),0);
 printf("length=%d",len);
 close(sockfd);
 return 0;
 }

