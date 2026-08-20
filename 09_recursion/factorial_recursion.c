// File: factorial_recursion.c
// Topic: Recursion, Base Case, Recursive Functions
// Category: Recursion
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>
int factorial(int x){

if(x==0){
    return 1;
}{
return x*factorial(x-1) ;}
}
int main() {
    int a;
    printf("Enter number 1: ");
    scanf("%d", &a);
    
    int fact = factorial(a);
    printf("factorial of %d is %d" , a , fact);
 return 0;
}