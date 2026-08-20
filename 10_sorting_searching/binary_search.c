// File: binary_search.c
// Topic: Bubble/Selection/Quick Sort, Linear/Binary Search
// Category: Sorting & Searching
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>
int bin(int arr[] ,int n, int key){
    int low=0;
    int end=n-1;
    int mid;
    while (low<=end)
    {
        mid=(low+end)/2;
        if (arr[mid]==key)
        {
            return mid;
        }
        else if (arr[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return -1;
}
int main() {
    int n;
    printf("Enter the size of yor array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %dth element: ",i+1);
        scanf("%d", &arr[i]);
    }
    int key;
    printf("Enter the number to find in the array: ");
    scanf("%d", &key);
    
    int bi= bin(arr, n ,key);
    
    if (bi==-1)
    {
        printf("Number not found!");
    }
    else{
        printf("Num found at index: %d, position: %d", bi,bi+1);
    }

    return 0;
}