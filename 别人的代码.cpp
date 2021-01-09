#include <stdio.h>
#include <string.h>
int main(){
	int r, c;//声明行和列
	scanf("%d %d", &r, &c);//输入行和列的具体值
	int x, y;//表示已经历了x行,经历了y列 
	int A[r][c];//声明数组r行c列
	for(x = 1;x <= r;x++){
		for(y = 1;y <= c;y++){
			scanf("%d", &A[x][y]);
		}
	}
	int B[r][c];
	int m=0, i;//表示有i项操作,已经进行了m项操作
	scanf("%d", &i);
	
	//对操作进行声明
		char O[100];//表示操作
	
	for(;m < i;m++){
		//考虑建立数组来判断输入的指令
	    int o = 100;
	    gets(O);
       getchar();
	//接下来对各项操作的情况进行控制
		int x1, x2;//交换x1行和x2行
		int y1, y2;//交换y1列和y2列
		int e;//删除第e行
		int f;//删除第f列
		int g;//在第g行上面插入一行，新插入的行的所有单元格值为0
		int h;//在第h列前面插入一列，新插入的列的所有单元格值为0
		

		 } 
	    
	printf ("Yes");
	
	return 0;}
