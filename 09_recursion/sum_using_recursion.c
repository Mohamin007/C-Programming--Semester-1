// File: sum_using_recursion.c
// Topic: Recursion, Base Case, Recursive Functions
// Category: Recursion
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>
int sum (int x){
if (x==0)
{
    return 0;
}
{
int add = x+sum(x-1);
return add;
}
}

int main() {
    int a;
    printf("Enter number 1: ");
    scanf("%d", &a);
    
    int add = sum(a);
printf("%d" , add);
    return 0;
}