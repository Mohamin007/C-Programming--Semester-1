// File: area_calculator.c
// Topic: Variables, Data Types, Operators, Basic I/O
// Category: Basics
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main(){

int l = 20;
int b = 30;
printf("The area of your rectangle is %d\n" , l*b);
printf("The perimeter of your rectangle is %d\n" , 2*(l+b));

printf("Your Length :");
scanf("%d" , &l);
printf("Your breadth: ");
scanf("%d" , &b);
printf("The area of your rectangle is %d\n" , l*b);
printf("The perimeter of your rectangle is %d\n" , 2*(l+b));

int r;
printf("Your radius is : \n");
scanf("%d", &r);
printf("The area of your circle with radius %d is : %.2f", r , 3.14 * r * r);
    return 0;

}