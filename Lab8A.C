//Written By Pragik Timsina
//Wite a program to maintain a record of N students using Array of Structures.
#include <stdio.h>
#include <conio.h>
#include <process.h>
#include <string.h>
struct student
{
  int roll, marks ;
  char name[20], grade[20];
  } ;
  void main()
  {
    int n,i;
    struct student s[20];
    char sname[20];
    clrscr();
    printf("Enter the number of students\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      printf("Enter %d Student Details \n",i);
      printf("Enter name\n");
      fflush(stdin);
      gets(s[i].name);
      printf("Enter the Roll number\n");
      scanf("%d",&s[i].roll);
      printf("Enter the Marks\n");
      scanf("%d", &s[i].marks);
      printf("Enter Grade\n");
      fflush(stdin);
      gets(s[i].grade);
    }
    printf("Enter the student to be searched\n");
    scanf("%s",&sname);
    for(i=1;i<=n;i++)
    {
      if (strcmp(sname,s[i].name)==0)
    {
    printf("Student record found!\n");
    printf("Student Details are:\n");
    printf("Name=%s\n Roll No.=%d\n Marks=%d\n Grade=%s\n",s[i].name,s[i].roll,s[i].marks,s[i].grade);
    getch();
    exit(0);
    }
  }
printf("Student record not found\n");
getch();
}
