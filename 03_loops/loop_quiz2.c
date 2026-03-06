// File: loop_quiz2.c
// Topic: for, while, do-while loops
// Category: Loops
// Course: Introduction to C Programming — Semester 1, Kashmir University

/*
Quick Quiz: Write a program to print first ‘n’ natural number using do-while loop. 
*/

#include<stdio.h>

int main(){

    int i = 1; 
    int m;
    printf("How many natural numbers you want : ");
    scanf("%d" , &m);

    do{
       printf("The natural numbers are : %d\n" , i );i++;
    } while ( i<=m );
    

    return 0;

}

