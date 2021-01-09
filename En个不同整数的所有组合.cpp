#include <stdio.h>
void com(int *A,int n,int x){
	if(n==1){return ;}
	printf("%d ",*A);
	com(A+1,n-1,x);
}
int main(){
	int A[5]={1,2,3,4,5};
	com(A,5,3);
}
