//question was : count the number of elements in a given array greater than a given number "a"...

#include<stdio.h>

int main() {
    int a;
    int count = 0;
    printf("Enter value : ");
    scanf("%d" , &a);
int arr [5] ={2,3,4,6,1};
    for (int i = 0; i <= 4; i++)
    {
        if (arr[i]>a)
        {
            printf("%d " , arr[i]);
            count++;
        }
    }
    printf("\ncount of numbers greater than %d is %d" , a, count);
    return 0;
}