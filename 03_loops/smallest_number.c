// File: smallest_number.c
// Topic: for, while, do-while loops
// Category: Loops
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main(){

int a , b , c;
printf("Enter your number: ");
scanf("%d" , &a);
printf("Enter your number: ");
scanf("%d" , &b);
printf("Enter your number: ");
scanf("%d" , &c);

if (a<b && a<c) {
    printf("%d is the smallest number\n" , a);
} 
else if (b<a && b<c ) {
  printf("%d is the smallest number\n" , b) ;
} 
if (c<b && c<a) {
    printf("%d is the smallest number\n" , c);
} 

    return 0;

}