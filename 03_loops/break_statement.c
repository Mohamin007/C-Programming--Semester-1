// File: break_statement.c
// Topic: for, while, do-while loops
// Category: Loops
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main(){
 int a;
 printf("Enter number : ");
 scanf("%d" , &a);

 switch(a){
    case 1:
        printf("You got chips\n");
       break; // this is break, its like a order to compilor saying if my matched just stop, dont go further
    case 2:
        printf("You got juice\n");
        break;
    case 3:
        printf("You got mangoes\n");
        break;
    case 4:
        printf("You got chocolate\n");
        break;
    default:
        printf("You got nothing\n");
        break;
 }
// 
    return 0;

}