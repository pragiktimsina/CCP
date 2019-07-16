//Written By Pragik Timsina
//Sorting Elements of an Array using Selection Sort.
#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j,min,a[100],temp;
  clrscr();
  printf("Enter the number of Elements\n");
  scanf("%d",&n);
  printf("Enter %d number of Array Elements.\n",n);
  for (i = 0; i < n; i++)
  {
    scanf("%d",&a[i] );
  }
  printf("Element before Sorting\n");
  for (i = 0; i < n; i++)
  {
    printf("%d\n",a[i]);
  }
  for(j=0;j<n-1;j++)
  {
    min=j;
    for (i=j+1;i<n;i++)
    {
    if (a[i]<a[min])
    {
      min=i;
    }
    }

  temp=a[j];
  a[j]=a[min];
  a[min]=temp;
  }
  printf("The sorted array is\n");
  for(j=0;j<n;j++)
  {
  printf("%d\n",a[j]);
  }
  getch();
 }
