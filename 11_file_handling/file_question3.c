// File: file_question3.c
// Topic: File I/O, fopen, fclose, fprintf, fscanf
// Category: File Handling
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main() {
    FILE* pt = fopen("student.txt", "r");
    char arr[100];
    int inword=0,count=0;
    while (fgets(arr,100,pt)!=NULL)
    {
        for (int i = 0; arr[i] != '\0'; i++)
        {
            if (arr[i]==' ' || arr[i]=='\n' || arr[i] == '\t')
            {
                inword=0;
            }
            else if (inword==0)
            {
                inword=1;
                count++;
            }
            
        }
        
    }
    printf("Number of words : %d", count);
    fclose(pt);;
    return 0;
}