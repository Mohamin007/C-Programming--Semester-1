// File: if_statement.c
// Topic: if/else, switch-case, Logical Operators
// Category: Control Flow
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main(){

int age = 10;
if(age<18){
    printf("You cannot vote\n");
    //we dont get any output if condition is not fulfilling
    
//we can use many ifs as we want
}
if(age%5==0);
printf("Your age is divisible by 5 ");

//here age%5==0 means what?
//we know what is age%5 , means remainder after we divide age with 5
//now ==0 is to check whether the remainder, we get after dividing age with 5, is zero or not.
//so double equals == means to check equality...here we dont know whether its really equal or not
// so we use ==,,,, it can be age%9==21
//means checking whether the remainder after dividing age with 9 is 21 or not

    return 0;

}