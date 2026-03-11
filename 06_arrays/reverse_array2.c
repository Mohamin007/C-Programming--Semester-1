// File: reverse_array2.c
// Topic: 1D Arrays, Array Operations
// Category: Arrays
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main() {
    int n;
    printf("enter array size: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("enter elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Rev is: ");
    for (int i = n-1; i >=0; i--)
    {
        printf("%d", arr[i] );
    }
    
    return 0;
}