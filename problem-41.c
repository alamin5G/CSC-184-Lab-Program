/**
 * @file problem-41.c
 * write a program to check even or odd number using recursive function.
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-04-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int evenOdd(int a);

void main()
{
    int n, f;
    printf("Enter a number: \n");
    scanf("%d", &n);
    f = evenOdd(n);

    if (f==1)
    {
        printf("%d is even number.\n", n);
    }else
    {
        printf("%d is not even number.\n", n);
    }    
}

int evenOdd(int a){
    if (a == 0){
        return 1;
    }else if(a == 1)
    {
        return 0;
    }else
    {
        return evenOdd(a-2);
    }
}