/**
 * @file problem-39.c
 * Write a program to check how many alphabet, digit and special character belongs in a string. 
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-04-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <string.h>

void main()
{
    int i, alphabet = 0, digit = 0, specialChar = 0;
    char s[100];
    printf("Write something: \n");
    gets(s);
    printf("You have written: \n");
    puts(s);
    
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'a' && s[i]<= 'z' || s[i]>= 'A' && s[i]<= 'Z')
        {
            alphabet++;
        }
        else if (s[i] >= '0' && s[i]<= '9' )
        {
            digit++;
        }else{
            specialChar++;
        }
        
    }

    printf("%d alphabets.\n", alphabet);
    printf("%d digits.\n", digit);
    printf("%d special characters.\n", specialChar);


}