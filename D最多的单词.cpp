#include <stdio.h>
#include <string.h>
struct word{
	char W[100];
	int num;
};
void clear(char mid[100]){
	for(int i=0;i<100;i++){mid[i]=0;}
}
int check(char mid[100],struct word V[1000],int m){
	for(int i=0;i<m;i++){if(strcmp(mid,V[i].W)==0){return i;}}
	return -1;
}
int main(){
	struct word V[1000];
	int Alen=0,m=0;
	char ch,art[100000];
	while((ch=getchar())!=EOF){
	if(ch>='A'&&ch<='Z'){art[Alen]=ch+32;}	
    else art[Alen]=ch;
    Alen++;
}
for(int i=0;i<Alen;i++){
	if(art[i]>='a'&&art[i]<='z') {
		int len=0;
		char mid[100];
		clear(mid);
	while(art[i]>='a'&&art[i]<='z'){
		mid[len]=art[i];
		len++;i++;
		if(art[i]<'a'||art[i]>'z'){
			if(check(mid,V,m)!=-1){V[check(mid,V,m)].num++;break;}
			else{ strcpy(V[m].W,mid);V[m].num++;m++;}
		}
	}
}
}
int max=0;
for(int i=0;i<m;i++){
	if(V[i].num>V[max].num){max=i;}
	else if(V[i].num==V[max].num&&strcmp(V[i].W,V[max].W)>0){max=i;}
}
printf("%s %d",V[max].W,V[max].num);
}
