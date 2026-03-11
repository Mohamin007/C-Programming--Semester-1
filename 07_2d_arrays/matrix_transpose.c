// File: matrix_transpose.c
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
    printf("enter %d elements of Matrix 1: ", r*c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}