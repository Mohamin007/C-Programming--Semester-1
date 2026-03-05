// File: switch.c
// Topic: if/else, switch-case, Logical Operators
// Category: Control Flow
// Course: Introduction to C Programming — Semester 1, Kashmir University

/*
switch-case is a control statement in C used when you want to perform different actions based on the value of a variable.
It's like saying:
"If the value is this, do this. If it's something else, do something different..."
eg
Press 1 → you get Chips
Press 2 → you get Chocolate
Press 3 → you get Juice
Otherwise → Invalid option
*/
#include<stdio.h>

int main(){
 int a;
 printf("Enter number : ");
 scanf("%d" , &a);

 switch(a){
    case 1:
        printf("You got chips\n"); // if we entered 1, we will get chips and everything below it    
    case 2:
        printf("You got juice\n"); //  similarly with this, if we press 2 we will get this and everythig below this
    case 3:
        printf("You got mangoes\n"); // smae goes on with this
    case 4:
        printf("You got chocolate\n");
    default:
        printf("You got nothing\n");// if we press number other then mentioned above, we will get nothing.
 }
// so if I pressed 1 and I only want 1 ( mtlb maine agar 1 dabaya muje sb milega chips juice etc etc)
// lekin agar muje sirf chips chahiye uske liye break statement lgta hai.... its in another code named break.c
    return 0;

}
