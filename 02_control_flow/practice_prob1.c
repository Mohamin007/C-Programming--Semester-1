// File: practice_prob1.c
// Topic: if/else, switch-case, Logical Operators
// Category: Control Flow
// Course: Introduction to C Programming — Semester 1, Kashmir University

/*What will be the output of this program 
int a = 10; 
if (a = 11) 
printf("I am 11"); 
else  
printf("I am not 11");
*/ 
//people definitely get this wrong because
#include<stdio.h>

int main(){

int a = 10; 
if (a = 11) // here "a = 11" is assigning a as 11 rather then asking if a = 11 even though its in if statement
            // because = sign is for assigning, its saying compiler that a IS equal to 11 
            // it shoulve been if (a == 11)
            // another reason is that as in id statement "a = 11" which is non zero
            // so compilor took it as a value and printed it
printf("I am 11"); 
else  
printf("I am not 11");
    return 0;

}
