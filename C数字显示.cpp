#include <stdio.h>
#include <string.h>
int main(){
int k;
scanf("%d",&k);
getchar();
for(int i=0;i<k;i++){
	char N[5];
	gets(N);
	int len=strlen(N);
	printf("%s:\n",N);
	for(int j=0;j<len;j++){
		if(N[j]=='0'){printf("*****  ");}
		if(N[j]=='1'){printf("    *  ");}
		if(N[j]=='2'){printf("*****  ");}
		if(N[j]=='3'){printf("*****  ");}
		if(N[j]=='4'){printf("*   *  ");}
		if(N[j]=='5'){printf("*****  ");}
		if(N[j]=='6'){printf("*****  ");}
		if(N[j]=='7'){printf("*****  ");}
		if(N[j]=='8'){printf("*****  ");}
		if(N[j]=='9'){printf("*****  ");}
	}
	printf("\n");
	for(int j=0;j<len;j++){
		if(N[j]=='0'){printf("*   *  ");}
		if(N[j]=='1'){printf("    *  ");}
		if(N[j]=='2'){printf("    *  ");}
		if(N[j]=='3'){printf("    *  ");}
		if(N[j]=='4'){printf("*   *  ");}
		if(N[j]=='5'){printf("*      ");}
		if(N[j]=='6'){printf("*      ");}
		if(N[j]=='7'){printf("    *  ");}
		if(N[j]=='8'){printf("*   *  ");}
		if(N[j]=='9'){printf("*   *  ");}
	}
	printf("\n");
	for(int j=0;j<len;j++){
		if(N[j]=='0'){printf("*   *  ");}
		if(N[j]=='1'){printf("    *  ");}
		if(N[j]=='2'){printf("    *  ");}
		if(N[j]=='3'){printf("    *  ");}
		if(N[j]=='4'){printf("*   *  ");}
		if(N[j]=='5'){printf("*      ");}
		if(N[j]=='6'){printf("*      ");}
		if(N[j]=='7'){printf("    *  ");}
		if(N[j]=='8'){printf("*   *  ");}
		if(N[j]=='9'){printf("*   *  ");}
	}
	printf("\n");
	for(int j=0;j<len;j++){
		if(N[j]=='0'){printf("*   *  ");}
		if(N[j]=='1'){printf("    *  ");}
		if(N[j]=='2'){printf("*****  ");}
		if(N[j]=='3'){printf("*****  ");}
		if(N[j]=='4'){printf("*****  ");}
		if(N[j]=='5'){printf("*****  ");}
		if(N[j]=='6'){printf("*****  ");}
		if(N[j]=='7'){printf("    *  ");}
		if(N[j]=='8'){printf("*****  ");}
		if(N[j]=='9'){printf("*****  ");}
	}
	printf("\n");
	for(int j=0;j<len;j++){
		if(N[j]=='0'){printf("*   *  ");}
		if(N[j]=='1'){printf("    *  ");}
		if(N[j]=='2'){printf("*      ");}
		if(N[j]=='3'){printf("    *  ");}
		if(N[j]=='4'){printf("    *  ");}
		if(N[j]=='5'){printf("    *  ");}
		if(N[j]=='6'){printf("*   *  ");}
		if(N[j]=='7'){printf("    *  ");}
		if(N[j]=='8'){printf("*   *  ");}
		if(N[j]=='9'){printf("    *  ");}
	}
	printf("\n");
	for(int j=0;j<len;j++){
		if(N[j]=='0'){printf("*   *  ");}
		if(N[j]=='1'){printf("    *  ");}
		if(N[j]=='2'){printf("*      ");}
		if(N[j]=='3'){printf("    *  ");}
		if(N[j]=='4'){printf("    *  ");}
		if(N[j]=='5'){printf("    *  ");}
		if(N[j]=='6'){printf("*   *  ");}
		if(N[j]=='7'){printf("    *  ");}
		if(N[j]=='8'){printf("*   *  ");}
		if(N[j]=='9'){printf("    *  ");}
	}
	printf("\n");
	for(int j=0;j<len;j++){
		if(N[j]=='0'){printf("*****  ");}
		if(N[j]=='1'){printf("    *  ");}
		if(N[j]=='2'){printf("*****  ");}
		if(N[j]=='3'){printf("*****  ");}
		if(N[j]=='4'){printf("    *  ");}
		if(N[j]=='5'){printf("*****  ");}
		if(N[j]=='6'){printf("*****  ");}
		if(N[j]=='7'){printf("    *  ");}
		if(N[j]=='8'){printf("*****  ");}
		if(N[j]=='9'){printf("*****  ");}
	}
	printf("\n");
}
return 0;
}
