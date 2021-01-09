#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	struct student{
		char name[11];
		char id[19];
		int grade;
		int rank;	};
        struct student A[1000],W;
        int n,len;
        char str1[20],str2[20];
        scanf("%d %s",&n,&str1);
        len=strlen(str1);
        for(int i=0;i<n;i++){
        	char R[5];
			A[i].grade=-1;
		scanf("%s %s %d",&A[i].name,&A[i].id,&A[i].grade);
			if(A[i].grade==-1){gets(R);}
		} 
		for(int a=0;a<n;a++){
			for(int b=a;b<n;b++){
				if(A[a].grade<A[b].grade){
					W=A[a];
					A[a]=A[b];
					A[b]=W;
				}
				A[a].rank=a;
				if(a>0&&A[a].grade==A[a-1].grade){A[a].rank=A[a-1].rank;}
			}
		}
		for(int a=0;a<n;a++){
			for(int b=0;b<20;b++){
				for(int m=0,c=b;c<b+len;c++,m++){
					str2[m]=A[a].id[c]; 
							}
			if(strcmp(str1,str2)==0){
			printf("%s %s ",A[a].name,A[a].id);
			if(A[a].grade==-1){printf("n/a n/a\n");}
			else {printf("%d %d\n",A[a].grade,A[a].rank+1);}
			goto A;}
				}
			for(int b=0;b<20;b++){
				for(int m=0,c=b;c<b+len;c++,m++){
					str2[m]=A[a].name[c];}            
				if(strcmp(str1,str2)==0){
			    printf("%s %s ",A[a].name,A[a].id);
			    if(A[a].grade==-1){printf("n/a n/a\n");}
			    else printf("%d %d\n",A[a].grade,A[a].rank+1);
				goto A;}   
				}
			    if(atoi(str1)==A[a].grade){
			printf("%s %s %d %d",A[a].name,A[a].id,A[a].grade,A[a].rank+1);
			goto A;
			} 
			A:;
			}
		return 0;
		}
		
