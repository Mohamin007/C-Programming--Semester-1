// File: pattern4.c
// Topic: Nested loops, Star/Number patterns
// Category: Patterns
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main(){

int a;
printf("Enter your rows : ");
scanf("%d" , &a);

for (int i = a; i >=1; i--){
    
    for (int j = 1; j<=i; j++){
        printf("%d" , j);
    }
printf("\n");    
}

    return 0;

}