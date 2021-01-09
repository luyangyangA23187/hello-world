#include<stdio.h>
check(int x,int *A,int n){
	for(int i=0;i<n;i++){
		if(*(A+i)==x){return 1;}
	}
	return 0;
}
int main(){ 
int n;
scanf("%d",&n);
int A[n],len=0; 
for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
		if(!check(A[i],A,i)){len++;}
		}
		printf("%d",len);
} 
