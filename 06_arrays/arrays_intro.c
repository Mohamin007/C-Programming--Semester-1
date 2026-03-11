// File: arrays_intro.c
// Topic: 1D Arrays, Array Operations
// Category: Arrays
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main() {
    int arr[3][3];
    printf("Enter your first matrix: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter your [%d,%d] index element: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    int brr[3][3];
    printf("Enter your second matrix: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter your [%d,%d] index element: ", i+1,j+1);
            scanf("%d", &brr[i][j]);
        }
    }
    printf("The two arrays are: \n");
    printf("First matrix: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("Second matrix: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int res[3][3];
    printf("The sun of the two matrices above is: \n");
        for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            res[i][j]=  arr[i][j] + brr[i][j];
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}