#include <stdio.h>
#include <string.h>
#define a/n 10 
int main(){
	char str1[20]={0},str2[20]={0};
    char ch;
    for(int i=0;(ch=getchar())!='\n';i++){str1[i]=ch;}
	str2[0]='1',str2[1]='2',str2[2]='3';	
	printf("%d\n",strcmp(str1,str2));
	printf("%d",str1[3]);
}


