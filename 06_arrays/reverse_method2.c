//using 1 array
//usig for loop
#include<stdio.h>
int rev (int brr[]){ 
    int temp = 0;  

for (int i = 0; i < 6; i++)
{
    for (int j = i; j < 6; j++)
    {
        temp   = brr[i];
        brr[i] = brr[j];
        brr[j] = temp;
    }
}

return temp;

}
int main() {
    int arr[6] = {1,2,3,4,5,6};

   rev(arr);
    
   for (int i = 0; i < 6; i++)
   {
    printf("%d" , arr[i]);
   }
   
    return 0;
}