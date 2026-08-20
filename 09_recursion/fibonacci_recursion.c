// File: fibonacci_recursion.c
// Topic: Recursion, Base Case, Recursive Functions
// Category: Recursion
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>
int fibo(int x){

    if(x==0){
        return 0;
    }
    int z = fibo(x-1)+ fibo(x-2);
return z;
}

int main() {
    int a;
    printf("Enter base: ");
    scanf("%d", &a);
    int b;

    int p = fibo(a);

    printf("%d" , p);
    return 0;
}