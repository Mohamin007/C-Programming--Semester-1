// File: practice_product.c
// Topic: 1D Arrays, Array Operations
// Category: Arrays
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main() {
    int prod = 1, n;
  
    printf("enter size of array : ");
    scanf("%d" , &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %dth element: " , i+1);
        scanf("%d" , &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        prod=prod*arr[i];
    }
    printf("product is %d" , prod);
    return 0;
}