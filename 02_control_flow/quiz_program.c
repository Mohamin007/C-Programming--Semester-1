// File: quiz_program.c
// Topic: if/else, switch-case, Logical Operators
// Category: Control Flow
// Course: Introduction to C Programming — Semester 1, Kashmir University

/*
Quick Quiz: Write a program to find grade of a student given his marks based on below: 
90 – 100 => A 
80 – 90 => B 
70 – 80 => C 
60 – 70 => D 
50 – 60 => E 
<50     => F 
*/
#include<stdio.h>

int main(){

int a;
printf("Enter your marks : ");
scanf("%d" , &a);

if (a>100){
    printf("Invalid marks");
}
else if (a>90){
    printf("You got an A");
}   
else if (a>80){
    printf("You got a B");
}
else if (a>70){
    printf("You got a C");
}
else if (a>60){
    printf("You got a D");
}
else if (a>50){
    printf("You got an E");
}
else if (a<50){
    printf("You got an F");


}
    return 0;
}
