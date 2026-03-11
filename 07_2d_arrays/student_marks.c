//write a prgm to store r.no and marks obtained by 4 students side by side in a matrix
#include<stdio.h>

int main() {
    int r=4, m=2;
    int arr[r][m];
    printf("R.no.  Marks\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
   
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < m; j++)
        {
           printf("%d ", arr[i][j]);
        } 
        printf("\n");
    }
   
    
    return 0;
}