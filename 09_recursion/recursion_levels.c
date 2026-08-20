// File: recursion_levels.c
// Topic: Recursion, Base Case, Recursive Functions
// Category: Recursion
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

void num (int x, int y){
if (x>y)
{
    return;
}


num(x, y-1);
printf("%d " , y);
printf("%d " , x);
}


int main() {
    int a;
    printf("enter num : ");
    scanf("%d", &a);

   num(1 , a);


    return 0;
}