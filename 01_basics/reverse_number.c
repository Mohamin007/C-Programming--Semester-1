// File: reverse_number.c
// Topic: Variables, Data Types, Operators, Basic I/O
// Category: Basics
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main(){

char char1;
char char2;
char char3;
printf("Your 1st letter : \n");
scanf(" %c", &char1);         //always leave slace between " and %c in terms of char
printf("Your 2nd letter : \n");
scanf(" %c", &char2);         // Notice the space before %c
printf("Your 3rd letter : \n");
scanf(" %c", &char3);

printf("Your reverse of %c%c%c is %c%c%c " , char1, char2, char3, char3, char2, char1 );
    return 0;

}