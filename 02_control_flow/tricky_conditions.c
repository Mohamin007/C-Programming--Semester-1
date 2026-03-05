// File: tricky_conditions.c
// Topic: if/else, switch-case, Logical Operators
// Category: Control Flow
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main(){
// there is a trick to write if-else, mtlb ek aur syntax hai
//i.e like this 
//condition ? expression-if-true : expression-if-false 
// Here "?" and ":" are called Ternary Operators 
int a = 234, b = 88;
a>b ? printf("a is greater\n"): printf("b is greater\n");
//   .....this is if.......     ........this is else...
int c= 23, d= 222;
c>d? printf("c is greater\n"): printf("d is greater");
//   .....this is if.........   ........this is else... 
return 0;

}