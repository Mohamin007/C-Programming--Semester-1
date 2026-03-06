// File: do_while_loop.c
// Topic: for, while, do-while loops
// Category: Loops
// Course: Introduction to C Programming — Semester 1, Kashmir University

/*
syntax of do while loop is
do {
   //code; 
} while (condition); 

THEORY:
The do–while loop works very similar to while loop. 
• ‘while’ checks the condition & then executes the code. 
• ‘do-while’ executes the code & then checks the condition. 

*/
#include<stdio.h>

int main(){

int i=0;
do{
    printf("The value of of i is %d\n " , i);//this first print the value of i (which was given)
    i++;              //this then increases the value by 1
} 
while (i<5);         //this then checks the condition after increament of i, 
                     //if true, then loops goes again
                     // if false, then loop terminates
                
    return 0;
                //so in this way do while loop printed the value first (the given i) and then checks the condition. 
}