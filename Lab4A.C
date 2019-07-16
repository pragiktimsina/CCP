//Written By Pragik Timsina
//Check wether a number is Palindrome or not.
#include <stdio.h>
#include <conio.h>

void main ()

{
	long int n,rev,digit,temp;
	clrscr();

	printf ("Enter the number\n");
	scanf ("%ld",&n);
	temp=n;
	rev=0;
	while (n!=0)
	{
	digit=n%10;
	rev=((rev*10)+digit);
	n=n/10;
	}
	printf("Reverse of %ld=%ld\n",temp,rev);
	if (temp==rev)
	printf("It is a palindrome\n");
	else
	printf("It is not a palindrome\n");
	getch();
	}
