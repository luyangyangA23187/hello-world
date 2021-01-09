#include<stdio.h>
int main()
{
int r,c,i,j,p,q; 
scanf ("%d %d",&r,&c);
int a[50][50];
int d[100]; 
for(i=0; i<r; i++)
{
  for( j=0; j<c; j++)
 {
   scanf("%d",&a[i][j]);
 }

}
int n;
scanf("%d",&n) ;
char m[2];
int f=0;
while(f<n)
{
scanf("%s",m) ; 
int x,y;
if(m[0]=='S'&&m[1]=='R')
{
scanf("%d %d",&x,&y);
for(q=0;q<=r+1;q++)
{d[q]=a[x-1][q];
a[x-1][q]=a[y-1][q];
a[y-1][q]=d[q];}
}

if(m[0]=='S'&&m[1]=='C')
{
scanf("%d %d",&x,&y); getchar();
	for(q=0;q<=r+1;q++)
{d[q]=a[q][x-1];
a[q][x-1]=a[q][y-1];
a[q][y-1]=d[q];}
} 

if(m[0]=='D'&&m[1]=='R')
{
scanf("%d",&x);
for(;x<r;x++)
{
  for(q=0;q<c;q++)
    {a[x-1][q]=a[x][q];}
}r--;  
} 

if(m[0]=='D'&&m[1]=='C')
{
scanf("%d",&y);
for(;y<c;y++)
{
  for(q=0;q<r;q++)
    {a[q][y-1]=a[q][y];}
}c--;  
}  

if(m[0]=='I'&&m[1]=='R')
{
scanf("%d",&x);
for(p=r;p>x-1;p--)
{
for(q=0;q<c;q++)
{a[p][q]=a[p-1][q];}
}
for(q=0;q<c;q++)
a[x-1][q]=0;
r++;}

if(m[0]=='I'&&m[1]=='C')
{
scanf("%d",&y);
for(p=c;p>y-1;p--)
{
for(q=0;q<r;q++)
{a[q][p]=a[q][p-1];}
}
for(q=0;q<c;q++)
a[q][y-1]=0;
c++;}


f++;}
for( i=0;i<r;i++)
 {for(j=0;j<c;j++)
    {printf("%d ",a[i][j]);}
    printf("\n");}

  return 0;

}

