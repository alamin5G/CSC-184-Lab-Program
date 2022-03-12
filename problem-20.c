#include <stdio.h>
void main(){
    int row, column, n;
    printf("Enter row number: ");
    scanf("%d", &n);
    for(row = 1; row<=n; row++){
        for(column=n; column>=1; column--){
            if(row < column){
                printf("   ");
            }else{
                printf(" * ");
            }
        }
        printf("\n");   
    }
}