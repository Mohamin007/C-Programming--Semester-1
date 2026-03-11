// File: sum_of_array.c
// Topic: 1D Arrays, Array Operations
// Category: Arrays
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main() {
    int sum = 0;
    int arr[6]= {1, 3,5,2,4,6};
    
for (int i = 0; i <= 5; i++)
{
    sum = sum + arr[i];
}
printf("%d", sum);
    return 0;
}