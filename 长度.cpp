#include <stdio.h>
int main(void){
int len=0; 
char ch,x;
printf("Enter a message:");
x=getchar();
ch=getchar();
while(ch!='\n'){
	len++;
	ch=getchar();
}
printf("Fength:%d\nCapital:%c",len,x);
return 0;
}
