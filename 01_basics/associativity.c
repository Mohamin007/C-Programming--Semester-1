// File: associativity.c
// Topic: Variables, Data Types, Operators, Basic I/O
// Category: Basics
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main(){

int a =4;
int b = 3;
int c = 23;
 printf("value is %d" , a*b%c);
    return 0;

}
/*
trick: when x%y is there and x < y then x % y is always x
*/