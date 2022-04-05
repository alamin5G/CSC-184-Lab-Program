///write a program to check it is leap year or not using ternary operator. 
#include<stdio.h>
void main()
{
int Y;
printf ("Enter The Year: ");
scanf ("%d",&Y);
(Y%4==0)?(printf ("Leap Year")):(printf ("Not LEAP Year"));
}
