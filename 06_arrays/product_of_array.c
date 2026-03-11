// File: product_of_array.c
// Topic: 1D Arrays, Array Operations
// Category: Arrays
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main() {
    int prod = 1;
    int arr [4];

for (int i = 0; i <= 3; i++)
{
      printf("Enter your %d element : " , i+1);
        scanf("%d" , &arr[i]);
}

    for (int i = 0; i <= 3; i++)
    {
        prod = prod * arr[i];
    }

    printf("%d" , prod);
    
    return 0;
}