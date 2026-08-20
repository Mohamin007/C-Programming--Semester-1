// File: sum_using_function.c
// Topic: Recursion, Base Case, Recursive Functions
// Category: Recursion
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>
int sum (int x){
int add=0;
    for (int i = 1; i <=x; i++)
    {
        add=add+i;
    }
return add;    
}

int main() {
    int a;
    printf("Enter number 1: ");
    scanf("%d", &a);
    int add = sum(a);
    printf("%d" , add);
    return 0;
}