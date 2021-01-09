#include <stdio.h>
int main(void){
	int N,i=0,j;
	printf("Num:");
	scanf("%d",&N);
	int a[N];
	while(i<N){
		scanf("%d",&a[i]);
		i++;
	}
	for(j=0;j<N;j++){
		for(i=j;i<N;i++){
			if(a[j]>a[i]){
			int t=a[i];
			a[i]=a[j];
			a[j]=t;
			}
		}
	}
	for(j=0;j<N;j++)
	printf("%d ",a[j]);
	return 0;
}
