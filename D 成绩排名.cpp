#include <stdio.h>
#include <string.h>
int main(){
	struct student{
		char name[11];
		char id[19];
		int grade;	};
        struct student A[1000];
        int n,True=0;
        scanf("%d",&n);
        if(n<1||n>100) return 0;
        for(int i=0;i<n;i++){
        	char R[5];
			A[i].grade=-1;
		scanf("%s %s %d",&A[i].name,&A[i].id,&A[i].grade);
			if(A[i].grade==-1){gets(R);}
			if(A[i].grade!=-1){True=1;} 
		} 
		if(True){
		int min=100,max=0,i=0,a=0;
		for(int j=0;j<n;j++){
			if(A[j].grade==-1){continue;}
			if(A[j].grade>max){max=A[j].grade;a=j;}
			if(A[j].grade==max&&strcmp(A[j].name,A[a].name)<=0){max=A[j].grade;a=j;}
			if(A[j].grade<min){min=A[j].grade;i=j;}
			if(A[j].grade==min&&strcmp(A[j].name,A[i].name)>=0){min=A[j].grade;i=j;}
		}
		printf("%s %s\n",A[a].name,A[a].id);
		printf("%s %s\n",A[i].name,A[i].id);
		} 
		return 0;
}
