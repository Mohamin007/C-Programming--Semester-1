// File: practice_prob3.c
// Topic: if/else, switch-case, Logical Operators
// Category: Control Flow
// Course: Introduction to C Programming — Semester 1, Kashmir University

/*
Calculate income tax paid by an employee to the government as per the slabs 
mentioned below: 
Income Slab         Tax            
2.5 – 5.0L           5%                        
5.0L - 10.0L        20%                  
Above 10.0L         30%                

Note that there is no tax below 2.5L. Take income amount as an input from the user. 
*/
#include<stdio.h>

int main(){

float  tax1 = 0.05, tax2= 0.20, tax3= 0.30;
int income;
printf("Enter your income : ");
scanf("%d", &income);

if(income>0 && income<= 250000){
    printf("The tax paid by you is 0" );
}
else if (income>250000&&income<=500000){
    printf("Tax paid by you is %.2f" , tax1 * (income - 250000));
}
else if (income>500000&&income<=1000000){
    printf("Tax paid by you is %.2f" , tax1 *(500000 - 250000) + tax2 * (income - 500000));
}
else if (income>1000000){
    printf("Tax paid by you is %.2f" , tax1 *(500000 - 250000) + tax2 * (1000000 - 500000)+ tax3 * (income -1000000));
}

    return 0;

}