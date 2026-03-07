// File: pattern4another.c
// Topic: Nested loops, Star/Number patterns
// Category: Patterns
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main(){

int a;
printf("Enter your rows: ");
scanf("%d" , &a);

for (int i = 1; i <= a; i++){
    
    for (int j = 1; j<=i ; j++)
    {
       printf("%d" , j);
    }
    printf("\n");
}

    return 0;

}