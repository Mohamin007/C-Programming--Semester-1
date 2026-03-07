// File: pattern17.c
// Topic: Nested loops, Star/Number patterns
// Category: Patterns
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main(){

int a;
printf("enter num : ");
scanf("%d" , &a);

for (int i = 1; i <=a; i++)
{
    for (int j = 1; j+i <= a; j++)
    {
       printf(" ");
    }
       for (int k = 1; k <= a; k++)
       {
        printf("*");
       }
    //    for (int l = 1; l <= a-i; l++)
    //    {
    //     printf("*");
    //    }
    //    for (int m = 1; m <=i ; m++)
    //    {
    //     printf(" ");
    //    }
       
   
    printf("\n");
} 

    return 0;

}