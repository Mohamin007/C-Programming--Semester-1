// File: pattern5.c
// Topic: Nested loops, Star/Number patterns
// Category: Patterns
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main(){

int a;
printf("Enter :");
scanf("%d" , &a);

for (int i = 1; i <=a; i++){
    for (int j = 1; j<=i; j++){
        
        printf("%d" , (2*j) -1);
    }
    printf("\n");
}

    return 0;

}