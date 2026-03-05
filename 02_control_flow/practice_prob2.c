// File: practice_prob2.c
// Topic: if/else, switch-case, Logical Operators
// Category: Control Flow
// Course: Introduction to C Programming — Semester 1, Kashmir University

/*
Write a program to determine whether a student has passed or failed. To pass, a 
student requires a total of 40% and at least 33% in each subject. Assume there 
are three subjects and take the marks as input from the user. 
*/
#include<stdio.h>

int main(){

int maths, science, eng;
printf("Marks in Maths : ");
scanf("%d", &maths);
printf("Marks in Science : ");
scanf("%d", &science);
printf("Marks in English : ");
scanf("%d", &eng);
//  m = (maths/100.0)*100.0;
// s = (science/100.0)*100.0;
//  e = (eng/100.0)*100.0;

printf("Your marks are %d %d %d\n" , maths , science , eng);
    
if (maths<33||science<33||eng<33 ){
printf("You are fail due to less marks in a subject");
}
else if( ((maths+eng+science)/3) < 40 ){
    printf("You are fail due to less percentage");
}
else{
    printf("You are pass");
}
return 0;
}