// File: sum_of_numbers.c
// Topic: Variables, Data Types, Operators, Basic I/O
// Category: Basics
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main(){

int num, sum=0;

printf("Enter 4 digit number: ");
scanf("%d" , &num);

sum= sum +num%10;
num = num/10;

sum = sum +num%10;
num = num/10;

sum= sum + num%10;
num = num/10;

sum = sum +num%10;
 printf("The sum of the digits of this number is %d " , sum);
    return 0;

}