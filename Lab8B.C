//Written By Pragik Timsina
//Finding factorial of a given Number using Recursion
#include <stdio.h>
#include <conio.h>
int fact(int n)
{
  if(n==1)
  {
  return 1;
  }
  else return n*fact(n-1);
}
void main()
{
  int n,ans;
  clrscr();
  printf("Enter a number\n");
  scanf("%d",&n);
  ans=fact(n);
  printf("Factorial of %d=%d\n",n,ans);
  getch();
}
