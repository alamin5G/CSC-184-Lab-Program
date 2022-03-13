/**
 * @file problem21.c
 * Printing the array index value by taking input from the user.
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-13
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
void main()
{
    int a[15], p, n;
    printf("How many array elements want to input among 20's? ");
    scanf("%d", &n);

    printf("Enter %d array elements: \n", n);

    for (p = 0; p < n; p++)
    {
        scanf("%d", &a[p]);
    }

    printf("The value of %d array elements are: ", n);
    for (p = 0; p < n; p++)
    {
        printf("%d\t", a[p]);
    }
}
