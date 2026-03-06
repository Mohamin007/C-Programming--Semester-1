//check whether a given number is prime or not using loops.
#include<stdio.h>

int main(){

    int prime = 0;
    int n = 2;

    for (int i = 2; i < n; i++) {   
        if (n % i == 0) {
            prime = 1;  
            break;
        }
    }

    if (prime == 1) {
        printf("The number %d is not prime\n" , n);
    } else {
        printf("The number %d is prime\n" , n);
    }

    return 0;
}
