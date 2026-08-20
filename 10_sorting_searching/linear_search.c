// File: linear_search.c
// Topic: Bubble/Selection/Quick Sort, Linear/Binary Search
// Category: Sorting & Searching
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>
int lin(int arr[] ,int n, int key){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            return i;
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
    
    int ls= lin(arr, n ,key);
    
    if (ls==-1)
    {
        printf("Number not found!");
    }
    else{
        printf("Num found at index: %d, position: %d", ls,ls+1);
    }

    return 0;
}