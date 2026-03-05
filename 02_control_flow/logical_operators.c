// File: logical_operators.c
// Topic: if/else, switch-case, Logical Operators
// Category: Control Flow
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main(){

int a =1, b=1;
printf("The value of a and b is %d\n" , a&&b);
printf("The value of a or b is %d\n " , a||b);
printf("The value of not a is %d " , !a);

    return 0;
//its basically boolean algebra
//but remember the syntax
//and is &&
// or is ||
// not is ! and its written before the variable like this "!a" ,,, not like this "a!"
}
