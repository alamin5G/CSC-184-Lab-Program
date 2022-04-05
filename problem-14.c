/**square matrix shape of * */

#include <stdio.h>
void main(){
	int row, column, n;
	
	printf("Enter row number : ");
	scanf("%d", &n);
	
	for(row = 0; row<n; row++){
		for(column = 0; column<n; column++){
			printf("* ");
		}
		printf("\n");
	}
}