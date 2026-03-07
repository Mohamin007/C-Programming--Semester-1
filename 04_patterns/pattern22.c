// File: pattern22.c
// Topic: Nested loops, Star/Number patterns
// Category: Patterns
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main(){

int a;
printf("enter num");
scanf("%d" , &a);

for (int i = 1; i <=a; i++)
{
    for (int j = 1; j <=a-i; j++)
    {
        printf(" ");
    }
    for (int k = 1; k <= (2*i)-1; k++)
    {
        printf("*");
    }
    printf("\n");
}
for (int l = a-1; l>=1 ; l--)
{
    for (int m = 1; m <= a-l; m++)
    {
        printf(" ");
    }
    for (int n = 1; n <= 2*l-1; n++)
    {
        printf("*");
    }
    printf("\n");
}


    return 0;

}