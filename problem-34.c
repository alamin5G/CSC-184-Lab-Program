/**
 * @file problem-34.c
 * Write a program to swap the value one to another without declaring extra variable.
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

void main()
{
    int a = 70, b=20;
    a = a+b;
    b = a - b;
    a = a - b;

    printf("a=%d and b=%d\n",a, b);
}