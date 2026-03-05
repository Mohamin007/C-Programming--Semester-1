// File: logical_if_else.c
// Topic: if/else, switch-case, Logical Operators
// Category: Control Flow
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main(){
int a = 1, b = 1;

if( a&&b ){
    printf("Both are true\n");   // here the concept of nonzero in if comes.
    //if a&&b was 0 it wouldve not executed,
    //because only non zero numbers are executed 
    //it can also be written as
}
if (a){
    if (b){
printf("Both are true\n");
    }
}

// if i did this
int c=1, d=0;
if(c&&d){
    printf("value is true"); // its not executed because d is false i.e its 0
                            //and true && false is false(meaning its zero)
}
else{
    printf("somethig is zero");
}
    return 0;
}
// very easy
