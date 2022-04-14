#include <stdio.h>
#include <stdlib.h>

int main()
{

     /* 1.count
       2.check
       3.++ --*/

    int count=1;
    while(count<=10){

    printf("Hello world!%d\n",count);

    count=count+1;
    count++;
    count=count+2;
    count+=2;

    }
    int count=10;
    while(count>=1){

        printf("Hello world!%d\n",count);

        count--;
    }

   for(int i=0;i<10;i++){

    printf("Hello world!%d\n",i);

   }

}
