// File: practice_max.c
// Topic: 1D Arrays, Array Operations
// Category: Arrays
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main() {
int arr[5] = {1,4,30,6,70};
int max=arr[0];
for (int i = 0; i < 5; i++)
{
    if (arr[i] > max)
    {
        max=arr[i];
        
    }
    
}
printf("%d" , max);
    return 0;
}