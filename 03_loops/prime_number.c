// File: prime_number.c
// Topic: for, while, do-while loops
// Category: Loops
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main() {
    int n;
    int prime=1;
    printf("enter a num:");
    scanf("%d", &n);
    if (n<=1){
        printf("number is not prime");
    }else{
        for (int i = 2; i <= n/2; i++)
        {
            if (n%i==0)
            {
            prime=0;    
            break;
            }
        }
        
    }
    if (prime==1)
    {
        printf("num  prime");
    }
    else
    {
        printf("num not prime");
    }
    
    
    return 0;
}