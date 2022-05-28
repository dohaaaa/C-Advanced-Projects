#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* int StudenGrade[5];
    StudenGrade[0]=90;
    StudenGrade[1]=80;
    StudenGrade[2]=70;
    StudenGrade[3]=50;
    StudenGrade[4]=66;


    for(int i=0;i<5;i++){

        printf("student that has ID %d got a %d\n",i+1,StudenGrade[i]);
    }*/

     int StudenGrade[5];
     for(int i=0;i<5;i++){
        printf("Enter the student is %d grade: ",i+1);
        scanf("%d",&StudenGrade[i]);

     }



    for(int i=0;i<5;i++){
         //queue// Fifo ,first input first output
         //stack//lifo, last input first output

            if(StudenGrade[i]>=50){
    printf("student that has ID %d passed the exam and got: %d\n",i+1,StudenGrade[i]);
            }
            else{
                continue;
            }

    }









}
