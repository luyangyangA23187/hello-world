#include<stdio.h>
int main(void) {
int i=1,j=2,k;
k=++i + ++j;
printf("i=%d,j=%d,k=%d\n",i,j,k);
i=1,j=2;
k=i++ + ++j;
printf("i=%d,j=%d,k=%d\n",i,j,k);
i=1,j=2;
k=i++ + j++;
printf("i=%d,j=%d,k=%d",i,j,k);
return 0 ;
}
