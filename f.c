#include<stdio.h>
#include<string.h>
void main(){
	char *ch;
ch=malloc(sizeof(char)*102);
	char ch2[30];

	FILE *fp;
	fp=fopen("Abc.txt","r");
	fgets(ch,100,fp);
	puts(ch);
puts(ch2);
}
















