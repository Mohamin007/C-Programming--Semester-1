// File: quick_sort.c
// Topic: Bubble/Selection/Quick Sort, Linear/Binary Search
// Category: Sorting & Searching
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>
int partition(int arr[], int low, int high){
    int piv=arr[low];
    int i = low + 1; 
    int j = high;
    while (1)
    {
        while (i <= high && arr[i]<=piv)
        {
            i++;
        }
        while (arr[j]>piv)
        {
            j--;
        }
        if (i>=j)
        {
            break;
        }
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    int temp = arr[low];
    arr[low]=arr[j];
    arr[j]=temp;

 return j;
} 
void quicksort(int arr[], int low, int high){
    if(low<high){
        int p = partition(arr,low,high);
        quicksort(arr,low,p-1);
        quicksort(arr,p+1,high);
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
   
    quicksort(arr,0,n-1);

    printf("Sorted arrays is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}