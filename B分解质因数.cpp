#include <stdio.h>
int main(){
	int k;
	scanf("%d",&k);
	for(int i=0;i<k;i++){
		int num;
		scanf("%d",&num);
		for(int a=2;a<=num;a++){
			if(a==num){printf("%d",num); break;}
			if(num%a==0){printf("%d*",a);num=num/a;a=1;}
		}
		printf("\n");}	
	return 0;
}
