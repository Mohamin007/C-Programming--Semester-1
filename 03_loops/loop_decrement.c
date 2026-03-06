// File: loop_decrement.c
// Topic: for, while, do-while loops
// Category: Loops
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main(){
int i;
for (int i = 5; i ; i--)
{                          // here he used for for decreasing value, isse pehle we used increased value 
    printf("%d\n" , i);
}

    return 0;

}
/*
whats written?
"int i;"      first declared i as int i
for (in i = 5 ;      then for loop and put value of i as i =5
i;       here we wrote condition as i means i shhould be positive (non zero)
i--)     here we are decreasing the value of i by 1   
*/