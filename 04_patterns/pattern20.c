// File: pattern20.c
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
    for (int l = a; l>=i; l--)
    {
        printf(" ");
    }
    
    
    for (int j = 1; j <= i; j++)
    {
      printf("%d" , j);
    }
    for (int k = i-1; k >=1; k--)
    {
        printf("%d" , k);
    }
    
    printf("\n");
}

    return 0;

}