#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        int a, b, c, d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
		if(a>b){int t=a;a=b;b=t;} 
		if(a>c){int t=a;a=c;c=t;}
		if(a>d){int t=a;a=d;d=t;}  
		if(b>c){int t=b;b=c;c=t;}
		if(b>d){int t=b;b=d;d=t;}
		if(c>d){int t=c;c=d;d=t;}
		printf("%d %d %d %d",a,b,c,d);        
    }
    return 0;
}
