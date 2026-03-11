//i mostly do questions with user input... do yourself by not taking user input

#include<stdio.h>

int main() {
    int arr [4];
    int max = -1;
for (int i = 0; i <= 3; i++)
{
      printf("Enter your %d element : " , i+1);
        scanf("%d" , &arr[i]);
        
        if (arr[i]> max){
            max = arr[i];
        }
}
printf("max element is %d" , max);

    return 0;
}