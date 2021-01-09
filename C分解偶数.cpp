#include <stdio.h>
int ss(int n){
	for(int i=n-1;i>1;i--){
		if(n%i==0){return 0;}
		if(i==2){return 1;}
	}
}
int rs(int n){
	if(n%2==0){return 1;} 
	else return 0;
}	

int main(){
	int x,a,b;
	scanf("%d",&x);
	if(x<=6||!rs(x)){printf("ERROR"); return 0;}
	a=3;
	b=x-3;
	while(a<=b){
		if(ss(a)&&ss(b)){printf("%d %d\n",a,b);}
		a++;
		b--;
	}
}
