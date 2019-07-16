//Written By Pragik Timsina
//Program to find the trace and norm of the given matrix.
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<process.h>
void main()
{
  int r,c,i,j,a[10][10];
  float sum=0,trace=0,norm=0;
  clrscr();
  printf("Enter the number of rows and columns\n");
  scanf("%d %d",&r,&c);
 if (r!=c)
  {
    printf("Norm and Trace couldn't be found\n");
    getch();
    exit(0);
  }
  printf("Enter elements of matrix\n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    scanf("%d",&a[i][j]);
  }
for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
  {
    sum=sum+a[i][j]*a[i][j];
    if(i==j)
    trace=trace+a[i][j];
  }
}
norm=sqrt(sum);
printf("Norm=%f\n",norm);
printf("Trace=%f\n",trace);
getch();
}
