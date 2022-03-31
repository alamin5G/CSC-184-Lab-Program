/**
 * @file problem-35.c
 * Create a user defined function prime() which will return the status of an inputted number wither thatis prime or not prime.
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-31
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>

int prime(int a);
void main()
{
    int isPrime, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    isPrime = prime(n);
    if (isPrime != 0)
    {
        printf("%d is prime\n", n);
    }
    else 
    {
        printf("%d is not Prime.\n", n);
    }
}

int prime(int a)
{
    int i;

    if (a <= 1)
    {
        return 0;
    }else{
        for (i = 2; i <= a / 2; i++)
        {
            if (a % i == 0)
            {
                return 0;
            }
        }
        return 1;
    }
}