//Written By Pragik Timsina
//Searching Elements in an array using Binary Search.
#include<stdio.h>
#include<process.h>
#include<conio.h>
void main()
{
	int a[100],low,high, mid,i,n,key;
	clrscr();
	printf("Enter the no of elements\n");
	scanf("%d",&n);
	printf("Enter the elements in order\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched\n");
	scanf("%d",&key);
	low = 0;
	high = n - 1;
	while (low<=high)
	{
		mid=(low + high)/2;
		if (key==a[mid])
		{
			printf("Element found at position %d\n",mid);
		       getch();
			 exit(0);
		}
		if(key<a[mid])
		high =(mid-1);
		else
		low=(mid+1);
	}
	printf("Key Not Found\n");
	getch();

}
