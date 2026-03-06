// File: practice_prob1.c
// Topic: for, while, do-while loops
// Category: Loops
// Course: Introduction to C Programming — Semester 1, Kashmir University

/*
1. Write a program to print multiplication table of a given number n
*/ 

//ye question sir ne dekha
#include<stdio.h>

int main(){

int n;
printf("enter your number : ");
scanf("%d" , &n);
for (int i = 0; i < 11; i++)
{
    printf("%d X %d = %d\n" , n , i , n*i);
}

    return 0;
}