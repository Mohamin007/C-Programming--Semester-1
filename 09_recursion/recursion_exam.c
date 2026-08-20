// File: recursion_exam.c
// Topic: Recursion, Base Case, Recursive Functions
// Category: Recursion
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>
int fact(int a){
    printf("%d\n", a);
    
    if (a<=1)
    {
        return 1;
    }
    else
    {
        return a* fact(a-1);
    }
      
}
int main() {
    int x;
    printf("enter num you want to fact: ");
    scanf("%d" , &x);
    printf(" fact is %d", fact(x));
    return 0;
}