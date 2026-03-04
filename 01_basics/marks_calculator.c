//Write a program that asks for the marks of a student in 5 subjects (out of 100). 
//The program should then calculate and display the total marks and the percentage scored.
#include<stdio.h>

int main(){

int sub1, sub2, sub3, sub4, sub5;
printf("Your marks in English is : ");
scanf("%d" , &sub1);
printf("Your marks in Science is : ");
scanf("%d" , &sub2);
printf("Your marks in Maths is : ");
scanf("%d" , &sub3);
printf("Your marks in Social Studies is : ");
scanf("%d" , &sub4);
printf("Your marks in Regional is : ");
scanf("%d" , &sub5);
printf("The total marks you got is : %d\n" , sub1+sub2+sub3+sub4+sub5);
printf("The percentage you got is %d" , (sub1+sub2+sub3+sub4+sub5)/5 );
    return 0;

}