// File: fibonacci.c
// Topic: for, while, do-while loops
// Category: Loops
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>
int fibo(int x){
    if (x==0)
    {
        return 0;
    }
    
    if (x==1)
    {
        return 1;
    }
    return fibo(x-1)+fibo(x-2);
}
int main() {
    int n;
    printf("enter till fibo");
    scanf("%d", &n);
    printf("%d", fibo(n));
    return 0;
}