#include <stdio.h>
#include <string.h>
int main(){
	char A[20],B[20];
	gets(A);
	gets(B);
	int x=strcmp(A,B);
	printf("%d",x);
} 
