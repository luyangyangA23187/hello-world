#include <stdio.h>
int main(void){
int i=0,n;
float x,y;
scanf("%f",&x);
scanf("%d",&n);
y=x;
while(i++,i<=n)
{
	y=y*x;
}
y=1-y;
printf("%f",y) ;
return 0;
}
