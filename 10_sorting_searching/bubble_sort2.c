// File: bubble_sort2.c
// Topic: Bubble/Selection/Quick Sort, Linear/Binary Search
// Category: Sorting & Searching
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>
void bubble(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
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
    
    bubble(arr, n);

    printf("Sorted arrays is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}