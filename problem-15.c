// a program for half pyramid
#include <stdio.h>


void main(){

    int row, column, n;
    
    printf("Enter row : ");
    scanf("%d",&n);

    for ( row = 0; row < n; row++)
    {
        for(column = 0; column<=row; column++){
            printf("%d ",column+1);
        }
        printf("\n");
    }
    
    
}