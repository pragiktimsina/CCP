//Written By Pragik Timsina
//Reversing a String Using FUnction
#include<stdio.h>
#include<conio.h>
void reverse(char s1[],char s2[])
{
int i,n;
for(n=0;s1[n]!=0;n++);
for(i=0;i<n;i++)
s2[n-1-i]=s1[i];
s2[i]=0;
}

void main()
{
char s1[10],s2[10];
clrscr();
printf("Enter the string\n");
gets(s1);
reverse(s1,s2);
printf("Original String=%s\n",s1);
printf("Reversed String=%s\n",s2);
getch();
}
