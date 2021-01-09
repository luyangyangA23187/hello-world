 #include <stdio.h>
void SR(int A[50][50],const int c,int m,int n){
	int t;
	t=A[m][c];
	A[m][c]=A[n][c];
	A[n][c]=t;
	if(c==0){return ;}
	return SR(A,c-1,m,n);
}
void SC(int A[50][50],const int r,int m,int n){
	int t;
	t=A[r][m];
	A[r][m]=A[r][n];
	A[r][n]=t;
	if(r==0){return ;}
	return SC(A,r-1,m,n);
}
void DR(int A[50][50],int a,int r,int c){
	SR(A,c,a,a+1);
	if(a==r){return ;}
	return DR(A,a+1,r,c);
}
void DC(int A[50][50],int a,int r,int c){
	SC(A,r,a,a+1);
	if(a==c){return ;}
	return DC(A,a+1,r,c);
}
void IR(int A[50][50],int a,int r,int c){
	SR(A,c,r+1,r);
	if(r==a){return ;}
	return IR(A,a,r-1,c);
}
void IC(int A[50][50],int a,int r,int c){
	SC(A,r,c+1,c);
	if(c==a){return ;}
	return IC(A,a,r,c-1);
}
int main(){
	int A[50][50];
	int r,c;
	scanf("%d %d",&r,&c);
	for(int a=0;a<r;a++){
		for(int b=0;b<c;b++){
			scanf("%d",&A[a][b]);
		}
	}
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		char O[3];
		scanf("%s",O);
		  if(O[0]=='S'&&O[1]=='R'){
		  	int a,b;
		  	scanf("%d %d",&a,&b);
		  	SR(A,c-1,a-1,b-1);
		}
		 if(O[0]=='S'&&O[1]=='C'){
		  	int a,b;
		  	scanf("%d %d",&a,&b);
		  	SC(A,c-1,a-1,b-1);
		}
		 if(O[0]=='D'&&O[1]=='R'){
		 	int a;
		 	scanf("%d",&a);
		 	DR(A,a-1,r-1,c-1);
		 	for(int j=0;j<c;j++){
		 		A[r][j]=0;
			 }
		 	r-=1;
		 }
		 if(O[0]=='D'&&O[1]=='C'){
		 	int a;
		 	scanf("%d",&a);
		 	DC(A,a-1,r-1,c-1);
		 	for(int j=0;j<r;j++){
		 		A[c][j]=0;
			 }
		 	c-=1;}
		 if(O[0]=='I'&&O[1]=='R'){
		 	int a;
		 	scanf("%d",&a);
		 	IR(A,a-1,r-1,c-1);
		 	r+=1;}
		 if(O[0]=='I'&&O[1]=='C'){
		 	int a;
		 	scanf("%d",&a);
		 	IC(A,a-1,r-1,c-1);
		 	c+=1;}	
		 }		
	for(int a=0;a<r;a++){
		for(int b=0;b<c;b++){
			printf("%d ",A[a][b]);}
			printf("\n");}
}
