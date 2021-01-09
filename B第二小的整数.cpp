#include <stdio.h>
int main(){
	int k;
	scanf("%d",&k);
	for(int i=0;i<k;i++){
		int m,A[100];
		scanf("%d",&m);
		if(m==1){printf("ERROR\n");continue;}
		for(int j=0;j<m;j++){scanf("%d",&A[j]);}
		for(int a=0;a<m;a++){
			for(int b=a;b<m;b++){
				int t;
				if(A[a]>A[b]){t=A[a];A[a]=A[b];A[b]=t;}
			}
		}
		for(int j=1;j<m;j++){
			if(A[j]>A[0]){printf("%d\n",A[j]);break;}
			if(j==m-1){printf("ERROR\n");}
		}
	}
	return 0;
}
