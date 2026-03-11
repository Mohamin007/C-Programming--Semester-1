// File: multiply_matrix.c
// Topic: 2D Arrays, Matrices
// Category: 2D Arrays
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main() {
    int r1, c1, r2, c2;
    printf("Enter rows of m1: ");
    scanf("%d", &r1);
    
    printf("Enter columns of m1: ");
    scanf("%d", &c1);

    printf("Enter rows of m2: ");
    scanf("%d", &r2);
    
    printf("Enter columns of m2: ");
    scanf("%d", &c2);

    int arr[r1][c1];
    int brr[r2][c2];
    if (c1!=r2)
    {
        printf("Matrix multiplication not possible: ");
        return 0;
    }
    else{
    printf("enter %d elements of Matrix 1: ", r1*c1);
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("enter %d elements of Matrix 2: ", r2*c2);
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }
    int res[r1][c2];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j< c2; j++)
        {
                res[i][j]=0;   
            
        }
        
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j< c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                res[i][j]+=arr[i][k]*brr[k][j];
            }
            
        }
        
    }
    
    printf("Output: \n");
    
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d", res[i][j]);
        }
        printf("\n");
    }
 } 
    return 0;
}