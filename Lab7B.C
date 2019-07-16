//Written By Pragik Timsina
//Matrix Multiplication.

#include <process.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
  int m,n,p,q,i,j,k,sum;
  int a[10][10],b[10][10],c[10][10];
  clrscr();
  printf("Enter the order of matrix A\n");
  scanf("%d %d",&m,&n);
  printf("Enter the order of Matrix B\n");
  scanf("%d %d",&p,&q);
  printf("Enter elements of Matrix A\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
    scanf("%d",&a[i][j]);
  }
}
printf("Enter elements of Matrix B\n");
for(i=0;i<p;i++)
{
  for(j=0;j<q;j++)
  scanf("%d",&b[i][j]);
}

  for(i=0;i<m;i++)
{
  for (j=0;j<q;j++)
  {
    sum=0;
    for(k=0;k<n;k++)
  {
   sum=sum+a[i][k]*b[k][j];
  }
    c[i][j]=sum;
  }
}
printf("Matrix A\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d",a[i][j]);
printf("\n");
}
}
printf("Matrix B\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
printf("%d",b[i][j]);
printf("\n");
}
}
printf("Matrix C\n");
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
printf("%d",c[i][j]);
printf("\n");
}
}
getch();
}
