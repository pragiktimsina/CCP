//Written By Pragik Timsina
//Roots of a Quadratic Equation.
#include <stdio.h>
#include <conio.h>
#include <math.h>
void main ()
{
float a,b,c,d,r1,r2;
clrscr();
printf("Enter the Co-efficients\n");
scanf("%f %f %f",&a,&b,&c);
d=b*b-4*a*c;

if (d==0)
{
r1=-b/(2*a);
r2=-b/(2*a);
printf("Roots are Equal\n");
printf("r1=%f\n r2=%f\n",r1,r2);
getch();
exit(0);
}

if (d>0)
{
r1=(-b+sqrt(d))/2*a;
r2=(-b-sqrt(d))/2*a;
printf("Roots are Real and Distinct.\n");
printf("r1=%f\n r2=%f\n",r1,r2);
getch ();
exit (0);
}
else
{
r1= (-b/(2*a));
r2=(sqrt(fabs(d)))/(2*a);
printf("Roots are Imaginary\n");
printf("r1=%f+i%f\n r2=%f-i%f\n",r1,r2,r1,r2);
getch();
exit(0);
}
 getch();
}
