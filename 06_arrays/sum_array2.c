// File: sum_array2.c
// Topic: 1D Arrays, Array Operations
// Category: Arrays
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main() {
    int n;
    printf("enter array size: ");
    scanf("%d", &n);
    int sum =0;
    int arr[n];
    printf("enter elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    float avg = ((float)sum/2);
    printf("sum is :%d\n average is %.2f", sum, avg) ;
    return 0;
}