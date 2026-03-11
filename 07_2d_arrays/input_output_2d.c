// File: input_output_2d.c
// Topic: 2D Arrays, Matrices
// Category: 2D Arrays
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main() {
    int r, c;
    printf("Enter rows: ");
    scanf("%d", &r);
    
    printf("Enter columns: ");
    scanf("%d", &c);

    int arr[r][c];
    printf("enter %d elements: ", r*c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Output: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}