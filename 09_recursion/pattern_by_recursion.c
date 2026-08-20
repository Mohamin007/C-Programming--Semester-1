//resursion is function calling itself


#include<stdio.h>

void version(int x){
if (x==0){return;}        //this is the base case
{
    printf("%d\n" , x);
    version(x-1);     //here we call the function "version",
}

}

int main(){
int a;
    printf("enter  num:");
    scanf("%d" , &a);

   version (a); 
return 0;
}
