//  If int arr[5] = {10, 20, 30, 40, 50};, what is the value of *(arr + 2)?
#include<stdio.h>

int main() {
    int  arr[5] = {10, 20, 30, 40, 50};
    printf("%d", *(arr+2));
    return 0;
}