#include <stdio.h>
int main(){
int a[100][5],i=0;
    for(;1;i++){
    	for(int j=0;j<5;j++){
    		scanf("%d",&a[i][j]);
		}
		if(a[i][1]==0&&a[i][2]==0&&a[i][3]==0&&a[i][4]==0&&a[i][5]==0){break;}
	}
	for(;i>=0;i--){
		if(a[i][5]-a[i][4]==a[i][4]-a[i][3]&&a[i][4]-a[i][3]==a[i][3]-a[i][2]
		&&a[i][3]-a[i][2]==a[i][2]-a[i][1]){
			int x=a[i][5]-a[i][4],y=a[i][5];
			printf("case one\n%d %d %d %d %d",y+x,y+2*x,y+3*x,y+4*x,y+5*x);
		}
	}
}


