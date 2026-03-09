// File: prime_using_function.c
// Topic: Functions, Scope, Parameters
// Category: Functions
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main() {
    int n;
    printf("num: ");
    scanf("%d", &n);

    int flag = 1;
    
    for (int i = 2; i <=n/2; i++)
    {
        if (n%i==0)
        {
            flag=0;
        }
        
    }
    if (n<=1)
    {
        flag=0;
    }
    if (flag==0)
    {
        printf("not prime");
    }
    else{
        printf("prime");
    }
    return 0;
}