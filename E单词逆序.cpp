#include <stdio.h>
int main(){
	char ch,A[10000];
	int Alen=0;
	while((ch=getchar())!='\n'){A[Alen]=ch;Alen++;}
	for(int i=0;i<Alen;i++){
		int len;
		len=0;
		while(A[i]>='A'&&A[i]<='z'){
			i++;
			len++;
		}
		if(len){
		for(int a=i-len,b=i-1;a<=b;a++,b--){
			char t;
			t=A[a];A[a]=A[b];A[b]=t;}
		}
	}
	printf("%s",A);
}
