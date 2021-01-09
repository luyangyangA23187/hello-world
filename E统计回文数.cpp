#include <stdio.h>
#include <string.h>
struct target{
	char num[1000];
	int have;
	int len;
};
int hw(char mid[1000],int len){
	int a=0,b=len-1;
	if(mid[0]=='0'){return 0;}
	while(a<b){
		if(mid[a]!=mid[b]){return 0;}
		a++;
		b--;
		if(a>=b){return 1;}		
	}
}
int check(struct target A[1000],char* mid,int m){
	for(int i=0;i<m;i++){
		if(strcmp(A[i].num,mid)==0){return i;}
	}
	return -1;
}
void clear(char mid[1000],int len){
	for(int i=0;i<len;i++){mid[i]='\0';}
}
int max(struct target A[1000],int m){
	int max=0;
	for(int i=0;i<m;i++){
		if(max<A[i].have){max=A[i].have;}
	}
	return max;
}	
int main(){
char art[1000000],mid[1000],ch;
int Alen=0;
struct target A[1000],M;
while((ch=getchar())!=EOF){
	art[Alen]=ch;
	Alen++;
}
int len=0,m=0;
for(int n=0;n<Alen;n++){
	len=0;
	if(art[n]>='0'&&art[n]<='9'){
		while(art[n]>='0'&&art[n]<='9'){
			mid[len]=art[n];
			n++;
			len++;}
	if(hw(mid,len)&&len&&check(A,mid,m)!=-1){A[check(A,mid,m)].have++;}		
	else if(len&&hw(mid,len)){strcpy(A[m].num,mid);A[m].have++;A[m].len=len;m++;}	
	clear(mid,len);	
	}
}
for(int i=0;i<m;i++){
	for(int j=i;j<m;j++){
		if(A[i].len>A[j].len||(A[i].len==A[j].len&&strcmp(A[i].num,A[j].num)>0)){
			M=A[i];
			A[i]=A[j];
			A[j]=M;
		}
	}
}
if(m==0){printf("None"); return 0;}
int maximun=max(A,m);
for(int i=0;i<m;i++){
	if(A[i].have==maximun){printf("%s %d\n",A[i].num,A[i].have);}
}
return 0;
}
