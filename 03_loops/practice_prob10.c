// File: practice_prob10.c
// Topic: for, while, do-while loops
// Category: Loops
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main(){
int prime = 0;
int n = 5;
int i=2;
while (i<n){
if(n%i==0){
    prime = 1;
    break;
}
i++;
}

if (prime==1){
    printf("The number is not prime");
}else{
    printf("The number is prime");
}

    return 0;

}