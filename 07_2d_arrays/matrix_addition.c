#include<stdio.h>

int main() {
    int arr[2][2]={1,2,3,4};
    int brr[2][2]={5,6,7,8};
    int rslt[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
         printf("%d " , arr[i][j] + brr[i][j]);
        }
        printf("\n");
    }
    
    return 0;

}


/*
{{above one is with the use of 3rd  matrix
and below one is only 2 matrix}}
*/   


#include<stdio.h>

int main() {
    int arr[2][2]={1,2,3,4};
    int brr[2][2]={5,6,7,8};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
        arr[2][2]+=brr[2][2];
        printf("%d " , arr[i][j] + brr[i][j]);
        }
        printf("\n");
    }
    
    return 0;

}