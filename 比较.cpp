#include <stdio.h>
#include <string.h>
int main(){
	char i[100],j[100];
	gets(i);
	gets(j);
	int x=strcmp(i,j);
	printf("%d",x);
	return 0;
}
