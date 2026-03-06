// File: reverse_number2.c
// Topic: for, while, do-while loops
// Category: Loops
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>
#include<string.h>
int main() {
    char arr[40];
    int size=0;
    int k=0;
    printf("Enter input: ");
    scanf("%[^\n]s", arr);
    
    while (arr[k]!='\0')
    {
        size++;
        k++;
    }
    for (int i = 0, j=size-1 ; i <=j; i++, j--)
    {
        char temp = arr[i];
        arr[i]= arr[j];
        arr[j]=temp;
    }
    printf("reverse is : ");
    puts(arr);
    return 0;
}