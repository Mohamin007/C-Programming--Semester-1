// File: pattern19.c
// Topic: Nested loops, Star/Number patterns
// Category: Patterns
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main(){

int a;
printf("ent num :");
scanf("%d" , &a);

for (int i = 1; i <= a; i++)
{
    for (int j = 1; j <=a - i; j++)
    {
        printf(" ");
    }
    for (int k = 1; k <= 2*i-1 ; k++)
    {
        printf("#");
    }
    // for (int k = 1;  k <= 2*i-1; k++)
    // {
    //     printf("%d" , k);                  number pyramid
    //}
    // for (int k = 1;  k <= 2*i-1; k++)
    // {
    //     printf("%c" , k+64);               alphabit pyramid
    //}

    printf("\n");
}

    return 0;

}