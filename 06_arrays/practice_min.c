// File: practice_min.c
// Topic: 1D Arrays, Array Operations
// Category: Arrays
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main() {
   int arr[4]= {2,10,4,3};

   int min = arr[0];
   for (int i = 0; i < 4 ; i++)
   {
    if (arr[i]<min)
    {
        min=arr[i];
    }
    
   }
   printf("%d" ,min);
    return 0;
}