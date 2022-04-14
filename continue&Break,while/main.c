#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
    continue & Break
    do & while


    */

     /* int age;
    for(int i=0;i<5;i++){
        printf("Enter the age of %d employee: \n",i+1);
        scanf("%d",&age);
        if(age>30){
            continue;
        }
        else{
            printf("Accepted the number %d\n",i+1);
        }
        printf("========\n");
    }

    int age;
    for(int i=0;i<10;i++){
        printf("Enter the age of %d students: \n",i+1);
        scanf("%d",&age);
        if(age<1){
            continue;
        }
        else{
            printf("Accepted the number %d\n",i+1);
        }
        printf("========\n");
    }

    int birthdate;
    do{
        printf("Enter your birthdate:\n");
        scanf("%d",&birthdate);

    }
    while(birthdate<1);
    printf("your age is :%d",2022-birthdate);*/

   /* float item;
    do{
        printf("Enter the price of item:\n");
        scanf("%f",&item);
    }
    while(item<1);
    printf("the final price after the taxes will be :%f ",item+(item*0.14));*/

    int itemprice;
    int itemnumber;
    int sum=0;
    printf("Enter the number of items:");
    scanf("%d",&itemnumber);
    for(int i=0;i<itemnumber;i++){
        do{
            printf("Enter the item %d price:",i+1);
            scanf("%d",&itemprice);

        }
        while(itemprice<1);
        sum=sum+itemprice;
    }
    printf("your total cost is %f:\n",sum+sum*0.14);


}



