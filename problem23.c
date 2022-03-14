/**
 * @file problem23.c
<<<<<<< HEAD
 * sort array elements in descending order
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-15
=======
 * Sort array elements in ascending order
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-14
>>>>>>> 4f1f8924d35cf907a2a3a3f2f5ab5b00a32b4c2c
 * 
 * @copyright Copyright (c) 2022
 * 
 */
<<<<<<< HEAD
#include <stdio.h>
 void main(){
     int a[10], p, q, n, temp;
     printf("How many array elements: ");
     scanf("%d", &n);
     printf("Enter %d array elements: \n", n);
     for(p=0; p<n; p++){
         scanf("%d", &a[p]);
     }

     printf("Elements are sorted in descending order: ");
     for (p=0; p <n; p++)
     {
         for(q=p+1; q<n; q++){
             if (a[p]<a[q])
             {
                 temp = a[p];
                 a[p] = a[q];
                 a[q] = temp;
             }          
         }
     }

     for(p=0; p<n; p++){
         printf("%d\t", a[p]);
     }

 }
=======
#include <stdio.h> 
void main(){
    int A[10], p, q, temp,n;
    printf("How many array elements? ");
    scanf("%d", &n);
    printf("Enter %d array elements: ", n);
    for(p=0; p<n; p++){
        scanf("%d", &A[p]);
    }

    for(p=0; p<n; p++){
        for (q = p+1; q<n; q++)
        {
            if (A[p]>A[q])
            {
                temp = A[p];
                A[p] = A[q];
                A[q] = temp;
            }
            
        }
        
    }
    printf("The elements are sorted in Asscending Order: ");
    for(p=0; p<n; p++){
        printf("%d\t", A[p]);
    }
}
>>>>>>> 4f1f8924d35cf907a2a3a3f2f5ab5b00a32b4c2c
