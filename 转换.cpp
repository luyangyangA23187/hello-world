#include <stdio.h>
int main(){
	int j=0;
	char a[100];
	printf("ÊäÈë³µÅÆºÅ:");
	gets(a);
	printf("UTF-8:");
    while(a[j]){
    	if((unsigned)a[j]>0x7a){
		if(a[j]==0xffffffb4&&a[j+1]==0xffffffa8){printf("%X",0xE5B79D);}
		if(a[j]==0xffffffbe&&a[j+1]==0xffffffa9){printf("%X",0xE4BAAC);}
		if(a[j]==0xffffffbd&&a[j+1]==0xfffffff2){printf("%X",0xE6B4A5);}
		if(a[j]==0xffffffbc&&a[j+1]==0xffffffbd){printf("%X",0xE58680);}
		if(a[j]==0xffffffbd&&a[j+1]==0xfffffffa){printf("%X",0xE6998B);}
		if(a[j]==0xffffffc3&&a[j+1]==0xffffffc9){printf("%X",0xE89299);}
		if(a[j]==0xffffffc1&&a[j+1]==0xffffffc9){printf("%X",0xE8BEBD);}
		if(a[j]==0xffffffbc&&a[j+1]==0xffffffaa){printf("%X",0xE59089);}
		if(a[j]==0xffffffba&&a[j+1]==0xffffffbd){printf("%X",0xE9BB91);}
		if(a[j]==0xffffffbb&&a[j+1]==0xffffffa6){printf("%X",0XE6B2AA);}
		if(a[j]==0xffffffcb&&a[j+1]==0xffffffd5){printf("%X",0xE88B8F);}
		if(a[j]==0xffffffd5&&a[j+1]==0xffffffe3){printf("%X",0xE6B599);}
		if(a[j]==0xffffff95&&a[j+1]==0xffffff88){printf("%X",0xE699A5);}
		if(a[j]==0xffffffc3&&a[j+1]==0xfffffff6){printf("%X",0xE997BD);}
		if(a[j]==0xffffffb8&&a[j+1]==0xffffffd3){printf("%X",0xE8B5A3);}
		if(a[j]==0xffffffc2&&a[j+1]==0xffffffb3){printf("%X",0xE9B281);}
		if(a[j]==0xffffffd4&&a[j+1]==0xffffffa5){printf("%X",0xE8B1AB);}
		if(a[j]==0xffffffb6&&a[j+1]==0xfffffff5){printf("%X",0xE98482);}
		if(a[j]==0xffffffcf&&a[j+1]==0xffffffe6){printf("%X",0xE6B998);}
		if(a[j]==0xffffffd4&&a[j+1]==0xffffffc1){printf("%X",0xE7B2A4);}
		if(a[j]==0xffffffb9&&a[j+1]==0xfffffff0){printf("%X",0xE6A182);}
		if(a[j]==0xffffffc7&&a[j+1]==0xffffffed){printf("%X",0xE790BC);}
		if(a[j]==0xffffffd3&&a[j+1]==0xffffffe5){printf("%X",0xE6B89D);}
		if(a[j]==0xffffffb9&&a[j+1]==0xfffffff3){printf("%X",0xE8B4B5);}
		if(a[j]==0xffffffd4&&a[j+1]==0xffffffc6){printf("%X",0xE4BA91);}
		if(a[j]==0xffffffb2&&a[j+1]==0xffffffd8){printf("%X",0xE8978F);}
		if(a[j]==0xffffffc9&&a[j+1]==0xffffffc2){printf("%X",0xE99995);}
		if(a[j]==0xffffffb8&&a[j+1]==0xffffffca){printf("%X",0xE79498);}
		if(a[j]==0xffffffc7&&a[j+1]==0xffffffe0){printf("%X",0xE99D92);}
		if(a[j]==0xffffffc4&&a[j+1]==0xfffffffe){printf("%X",0xE5AE81);}
		if(a[j]==0xffffffd0&&a[j+1]==0xffffffc2){printf("%X",0xE696B0);}
		if(a[j]==0xffffffb8&&a[j+1]==0xffffffdb){printf("%X",0xE6B8AF);}
		if(a[j]==0xffffffb0&&a[j+1]==0xffffffc4){printf("%X",0xE6BEB3);}
		if(a[j]==0xffffffcc&&a[j+1]==0xffffffa8){printf("%X",0xE58FB0);}
		if(a[j]==0xffffffb9&&a[j+1]==0xffffffd2){printf("%X",0xE68C82);}
		if(a[j]==0xffffffd1&&a[j+1]==0xffffffa7){printf("%X",0xE5ADA6);}
		if(a[j]==0xffffffbe&&a[j+1]==0xffffffaf){printf("%X",0xE8ADA6);}
		if(a[j]==0xffffffca&&a[j+1]==0xffffffb9){printf("%X",0xE4BDBF);}
		if(a[j]==0xffffffc1&&a[j+1]==0xffffffec){printf("%X",0xE9A286);}
		j+=2;
		}
    	else printf("%c",a[j]),j++;
	}
	return 0;
}
