// File: matrix_max_min.c
// Topic: 2D Arrays, Matrices
// Category: 2D Arrays
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main() {
    int arr[2][2]={2,5,3,1};
    int max=arr[0][0];
    int min=arr[0][0];
    int max_i=0, max_j=0, min_i=0, min_j=0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (arr[i][j] > max)
            {
                max=arr[i][j];
                max_i=i, max_j=j;
            }
            if (arr[i][j] < min)
            {
                min=arr[i][j];
                min_i=i, min_j=j;
            }

        }
    }


    printf("Minimum is %d\n", min);
    printf("Index is %d,%d\n", min_i, min_j);
    printf("Maximum is %d\n" , max);
    printf("Index is %d,%d", max_i, max_j);
    return 0;
}