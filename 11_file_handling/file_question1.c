//"Write a C program to create a file named student.txt 
//and write your name and roll number into it."
//"Write a program to read the content of
// the student.txt file created above and display it on the screen."


#include<stdio.h>

int main() {
    FILE* pt;
    pt = fopen("student.txt", "r");
    char str[100];
    while (fgets(str,100,pt)!=NULL)
    {
        printf("%s", str);
    }
    
    FILE* st;
    st = fopen("student.txt", "w");
    char arr[] = "My name is Mohamin \nand roll number is 06";
    fputs(arr,st);
    fclose(st);
    return 0;
}
