//write a new sentece in a old file w/o over-writing it
#include<stdio.h>

int main() {
    FILE* pt = fopen("student.txt", "a");
    char arr[]= "what are u saying!!";
    fputs(arr,pt);
    fclose(pt);
    return 0;
}