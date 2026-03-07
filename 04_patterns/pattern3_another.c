// File: pattern3_another.c
// Topic: Nested loops, Star/Number patterns
// Category: Patterns
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main(){

int r;
printf("Enter number of row:");
scanf("%d" , &r);
int a=r;
for (int i = 1 ; i <=r; i++){
    for (int j = 1; j <= a ; j++){
       printf("* ");
    }
    a--;
    printf("\n");
}

    return 0;

}