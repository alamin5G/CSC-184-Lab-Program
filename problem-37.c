/**
 * @file problem-36.c
 * Design two user-defined function to input and show (3x3) matrix element.Apply these function with a C program to confirm they are working and calculate addition of 2 matrix.
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int input(int a[5][5]);
int show(int a[5][5]);
int add(int a[5][5],int b[5][5]);

void main()
{
    int a[5][5],b[5][5],c;
    printf("Enter matrix A value: \n");
    input(a);
    printf("Enter Matrix B value: \n");
    input(b);
    printf("Matrix A value: \n");
    show(a);
    printf("Matrix B value: \n");
    show(b);
    printf("Addition of A and B Matrix: \n");
    show(add(a,b));
        
}

int input(int a[5][5]){
    int i,j;
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    return a[i][j];
}

int show(int a[5][5]){
    int i,j;
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return a[i][j];
}

int add(int a[5][5], int b[5][5]){
    int i,j, c[5][5];
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        {
            c[i][j] = a[i][j]+b[i][j];
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return c;
}