#include <stdio.h>
void combine(int* A,int n){
	if(n==0){printf("--> \n"); return ;}
	else printf("-->");
	for(int i=0;i<n;i++){
	printf("%d ",*(A+i));
	}
	printf("\n");
	return combine(A,n-1);
}
int main(){
	int n;
	scanf("%d",&n);
	int Num[n];
	for(int a=0;a<n;a++){
		scanf("%d",&Num[a]);
	}
	combine(Num,n);
	return 0;
}
