#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *news(const char *s1,const char *s2){
	char *p;
	p=(char*)malloc(strlen(s1)+strlen(s2)+1);
	strcpy(p,s1);
	strcat(p,s2);
	return p;
}
int main(){
	char n[100],m[100],*p;
	gets(n);
	gets(m);
	p=news(n,m);
	printf(p);
	printf("\n");
    printf("%d",strlen(p));
	return 0;
}
