//Written By Pragik Timsina
//Find the Factorial of a Given Number N.
#include <stdio.h>
#include <conio.h>
void main()
{
  long int n,i,f=1;
  clrscr();
  printf("Enter the Number\n");
  scanf("%ld",&n);
  for (i=1;i<=n;i++)
  {
    f=f*i;
  }
  printf("The factorial of %ld is %ld",n,f);
  getch();
}
