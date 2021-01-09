#include <stdio.h>
int main(){
	char A[30][39]={"\t"};
	int m,M[20],max=0,min=0;
	char C[20];
    scanf("%d",&m);
    if(m<0||m>20){return 0;}
    for(int i=0;i<m;i++){
    	scanf("%d",&M[i]);
    	if(max<M[i]){max=M[i];}
    	if(min>M[i]){min=M[i];}
    	char ch;
    	if((ch=getchar())!=' '&&ch!='\n'){C[i]=ch;}
    	else C[i]='+';
    	A[15][2*i]='-';
    	A[15][2*i-1]='-';
	}
	for(int i=0;i<m;i++){
		if(M[i]>0){
		for(int j=1;j<=M[i];j++){
			A[15+j][2*i]=C[i];
		}}
		if(M[i]<0){
		for(int j=-1;j>=M[i];j--){
			A[15+j][2*i]=C[i];
		}}
	}
	for(int i=15+max;i>=14+min;i--){
		for(int j=0;j<2*m+1;j++){
			printf("%c",A[i][j]);
		}
		printf("\n");
	}
	return 0;
}
