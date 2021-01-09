#include <stdio.h>
#include <stdlib.h>
int main(){
	int A[10];
	for(int i=0;i<10;i++){
		scanf("%d",&A[i]);
	}
	qsort(A,10,sizeof(A[0]));
	for(int i=0;i<10;i++){
		printf("%d\n",A[i]);
	}
	return 0;
} 
