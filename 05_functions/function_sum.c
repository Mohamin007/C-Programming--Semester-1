// File: function_sum.c
// Topic: Functions, Scope, Parameters
// Category: Functions
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main() {
    int num;
    int sum = 0;
    int i=1;
    printf("Enter num: ");
    scanf("%d" , &num);
    while (i<=num)
    {
        sum=sum+i;
        i++;
    }
    
    printf("SUM IS %d" , sum);
    
    
    return 0;
}