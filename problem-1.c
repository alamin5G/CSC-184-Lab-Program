/*Program to determine area of a circle*/

#include <stdio.h>

#define PI 3.1416

void main(){

	int R;
	float Area;
	printf("Enter the value of radius : ");
	scanf("%d", &R);

	Area = PI *R*R;
	printf("%f", Area);
}
