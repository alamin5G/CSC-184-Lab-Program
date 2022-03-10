/*Program to determine the area of a Triangle*/
#include<stdio.h>
#include<math.h>
void main ()
{
 float a,b,c;
 float S,Area;
 printf ("Enter the sides of Triangle:\n");
 scanf ("%f%f%f",&a,&b,&c);
 S=(a+b+c)/2;
 Area=sqrt(S*(S-a)*(S-b)*(S-c));
 printf ("The Area of Triangle is: %f",Area);
}
