#include <stdio.h>
#include <stdlib.h>
void clear(char A[100]){
	for(int i=0;i<100;i++){A[i]=0;}
}
int main(){
	int N,T;
	scanf("%d",&N);
	char A[100];
	float sum;
	for(int i=0;i<N-1;){
		T=0;
		char ch;
		Q:
		ch=getchar();
		if((ch=getchar()!='n')&&ch!=' '&&ch!='\n'){
			int a=0;
			A[a]=ch;
			a++;
			i++;
			T=1;
			goto Q;
		}
		if(T){sum+=atoi(A);}
		clear(A);
		if(ch=='n'){N--;getchar();getchar();}
	}
	if(!N){printf("n/a");}
	else printf("%.2f",sum/N);
	}

