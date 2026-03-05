// File: if_else_problems.c
// Topic: if/else, switch-case, Logical Operators
// Category: Control Flow
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main(){

int people;
printf("Enter number of people : ");
scanf("%d" , &people);
if (people <= 100){ // here <= means greater or equal to
    printf("Load is good");
}
else{
    printf("Too many people");
}
    return 0;

}