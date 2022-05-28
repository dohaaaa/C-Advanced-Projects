#include <stdio.h>
#include <stdlib.h>
#define CURRENTYEAR 2022

int main()
{
  float x;
  float y;

  printf("Enter the number of x:\n");
  scanf("%f",&x);

  printf("Enter the number of y:\n");
  scanf("%f",&y);

  if(x==0){
    printf("the result is:0\n");
  }
  else if(y==0){
    printf("math error\n");
  }
  else{
    printf("the result is %f:\n",x/y);
  }

  int year;
  printf("what year were you born?\n");
  scanf("%d",&year);

  if(year>CURRENTYEAR){
    printf("really you have not been born yet!\n");
    printf("congrats on time travel\n");
  }
   else {
    printf("so this year you will turn %d on your birthday\n",CURRENTYEAR-year);
  }




printf("what year were you born?\n");
  scanf("%d",&year);


  if ((year%4)==0)
  {

      printf("you were born in leap year --cool!\n");
  }

  int number;
  printf("Enter the number:\n");
  scanf("%d",number);

  if((number%2)==0){
    printf("Even!");
  }
  else{
    printf("odd!");
  }


    return 0;
}
