#include<stdio.h>
void main()
{
char ch;
printf ("Enter The Character: ");
scanf ("%c",&ch);
((ch >= 'A' && ch<= 'Z') || (ch >= 'a' && ch<= 'z'))?(printf ("Your entered %c is Alphabetic Character.", ch)):(printf ("Your entered %c is not Alphabetic Character.", ch));
}
