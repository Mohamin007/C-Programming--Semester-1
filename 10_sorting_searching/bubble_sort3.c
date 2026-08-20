// File: bubble_sort3.c
// Topic: Bubble/Selection/Quick Sort, Linear/Binary Search
// Category: Sorting & Searching
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main() {
    int arr[7]={3,5,8,4,1,7,2};
    int n=7;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i<n-1; i++)
    {
        for (int j = 0; j<=n-1-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
            int temp= arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
          
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]); 
    }
    
    return 0;
}