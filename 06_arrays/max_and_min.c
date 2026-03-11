// File: max_and_min.c
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
    int max=arr[0];
    int min=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
        if (arr[i]<min)
        {
            min=arr[i];
        }
        
    }
    printf("max is %d\n", max);
    printf("min is %d", min);
    return 0;
}