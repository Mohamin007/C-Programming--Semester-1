// File: pattern15.c
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
    for (int j = 1; j <= i; j++)
    {
       if (i==j || (i+j)%2==0)
       {
        printf("1");
       }
       else
       {
        printf("0");
       }
       
       
    }
    printf("\n");
}

    return 0;

}