/**
 * @file problem23.c
 * sort array elements in descending order
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
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
