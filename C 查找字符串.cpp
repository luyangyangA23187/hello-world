#include <stdio.h>
#include <string.h>
int main(){
	int i,j=0;
	scanf("%d",&i);
	if(i>=10) return 0;
	for(;j<i;j++){
		char A[100];
		int n=0;
		scanf("%s",A);
		int b=strlen(A)-1,a=0;
	while(a<b){
		if(A[a]=='A'){a++;}
		if(A[a]=='S'&&A[a+1]=='C'&&A[a+2]=='U'){a+=3;n=1;}
		if(A[a]!='A'&&A[a]!=0) break;
	}
	if (a>=b&&n==1){printf("YES\n");}
	else {printf("NO\n");}
	}
}
