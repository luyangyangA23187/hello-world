#include <stdio.h>
int ss(int x){
     int a=x%10,b=x/10%10,c=x/100%10;
	 	if(x==a*a*a+b*b*b+c*c*c){return 1;}
	 	else return 0;
}
int main(){
	int i;
	scanf("%d",&i);
	for(int j=0;j<i;j++){
		int m,n,t=0;
		scanf("%d",&m);
		scanf("%d",&n);
		for(;m<=n;m++){if(ss(m)){printf("%d ",m);t=1;}}
		if(t){printf("\n");}
		else printf("-1\n");
	}
	return 0;
}
