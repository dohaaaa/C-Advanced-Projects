#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*worst case
     average case
     best case
   */
   //liner search
   int arr[]={1,2,3,4,5,6,7,8,9,10};
   int number=20;
   for(int i=0;i<10;i++){

        if(arr[i]==number){
            printf("%d\n",i);
            return i;
        }
   }
   printf("Not found\n");
   return 0;





   char names[]={'mohamed','doha','ali'};
   char name='ali';
   for(char i=0;i<3;i++){

        if(names[i]==name){
            printf("%d\n",i);
            return i;
        }
   }
   printf("Not found\n");
   return 0;
















}
