#include <stdio.h>
#include <math.h>
int main(void){
float x,y,z;
	printf("���������ε������߳���дһ����һ��:");
	scanf("%f %f %f",&x,&y,&z);
	float p=(x+y+z)/2;
    float h=p*(p-x)*(p-y)*(p-z);
    h=sqrt(h);
	printf("%f",h); 
	return 0;
} 
