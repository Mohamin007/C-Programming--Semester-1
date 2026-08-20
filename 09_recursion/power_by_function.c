// File: power_by_function.c
// Topic: Recursion, Base Case, Recursive Functions
// Category: Recursion
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int power (int x, int y){

int z=1;
for (int i = 1; i <=y; i++)
{
    z=z*x;
}

return z;
}


int main() {
    int a;
    printf("Enter base: ");
    scanf("%d", &a);
    int b;
    printf("Enter power: ");
    scanf("%d", &b);

    int p = power(a,b);
    printf("%d^%d=%d" , a,b,p);
    return 0;
}