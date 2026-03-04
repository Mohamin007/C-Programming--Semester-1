// File: int_float_types2.c
// Topic: Variables, Data Types, Operators, Basic I/O
// Category: Basics
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main(){

int a = 9.0;
int b = 2.0;
printf("the value is %d" , a/b );
    return 0;
}
/*
it meant if i run it like this my answee will be in integer ie 4 beavuse the function type was int not float,
if i made only one type as float and made the value as %f the answer will be 4.5
so the answer is totally depended on how you have given the name typeof the variable
another example is 
#include<stdio.h>

int main(){

int a = 9.9;
printf("the value of a is %d" , a );
    return 0;
}
    the result will be 
    The value of a is 9
so the data type is very important

    */
