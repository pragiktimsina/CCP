//Written By Pragik Timsina
//Searching Element of an Array using Linear Search.
#include<stdio.h>
#include<process.h>
#include<conio.h>
void main()
{
int a[100],n,i,key;
clrscr();
printf("Enter the no. of Elements\n");
scanf("%d",&n);
printf("Enter %d array element\n",n);
for (i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter search key\n");
scanf("%d",&key);
for (i=0;i<n;i++)
{
if (key==a[i])
printf ("Key found at Array position %d",i+1);
getch();
exit(0);
}

printf ("Key not Found!\n");
getch();
}
