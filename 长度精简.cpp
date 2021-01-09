#include <stdio.h>
int main(void){
	int len=0;
	printf("Enter:");
	while(getchar()!='\n'){
		len++;
	}
	printf("length:%d",len); 
	return 0;
}
