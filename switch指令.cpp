#include<stdio.h>
int main(void)
{
	int x;
	scanf("%d",&x);
	switch (x) {
		case 0:printf("Éµ±Æ\n");
		break;
		case 1:printf("ÈõÖÇ\n");
		break;
		default:printf("ÄÔÌ±\n");
	}
	return 0; 
}
