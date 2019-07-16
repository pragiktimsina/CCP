//Written By Pragik Timsina
// Program to print Sin series upto "N".
//sinx=x-()(x^3)/3!)+((x^5)/5!)+((x^7)/7!)
#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
  float deg,x,sum,term;
  int i,n;
  clrscr();
  printf("Enter the number of Terms\n");
  scanf("%d",&n);
  printf("Enter the degree\n");
  scanf("%f",&deg);
  x=(deg*(3.142/180));
  term=x;
  sum=term;
  for(i=3;i<=n;i=i+2)
  {
    term=((-term*x*x)/(i*(i-1)));
    sum=sum+term;
  }
  printf("sin(%f)=%f\n",deg,sum);
  printf("Using Built-In Function,sin(%f)=%f\n",deg,sin(x));
  getch();
  }
