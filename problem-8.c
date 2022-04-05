///write a program to check the largest number. 
///If x is largest show x + y + z;
///if y is largest show x*x + y*y + z*z;
///if z is larges show x*y + y*z + z*x;

#include<stdio.h>
void main()
{
  int x,y,z,a,b,c;

printf ("Enter x,y and z value: ");
scanf ("%d%d%d",&x,y,z);
a = x + y + z;
b = x*x + y*y + z*z;
c = x*y + y*z + z*x;
(x>y)?((x>z)?(printf("%d",a)):(printf("%d",c))):((y>z)?(printf("%d",b)):(printf("%d",c)));
}
