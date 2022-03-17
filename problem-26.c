/*write a program to find out the frequency of a number from an array. if that exist show it with how many times, if not then write not found.*/
#include <stdio.h>
void main()
{
    int A[20], p, s, c = 0, n;
    printf("How many elements : ");
    scanf("%d", &n);

    printf("Enter the elements: \n");
    for (p = 0; p < n; p++)
    {
        scanf("%d", &A[p]);
    }

    printf("The elements are: \n");
    for (p = 0; p < n; p++)
    {
        printf("%d\t", A[p]);
    }

    printf("\nWhat you are searching for: \n");
    scanf("%d", &s);
    for (p = 0; p < n; p++)
    {
        if (s == A[p])
        {
            c++;
            printf("\n%d is located in %d position.", s, p+1);
        }
    }

    if (c == 0)
    {
        printf("\nItem not found..");
    }
    else
    {
        printf("\n%d found %d times.", s, c);
    }
}

