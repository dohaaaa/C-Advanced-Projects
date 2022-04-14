#include <stdio.h>
#include <stdlib.h>


   /* int x=5;
    int *p=&x;
    printf("%d",*p);*/



 void swap(int *x,int *y);


int main()
{

    int x=1;
    int y=2;

   printf("the value before swapping is :%d %d\n",x,y);

   swap(&x,&y);
   printf("the value after swapping is :%d %d\n",x,y);


}

  void swap(int *x,int *y){

  int temp;
  temp=*x;
  *x=*y;
  *y=temp;




  }
