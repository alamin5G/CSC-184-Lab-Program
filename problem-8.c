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
