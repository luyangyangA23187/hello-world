#include <stdio.h>
#include <string.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int len;
		char N[33];
		scanf("%s",&N);
		len=strlen(N);
		for(int a=0,b=len-1;a<=b;a++,b--){
			if(N[a]!=N[b]){printf("No\n");break;}
			if(a==b||a+1==b){printf("Yes\n");break;}
		}
	}
	return 0;
}
