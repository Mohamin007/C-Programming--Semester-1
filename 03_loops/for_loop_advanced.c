// File: for_loop_advanced.c
// Topic: for, while, do-while loops
// Category: Loops
// Course: Introduction to C Programming — Semester 1, Kashmir University

/*
syntax for "for" loop is 

for (initialize; test; increment or decrement) 
{ 
//code; 
} 
THEORY:
Initialize → Setting a loop counter to an initial value. 
• Test → Checking a condition. 
• Increment → Updating the loop counter. 

*/
#include<stdio.h>

int main(){
int n=6; //here we put input with which we compare our i

for (int i = 0; i < n; i++)       // this is the syntax for our for loop
{                               
    printf("The value of i is %d\n" , i);
}

    return 0;

}
// logic behind it:
 // first we declarre variable i and put its value anything, here we put 0
// then we compare/test { which is the condition} with our first integer n,
 //if its true, loops goes and prints
//if false, loop terminates
//then comes i++, this plays roles when condition is true
// when the first value is printed uske baad value is increased by 1
// then check hoti hai condition i.e i<n
 // if true, then loop goes again and print value,  warna terminate
//uske baad phrse value increase then check then print or terminate.

//so pehle i<n ke paas , if true phr print ke paas phr i++ then repeat 
//this is the for loop