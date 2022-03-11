#include<stdio.h>
void main()
{
 int x,y,z,m;
   printf ("Enter The Values of x,y and z:\n");
   scanf ("%d%d%d",&x,&y,&z);
  m=(x>y)?((x>z)?(x):(z)):((y>z)?(y):(z));
  printf ("\n%d is the largest number",m);
}
