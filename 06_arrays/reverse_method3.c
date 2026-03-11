// File: reverse_method3.c
// Topic: 1D Arrays, Array Operations
// Category: Arrays
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include <stdio.h>
void rev(int brr[])
{
    int i = 0;
    int j = 4;
    int temp = 1;

    while (i < j)
    {
        if (brr[i] != brr[j])
        {
            temp = 0;
            break;
        }
        i++;
        j--;
    }
    if (temp == 1)
    {
        printf("Its a palindrome\n");
    }
    else
    {
        printf("Its not a palindrome\n");
    }
    return;
}

int main()
{
    int arr[5] = {1, 2, 3, 2, 4};
    rev(arr);
    for (int i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}