//Written By Pragik Timsina
//Febonacci Sequence
#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
int p=0,q=1,r,n,i;
clrscr();
printf("Enter the limit of the series.\n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
r=p+q;
printf("%d\t",p);
p=q;
q=r;
}
getch();
}
