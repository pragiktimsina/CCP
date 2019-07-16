//Written By Pragik Timsina
//Finding the value of variable using Horner's Method.
#include<stdio.h>
#include<conio.h>
void main()
{
  int a[100],sum,x,n,i;
  clrscr();
  printf("Enter the degree of Polynomial\n");
  scanf("%d",&n);
  printf("Enter %d co-efficient\n",n+1);
  for(i=0;i<=n;i++)
  {
  scanf("%d",&a[i]);
  }
  printf("Enter the value of variable\n");
  scanf("%d",&x);
  sum=a[n]*x;
  for(i=n-1;i>0;i--)
  {
  sum=(sum+a[i])*x;
  }
  sum=(sum+a[0]);
  printf("The value of Polynomial is %d\n",sum);
  getch();
  }
