// File: area_shapes.c
// Topic: Variables, Data Types, Operators, Basic I/O
// Category: Basics
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main(){

int l , b;
printf("Enter the rectangle length : ");
scanf("%d" , &l);
printf("Enter the rectangle breadth : ");
scanf("%d" , &b);

printf("The area of you rectangle is : %d\n" , l*b);

printf("Enter the square length : ");
scanf("%d" , &l);

printf("The area of you square is : %d" , l*l);
    return 0;

}
