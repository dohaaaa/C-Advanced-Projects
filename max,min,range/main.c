#include <stdio.h>
#include <stdlib.h>

int main()
{
   int max=0;
   int min=100;
   int number;
   int count;
   printf("Enter how many students ?\n");
   scanf("%d",&count);
   for(int i=0;i<count;i++){
    printf("Enter the students %d grade is:\n ",i+1);
    scanf("%d",&number);
    if(number>max){
        max=number;
    }
    else if(number<min){
        min=number;
    }


    else{}
   }


   printf("the maximum grade is %d:\n",max);
   printf("congrats, you are top one !\n");
   printf("the minimum grade is %d:\n",min);
   if(min>=50){
    printf("you passed!\n");
   }
   else{
     printf("you failed!\n");
   }
   printf("the range  grade is %d:\n",max-min);

}
