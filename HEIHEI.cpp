#include <stdio.h>
int main(){
	char A[31][20]={"\t"};
	int m,M[20],max=0,min=0;
	char C[20];
    scanf("%d",&m);
    for(int i=0;i<m;i++){
    	scanf("%d",&M[i]);
    	if(max<M[i]){max=M[i];}
    	if(min>M[i]){min=M[i];}
    	char ch;
    	if((ch=getchar())!=' '&&ch!='\n'){C[i]=ch;}
    	else C[i]='+';
    	A[15][i]='-';
	}
	for(int i=0;i<m;i++){
		if(M[i]>0){
		for(int j=1;j<=M[i];j++){
			A[15+j][i]=C[i];
		}}
		if(M[i]<0){
		for(int j=-1;j>=M[i];j--){
			A[15+j][i]=C[i];
		}}
	}
	for(int i=15+max;i>=14+min;i--){
		for(int j=0;j<m;j++){
			printf("%c",A[i][j]);
			if(i!=15){printf(" ");}
			if(i==15&&j!=m-1)printf("-");
		}
		printf("\n");
	}
	return 0;
}
