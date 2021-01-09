#include <stdio.h>
#include <string.h>
int main(){
	int num;
	scanf("%d",&num);
for(int p=0;p<num;p++){
char A1[500],B1[500];
scanf("%s %s",&A1,&B1);
int Alen=strlen(A1),Blen=strlen(B1);
int A[500],B[500],ans[1000]={0},anslen=0;
for(int i=0;i<Alen;i++){
	A[i]=A1[i]-48;
}
for(int i=0;i<Blen;i++){
	B[i]=B1[i]-48;
}
for(int a=Alen-1,m=0;a>=0;m++,a--){
	int y1;
	int mid[1000],midlen;
	y1=0;
	for(int n=m,b=Blen-1;b>=0;n++,b--){
		if((A[a]*B[b]+y1)<10){mid[n]=A[a]*B[b]+y1;}
		else {mid[n]=(A[a]*B[b]+y1)%10;}
		y1=(A[a]*B[b]+y1)/10;
		if(b==0){mid[n+1]=y1;midlen=n+1;}
	}
	int y2;
	y2=0;
	for(int i=m;i<=midlen;i++){
	   int x=ans[i];
		if((ans[i]+mid[i]+y2)<10){ans[i]=ans[i]+mid[i]+y2;}
		else {ans[i]=(ans[i]+mid[i]+y2)%10;}
			y2=(x+mid[i]+y2)/10;
		  anslen=i;}
	} 
	int i=anslen,sum=0;
	 while(!ans[i]){i--;}
for(;i>=0;i--){
printf("%d",ans[i]);
}
printf("\n");}
return 0;
}
