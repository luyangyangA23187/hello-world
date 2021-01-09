#include <stdio.h>
float e(float n)
{
	return 1+n+n*n/2+n*n*n/6+n*n*n*n/24; 
} 
int main(void){
int x;
scanf("%f",&x);
printf("%f",e(x));
return 0;
} 
