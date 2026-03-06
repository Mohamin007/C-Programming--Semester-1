//iteration is block of code that will run
#include<stdio.h>

int main(){

for (int i = 1; i < 16; i++)
{ 
   if (i==9){
    //break; // means exit this loop now!!
    //continue; //means skip this iteration now!!
   }
  printf("Your i is %d\n" , i);
  
}
printf("Loop is done");
    return 0;

}