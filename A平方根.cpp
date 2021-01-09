#include <stdio.h>
#include <math.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int m;
		scanf("%d",&m);
		if(m>=0&&m<=10000){printf("%.2f\n",(float)sqrt(m));}
		else printf("ERROR");
	}
	return 0;
}
