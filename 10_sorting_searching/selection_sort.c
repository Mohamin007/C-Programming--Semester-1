// File: selection_sort.c
// Topic: Bubble/Selection/Quick Sort, Linear/Binary Search
// Category: Sorting & Searching
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>
void selection(int arr[], int n){
    for (int i = 0; i < n-1 ; i++)
    {
        int min = i;

            for (int j = i+1; j < n; j++)
            {
                if (arr[j]<arr[min])
                {
                    min=j;
                }
            }
            
        if (min!=i)
        {
            int temp = arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
        
    }
    
}
int main() {
    int n;
    printf("Enter the size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter your unsorted array of %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    selection(arr,n);

    printf("Sorted arrays is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}