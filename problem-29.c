/**
 * @file problem-29.c
 * Write a program to show a Identity matrix.
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-22
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

void main(){
     int A[10][10], r, c, n;
    printf("How many row: \n");
    scanf("%d", &n);
    
    printf("The Identity matrix is : \n");
    for (r = 0; r < n; r++)
    {
        for (c = 0; c < n; c++)
        {
            if(r==c){
                printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }

}