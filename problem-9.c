/*write a program for Grade Calculation using Ternary Operator*/

#include <stdio.h>

void main(){
	
	int m;
	
	printf("Enter marks: ");
	scanf("%d",&m);
	(m>=0 && m<=100)?((m>89)?(printf("A")):((m>79)?(printf("B")):((m>69)?(printf("C")):((m>59)?(printf("D")):(printf("F")))))):(printf("Invalid Marks"));
	
}