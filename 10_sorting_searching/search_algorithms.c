// File: search_algorithms.c
// Topic: Bubble/Selection/Quick Sort, Linear/Binary Search
// Category: Sorting & Searching
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include <stdio.h>
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }

}

int binarySearch(int arr[], int size, int target) {
    int low = 0;           
    int high = size - 1;   
    
    while (low <= high) {
    
        int mid = (low + high) / 2;
        
    
        if (arr[mid] == target) {
            return mid;
        }
        
    
        
        if (arr[mid] < target) {
            low = mid + 1;
        }
        
       
        else {
            high = mid - 1;
        }
    }
    
    return -1;
}


int main() {
    
    int data[] = {2,  5,  8, 12, 16, 23, 38, 56, 72, 91};
    int n = 10; 
    
    int target;
    printf("Enter number to find: ");
    scanf("%d", &target);
    
   
    int result1 = linearSearch(data, n, target);
    if (result1 != -1) {
        printf("Linear Search found %d at index %d\n", target, result1);
    } else {
        printf("Linear Search: Not found\n");
    }

    int result2 = binarySearch(data, n, target);
    if (result2 != -1) {
        printf("Binary Search found %d at index %d\n", target, result2);
    } else {
        printf("Binary Search: Not found\n");
    }
    
    return 0;
}