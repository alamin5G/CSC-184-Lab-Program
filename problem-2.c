/*Program to determine area of a rectangle*/

#include <stdio.h>

void main(){

	int l,w, area;
	printf("Enter the value of Length and Width : ");
	scanf("%d %d", &l, &w);

	area = l*w;
	printf("The area of a rectangle is: %d", area);
}
