// File: add_matrix2.c
// Topic: 2D Arrays, Matrices
// Category: 2D Arrays
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main() {
    int r, c;
    printf("Enter rows : ");
    scanf("%d", &r);
    
    printf("Enter columns: ");
    scanf("%d", &c);

    int arr[r][c];
    int brr[r][c];
    printf("enter %d elements of Matrix 1: ", r*c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("enter %d elements of Matrix 2: ", r*c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }
    printf("Output: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]+brr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}