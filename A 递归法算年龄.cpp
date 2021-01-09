#include <stdio.h>
int year(int n,int a,int k){
	if(n==1){return a;}
	else return k+year(n-1,a,k);} 
	int main(){
		int n,a,k;
		scanf("%d",&n);
		scanf("%d",&a);
		scanf("%d",&k);
		if(n>0&&n>=2&&a>0&&k>0&&a<=100&k<=100){
		printf("%d",year(n,a,k));
		return 0;}
		else printf("Wrong Number");
		return 0;
	}
