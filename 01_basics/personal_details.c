// File: personal_details.c
// Topic: Variables, Data Types, Operators, Basic I/O
// Category: Basics
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main(){
char a[7] ; 
int b , c;

printf("Your name : ");
scanf("%s", &a); //%s means string,because character includes one letter only

printf("Your age : ");
scanf("%d", &b);

printf("Your Phone number : ");
scanf("%d" , &c );

printf("Your Details ----------");
printf("Your name : %s\n Your age : %d\n Your number : %d" , a ,b ,c);
    return 0;

}