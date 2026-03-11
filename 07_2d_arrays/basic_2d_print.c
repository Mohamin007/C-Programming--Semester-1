// File: basic_2d_print.c
// Topic: 2D Arrays, Matrices
// Category: 2D Arrays
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main() {
    int r,c;
    printf("Enter number of rows you want: ");
    scanf("%d",&r);
    printf("Enter number of columns you want: ");
    scanf("%d",&c);

    int arr[r][c];
    printf("Enter %d elements: ", r*c);
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++)
        {
            
            scanf("%d" , &arr[i][j]);
        }
    } 
    printf("\n");
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
       
    }
    return 0;
}