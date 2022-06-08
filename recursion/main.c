#include <stdio.h>
#include <stdlib.h>

   int factorial(int n){

   if(n==1){
    return 1;
   }
   else{
    return n*factorial(n-1);
   }

   }


   int countdown(int n){

    printf("%d\n",n)
    if(n<=0){
        return 0;

    }
    else{
        return countdown(n-1);
    }
    }

    int main(){
    countdown(10);
    printf(factorial(10));

    }




