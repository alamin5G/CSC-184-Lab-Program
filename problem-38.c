/**
 * @file problem-38.c
 * write a c program to calculate the value of triangle using user defined function.
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-04-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <math.h>

float areaOfT(float a, float b, float c);

void main()
{
    float a, b, c, area;
    printf("Enter 3 sides a, b, c value: \n");
    scanf("%f%f%f", &a, &b, &c);
    area = areaOfT(a, b, c);
    
    if (area != 0)
    {
        printf("Area of Triangle is: %.2f\n", area);
    }else
    {
        printf("Invalid triangle\n");
    }
    
}


float areaOfT(float a, float b, float c){
    float s, area;

    if(a+b>c && b+c>a && c+a>b){
        s = (a+b+c)/2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        return area;
    }
    else
    {
        return 0;
    }
}