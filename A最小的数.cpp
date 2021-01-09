#include <stdio.h>
int main(){
	int A[10];
	for(int i=0;i<10;i++){scanf("%d",&A[i]);}
	for(int i=0;i<10;i++){
		for(int j=i;j<10;j++){
			int t;
			if(A[i]>A[j]){t=A[i];A[i]=A[j];A[j]=t;}
		}
	}
	if(A[0]==0){
		int i=0,t;
		while(A[i]==0){
			i++;
		}
		A[0]=A[i];
		A[i]=0;
	}
	for(int i=0;i<10;i++){printf("%d",A[i]);}
}
