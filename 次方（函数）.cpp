#include <stdio.h>
double power(double n,int i)
{
	int j=0;
	double x=1;
	while(j<i){
		x*=n;
		j++;
	}
	return x;
 } 
 int main(){
 	double n;
 	int i;
 	scanf("%lf %ld",&n,&i);
 	printf("%f",power(n,i));
 	return 0;
 }
