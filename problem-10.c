/* A program to ensure leap year */

#include <stdio.h>

void main(){

	int year;
	printf("Enter a year \(ex: 1997\): ");
	scanf("%d", &year);

	if(year%4 == 0 && year%100 !=0){
		printf("%d is leap year\n", year);
	}else if(year%400 == 0){
		printf("%d is leap year\n", year);
	}else{
		printf("%d is not leap year.",year);
	}

}
