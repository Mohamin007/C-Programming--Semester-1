// File: loop_quiz4.c
// Topic: for, while, do-while loops
// Category: Loops
// Course: Introduction to C Programming — Semester 1, Kashmir University

/*
Quick Quiz: Write a program to print first ‘n’ natural numbers using for loop 
*/
#include<stdio.h>

int main(){

int b;
printf("natural numbers you want :");
scanf("%d" , &b);
for (int i = 1; i<=b; i++)
{
    printf("%d\n" , i);
}

    return 0;

}