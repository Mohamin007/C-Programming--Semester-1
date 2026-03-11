// File: user_input_array.c
// Topic: 1D Arrays, Array Operations
// Category: Arrays
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main() {
    int m;
    printf("Enter number of elements : ");
    scanf("%d" , &m);

    int arr[m];

    for (int i = 0; i <= m-1 ; i++)
    {
        printf("Enter your %d element : " , i+1);
        scanf("%d" , &arr[i]);
    }
    for (int i = 0; i <=m-1; i++)
    {
        printf("%d " , arr[i]);
    }
    

    return 0;
}