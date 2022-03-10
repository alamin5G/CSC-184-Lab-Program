#include <stdio.h>

int main()
{
    int m;
    printf("\nEnter the marks: ");
    scanf("%d",&m);

    switch(m>=0 && m<=100)
    {
    case 1:
        switch(m/10)
        {
        case 10:
        case 9:
            printf("A\n");
            break;
        case 8:
            printf("B\n");
            break;
        case 7:
            printf("C\n");
            break;
        case 6:
            printf("D\n");
            break;
        default:
                printf("F");

        }
        break;
    default:
        printf("Invalid Marks!\n");
    }

}
