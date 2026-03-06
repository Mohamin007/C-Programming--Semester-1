// File: practice_prob2.c
// Topic: for, while, do-while loops
// Category: Loops
// Course: Introduction to C Programming — Semester 1, Kashmir University

/*
2. Write a program to print multiplication table of 10 in reversed order. 
*/
//ye question khud kiya
#include<stdio.h>

int main(){

int n =10;
for (int i = 10; i; i--)
{
    printf("%d x %d = %d\n " , n , i , n*i );
}

    return 0;

}