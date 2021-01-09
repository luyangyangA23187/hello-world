#include <stdio.h>
int main(void){
	char a[1000],*p=a;
	int N=0;
while(N<100) {
	*(p+N)=getchar();
	N++;
    if(*(p+N-1)=='\n')
	break;
}
for(int i=0;i<N;i++){
	printf("%c",*(p+i));
}
return 0;
}
	
