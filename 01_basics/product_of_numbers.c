// File: product_of_numbers.c
// Topic: Variables, Data Types, Operators, Basic I/O
// Category: Basics
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main(){

int num, product=1;
printf("Enter your 3 digit number");
scanf("%d" , &num);

product = product * (num%10);

num = num/10;

product = product * (num%10);

num = num/10;

product = product * (num%10);

 printf("The product of digits of your number is %c" , product);
    return 0;

}