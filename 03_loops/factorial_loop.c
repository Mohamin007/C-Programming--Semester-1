// File: factorial_loop.c
// Topic: for, while, do-while loops
// Category: Loops
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>
int fact(int x){
    if (x==0)
    {
        return 0;
    }
    if (x==1)
    {
        return 1;
    }
    if (x==2)
    {
        return 2;
    }
    return x*fact(x-1);
    
}
int main() {
    int n;
    printf("num to fact");
    scanf("%d", &n);

     printf("%d",fact(n));
    return 0;
}