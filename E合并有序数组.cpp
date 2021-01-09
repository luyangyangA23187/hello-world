#include <stdio.h>
int main(){
	int n,m,t;
	scanf("%d %d",&n,&m);
	t=m+n;
	int A[n],B[m],C[t];
	for(int i=0;i<n;i++){scanf("%d",&A[i]);}
	for(int i=0;i<m;i++){scanf("%d",&B[i]);}
	for(int i=0;i<n;i++){C[i]=A[i];}
	for(int i=n;i<t;i++){C[i]=B[i-n];}
    for(int i=0;i<t;i++){
    	for(int j=i;j<t;j++){
    		if(C[i]>C[j]){int mid=C[i];C[i]=C[j];C[j]=mid;}
		}
	}
	for(int i=0;i<t;i++){printf("%d ",C[i]);}
	return 0;
}
