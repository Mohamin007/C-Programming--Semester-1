// File: practice_prob5.c
// Topic: if/else, switch-case, Logical Operators
// Category: Control Flow
// Course: Introduction to C Programming — Semester 1, Kashmir University

/*
. Write a program to determine whether a character entered by the user is 
lowercase or not. 
*/
//97 122
#include<stdio.h>

int main(){

char ch;
printf("Enter your letter : ");
scanf("%c", &ch);
printf("Your letter ASCII value is %d\n" , ch);
if(ch>=97&&ch<=122){
    printf("Your letter is lowercase");
}
else{
    printf("Your letter is not lowercase");
}
    return 0;

}