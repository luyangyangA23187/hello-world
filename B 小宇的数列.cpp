#include <stdio.h>
int main(){
	int a[100][5],i=0;
	for(;i<100;i++){
		scanf("%d %d %d %d %d",&a[i][0],&a[i][1],&a[i][2],&a[i][3],&a[i][4]); 
		if(a[i][0]==0&&a[i][1]==0&&a[i][2]==0&&a[i][3]==0&&a[i][4]==0) break;
	}
	for(int j=0;j<i;j++){
		if(2*a[j][3]==a[j][2]+a[j][4]){
			int x=a[j][4]-a[j][3],y=a[j][4];
		printf("case one\n%d %d %d %d %d\n",y+x,y+2*x,y+3*x,y+4*x,y+5*x);
		}
		if(a[j][3]*a[j][3]==a[j][2]*a[j][4]){
			int x=a[j][4]/a[j][3],y=a[j][4];
		printf("case two\n%d %d %d %d %d\n",y*x,y*x*x,y*x*x*x,y*x*x*x*x,y*x*x*x*x*x);	
		}
		if(a[j][4]==a[j][3]+a[j][2]){
			printf("case three\n");
			int x=a[j][3],y=a[j][4];
			for(int i=0;i<2;i++){
				x=x+y;
				y=x+y;
				printf("%d %d ",x,y);
			}
			printf("%d\n",x+y);
		}
	}
	return 0;
} 
