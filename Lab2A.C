//Written By Pragik Timsina
//Check wether a numbe is prime or not.
#include <stdio.h>
#include <conio.h>
#include <process.h>
void main()
{
int n,i;
clrscr();
printf("Enter the Number\n");
scanf("%d",&n);
{
for(i=2;i<=(n/2);i++)
{
  if(n%i==0)
{
printf("%d is not a Prime Number!\n",n);
getch();
exit(0);
}
}
printf("%d is prime\n",n);
getch();
}
}
