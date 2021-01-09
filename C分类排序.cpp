#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	getchar();
	for(int i=0;i<n;i++){
		int A[100],len=0;
		A:
        scanf("%d",&A[len]);
        len++;
        if(getchar()!='\n'){goto A;}
		for(int a=0;a<len;a++){
		for(int b=a;b<len;b++){
			int t=A[0];
			if(A[a]>A[b]){t=A[a];A[a]=A[b];A[b]=t;}
		}
		}
		for(int a=0;a<len;a++){if(A[a]%2!=0){printf("%d ",A[a]);}}
		for(int a=0;a<len;a++){if(A[a]%2==0){printf("%d ",A[a]);}}
		printf("\n");
	}
	return 0;
}
