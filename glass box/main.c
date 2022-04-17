#include <stdio.h>
#include <stdlib.h>
#include <math.h>


  void printf_hello_3_times();
  int add(int x,int y);
  void sum(int x,int y);
  float bmi(int height,int wegiht);
  void max(int x,int y);
  void DohaEnryption();
  void swap(int x,int y);
  void search(int x[],int size,int value);




int main()
{
    printf_hello_3_times();
     int sum=add(4,8);
     printf("%d",sum);
       sum(20,5);
     printf("enter your height\n");
     scanf("%f",&height);
     printf("enter your wegiht\n");
     scanf("%f",&wegiht);

     printf("%f",bmi(height,wegiht));

     max(19,6);
     DohaEnryption();
     swap(10,90);
     int grades[]{50,90,0,45,100};
     search(5,100)

}

 void  printf_hello_3_times(){
    printf("hallo world \n");
    printf("hallo world \n");
    printf("hallo world \n");


 }

  int add(int x,int y){

  return x+y;

  }

    void sum(int x,int y){

    printf("%d",x+y);

    }

      float bmi(int height,int weight){

       float bmi=weight/(height*height);
       return bmi;

      }

       void max(int x,int y){
       if(x>y){
        printf("x\n");
       }
       else{
         printf("y\n");
       }

       }

        void DohaEnryption(){

         char massage[50];
    int key;
    printf("Enter the massage:\n");
    gets(massage);
    printf("Enter the key:\n");
    scanf("%d",&key);

    for(int i=0;i<strlen(massage);i++){
        printf("%c",massage[i]=massage[i]+key);
    }

        }

  void swap(int max,int min){

  int temp;
  temp=max;
  max=min;
  min=temp;
  printf("NOW\n");
  printf("the max variables is equal %d\n",max);
  printf("the min variables is equal %d\n",min);

  }

  void search(int x[],int size,int value){

  for(int i=0;i<size;i++){
    if(x[i]==value){
        printf("found\n");
    }
    else{
        printf(" not found\n");

    }

  }

  }





