//Explain step by step evaluation of 3*x/y – z+k, where x=2, y=3, z=3, k=1


#include<stdio.h>

int main(){
 int x = 2;
 int y = 3;
 int z = 3;
 int k = 1;

 printf("the value is %d" ,3*x/y - z+k );

    return 0;

}
/*
step by step evaluation
3*x/y - z+k
3*2/y - z+k
6/y – z+k
6/3 – z+k
2 – z+k
2 – 3+1 (here is first - then is + , so 2-3 which is -1 then -1+1)
-1 + 1
0
*/