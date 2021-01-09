#include <stdio.h>
#include <string.h>
int main(){
	int M;
	scanf("%d",&M);
	getchar();
	char str[201];
    if(M>=0){gets(str);};
    int len=strlen(str);
	for(int i=0;i<M;i++){
		printf("%c",str[len-M+i]);
	}
	for(int i=0;i<len-M;i++){
		printf("%c",str[i]);
	}
	return 0;
}
