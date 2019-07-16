//Written By Pragik Timsina
//Sroting Elements of an array using Bubble Sort technique.
#include<stdio.h>
#include<conio.h>
void main ()
{
  int n,i,a[100],j,temp;
  clrscr();
  printf("Enter number of Elements\n");
  scanf("%d",&n);
  printf("Enter %d Elements\n",n);
  for (i=0;i<n;i++)
  scanf ("%d",&a[i]);
 for (j=1;j<n;j++)
 {
  for (i=0;i<n-j;i++)
  {
    if (a[i]>a[i+1])
    {
      temp=a[i];
      a[i]=a[i+1];
      a[i+1]=temp;
    }
    }
  }
  printf("The sorted Elements are\n");
  for (i=0;i<n;i++)
  printf("%d\n",a[i]);
  getch();
}
