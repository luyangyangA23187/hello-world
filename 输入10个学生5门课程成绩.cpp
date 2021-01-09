#include <stdio.h>
struct student{
	float g[5];
};
float student_ave(struct student A){
	return (A.g[0]+A.g[1]+A.g[2]+A.g[3]+A.g[4])/5;
}
float course_ave(struct student S[10],int n){
  float result=0;
  for(int i=0;i<10;i++){result=result+S[i].g[n];}
  return result/10;
}
int fail(struct student S[10],int n){
	int num;
	for(int i=0;i<10;i++){
		if(S[i].g[n]<60){num+=1;}
	}
	return num;
}
int main(){
	struct student S[10];
	int m;
	for(int i=0;i<5;i++){
		scanf("%d",&m);
		for(int j=0;j<10;j++){
			scanf("%f",&S[j].g[m-1]);
		}
	}
	printf("----- scores -----\n");
	for(int i=0;i<10;i++){
		printf("%d ",i+1);
		for(int j=0;j<5;j++){printf("%.1f ",S[i].g[j]);}
		printf("\n");
	}
	printf("----- average scores for students -----\n");
	for(int i=0;i<10;i++){
		printf("%d %.1f\n",i+1,student_ave(S[i]));
	}
	printf("----- average scores of courses -----\n");
	for(int i=0;i<5;i++){
		printf("%d %.1f\n",i+1,course_ave(S,i));
	}
	printf("----- the number of fail on courses -----\n");
	for(int i=0;i<5;i++){
		printf("%d %d\n",i+1,fail(S,i));
	}
	return 0;
}

