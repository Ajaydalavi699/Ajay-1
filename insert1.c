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
 int a[10],n,i,j;
 struct sockaddr_in client={AF_INET,8000,INADDR_ANY};
 client.sin_addr.s_addr=inet_addr("127.0.0.1");
 sockfd=socket(AF_INET,SOCK_STREAM,0);
 connect(sockfd,(struct sockaddr*)&client,size);
 printf("Enter number of element\n");
 scanf("%d",&n);
 
 printf("Enter arry");
 for(i=1;i<n;i++)
 {
  scanf("%d",&a[i]);
 
 send(sockfd,&a,sizeof(a),0);
 }
recv(sockfd,&a,sizeof(a),0);
for(i=1;i<n;i++)
{
 printf("%d",a[i]);
}
 
 close(sockfd);
 return 0;
 }

