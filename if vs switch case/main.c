#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*int day;
   printf("Enter the number of day :\n");
   scanf("%d",&day);
   if(day==1){
    printf("saturday\n");
   }
   else if(day==2){
    printf("sunday\n");
   }
    else if(day==3){
    printf("monday\n");
   }
    else if(day==4){
    printf("tuesday\n");
   }
    else if(day==5){
    printf("wednesday\n");
   }
    else if(day==6){
    printf("thursday\n");
   }
    else if(day==7){
    printf("friday\n");
   }
   else {
    printf("wrong input\n");
   }

   int day;
   printf("Enter the number of day :\n");
   scanf("%d",&day);
   switch(day){
      case 1:{printf("saturday\n");
          printf("the first day in week\n");
      }
          break;
      case 2:printf("sunday\n");
          break;
      case 3:printf("monday\n");
          break;
      case 4:printf("tuseday\n");
          break;
      case 5:printf("wednesday\n");
          break;
      case 6:printf("thursday\n");
          break;
      case 7:printf("friday\n");
          break;
      default:printf("wrong input");
          break;

   }*/

   char grade;
   printf("Enter your grade:\n");
   scanf("%c",&grade);
   switch(grade){

   case 'A':printf("your score from 85 to 100\n");
       break;
   case 'B':printf("your score from 75 to 84\n");
       break;
   case 'C':printf("your score from 74 to 60\n");
       break;
   case 'D':printf("your score from 50 to 59\n");
       break;
    default:printf("Invalid characters\n");
       break;


   }



}
