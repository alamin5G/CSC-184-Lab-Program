/*prime number check*/
#include<stdio.h>

void main()
{
    int j,n,c=0;

    printf("Enter the number \n");
    scanf("%d",&n);


    for(j=2; j<=n/2; j++)
    {
        if(n%j==0)
        {
            c++;
            break;
        }
    }

    if(c==0)
        {
            printf("%d is prime number ",n);
        }
        else
        {
            printf("%d is not prime number",n);
        }

}
