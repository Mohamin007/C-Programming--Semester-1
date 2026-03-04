// File: practice_problem1.c
// Topic: Variables, Data Types, Operators, Basic I/O
// Category: Basics
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main(){

int a;
int b;

printf("Your Length is : ");
scanf("%d" , &a);

printf("Your breadth is : ");
scanf("%d" , &b);

printf("The area of the rectangle is %d" , a * b);
    return 0;

}