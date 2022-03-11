/* a program to compute the real roots of a quadratic equation */

#include <stdio.h>

void main(){

	int x1, x2, a, b, c, x,sqroot, noRoot;
	printf("Enter a, b and c Value : ");
	scanf("%d%d%d", &a, &b, &c);

	noRoot = b*b-4*a*c;

	if(a == 0 && b == 0){
		printf("No solution");
	}else if(a == 0){
		x = -c/b;
		printf("one root %d", x);
	}else if(noRoot<0){
		printf("Roots are imaginary");
	}else{
		sqroot = sqrt(b*b-4*a*c);
		x1 = (-b)+(sqroot/2*a);
		x2 = (-b)-(sqroot/2*a);

		printf("x1 value is %d\n", x1);
		printf("x2 value is %d", x2);
	}
}
