// File: degree_converter.c
// Topic: Variables, Data Types, Operators, Basic I/O
// Category: Basics
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main(){

float celcius = 37.00;
float farenhiet;

printf("%.2f celcius into farenheit is : %.2f celcius\n" , celcius , farenhiet = celcius * 9.0 / 5.0 + 32.0 );


printf("Enter farenheit : ");
scanf("%f" ,  &farenhiet);

printf("%.2f farenheit into celcius is : %.2f celcius " , farenhiet , celcius = (farenhiet - 32.0) * 5.0 / 9.0);

    return 0;

}
