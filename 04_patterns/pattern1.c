// File: pattern1.c
// Topic: Nested loops, Star/Number patterns
// Category: Patterns
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main(){

int r;
int c;
printf("Enter number of rows : ");
scanf("%d" , &r);
printf("Enter number of columns : ");
scanf("%d" , &c);

for (int i = 1; i<=r; i++){   //this means no. of rows
    for (int i = 1; i <=c; i++)   //this means no. of stars in each rows

    {
        printf("*");
    }
    printf("\n");
}

    return 0;

}