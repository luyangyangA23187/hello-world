#include <stdio.h> 
void kong(){
printf("ţ��\n");
return ;
}
int main(){
	kong();
	int A[2];
	A[0]=1;
	A[1]=2;
	printf("%d",*(A+1));
	return 0;
}
