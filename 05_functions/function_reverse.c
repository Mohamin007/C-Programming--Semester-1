// File: function_reverse.c
// Topic: Functions, Scope, Parameters
// Category: Functions
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main() {
    int num;
    int rev=0;
    int remd;
    printf("Enter your num: ");
    scanf("%d" ,&num);
    while (num!=0)
    {
        remd= num%10;
        rev = rev*10+remd;
        num=num/10;
    }
    printf("%d" , rev);

    return 0;
}