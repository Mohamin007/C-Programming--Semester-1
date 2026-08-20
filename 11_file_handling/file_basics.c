// File: file_basics.c
// Topic: File I/O, fopen, fclose, fprintf, fscanf
// Category: File Handling
// Course: Introduction to C Programming — Semester 1, Kashmir University

// first time doing file handling — this covers reading from one file
// and writing to another
// fopen needs two arguments: filename and mode ("r" = read, "w" = write)

#include<stdio.h>

int main() {
    // reading from an existing file line by line
    FILE* pt;
    pt = fopen("file.txt", "r");
    char arr[100];
    while (fgets(arr,100,pt)!=NULL)
    {
        printf("%s", arr);
    }
    fclose(pt);
    // writing a string to a new file
    FILE* lb;
    lb = fopen("M7N", "w");
    char str[]= "Tu kitna pyara hai<<<333";
    fputs(str,lb);
    fclose(lb);
    return 0;
}