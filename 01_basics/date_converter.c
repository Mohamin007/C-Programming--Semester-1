// File: date_converter.c
// Topic: Variables, Data Types, Operators, Basic I/O
// Category: Basics
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main(){

float y;
float w;
int d;

printf("Enter year : ");
scanf("%f" , &y);
printf("%.1f years are %.2f weeks and %d days\n " , y , w = 52.0*y, d = y*365 );

printf("Enter week : ");
scanf("%f" , &w);

printf("%.2f weeks are %.2f years and %d days\n " , w , y = w/52.0 , d = w * 7 );

printf("Enter days : ");
scanf("%d" , &d);

printf("%d days are %.2f years and %.2f weeks\n " , d , y = d/365.0 , w = d/7.0);


    return 0;

}