// File: volume_of_cylinder.c
// Topic: Variables, Data Types, Operators, Basic I/O
// Category: Basics
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main(){

int r = 2;
int h = 3;
printf("The volume of your cylinder with radius %d and height %d is : %d\n " , r , h, 3* r * r * h);

printf("Enter your radius : ");
scanf("%d" , &r );

printf("Enter your height : ");
scanf("%d" , &h);

printf("Your Volume of cylinder with radius %d, and height %d is : %d" , r , h , 3 * r * r * h );

    return 0;

}