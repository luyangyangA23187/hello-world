#include <stdio.h>
int main(){
	int N;
	scanf("%d",&N);
	float n=-1;
	float sum;
	for(int i=0;i<N;i++){
		scanf("%f",&n);
		if(n=-1){N--,continue}
		sum=sum+n;
	}
	printf("%.2f",sum/N);
}
