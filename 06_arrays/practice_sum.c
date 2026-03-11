// File: practice_sum.c
// Topic: 1D Arrays, Array Operations
// Category: Arrays
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>
int sum =0;
int main() {
    int arr[5] = {1,2,4,3,2};
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i]; 
    }
    printf ("sum is %d" , sum);

    return 0;
}