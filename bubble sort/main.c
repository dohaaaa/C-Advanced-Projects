#include <stdio.h>
#include <stdlib.h>

int main()
{
   int gradeArray[]={20,50,100,90,70,60,10,55};
   short n=sizeof(gradeArray)/sizeof(gradeArray[0]);
    //n=8
   //sizeof(gradeArray)=32
   //sizeof(gradeArray[0])=4=sizeof(int)

   int temp;

   //bubble sort code
   for(int i=0;i<n-1;i++){
     for(int j=0;j=n-i-1;j++){

         if(gradeArray[j]>gradeArray[j+1]){

             //swap
             temp=gradeArray[j];
            gradeArray[j]=gradeArray[j+1];
            gradeArray[j+1]=temp;
     }
    }
   }

   for(int k=0;k<n;k++){
    printf("%d",gradeArray[k]);
   }
}
