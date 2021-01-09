#include <stdio.h>
int abs(int x){
	if(x>=0){return x;}
	else return -x;
} 
int main(){
	int m,A[20],max;
	scanf("%d",&m);
	if(m>=1&&m<=20){
	for(int i=0;i<m;i++){
		scanf("%d",&A[i]);}
	}
	max=abs(A[0]);
	int n=0;
	for(int i=0;i<m;i++){
		if(max<abs(A[i])){max=abs(A[i]);n=i;}
	}	
	printf("%d",A[n]);
} 
