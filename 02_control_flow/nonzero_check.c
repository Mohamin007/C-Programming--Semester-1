// File: nonzero_check.c
// Topic: if/else, switch-case, Logical Operators
// Category: Control Flow
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main(){

if(1){
    printf("This integer is exeuted!\n");
}
if(274.221){
    printf("This float is also exeuted!\n");
}
if('h'){
    printf("This character is exeuted!\n");
}
if(0){
    printf("I am zero and I will not be executed\n");
}
    return 0;
}
/*
here we are seeing that when if was zero, it was not executed
the logic behind this is in C a non-zero value is considered to be true, thats why is executed
but a zero is false and is not executed
*/