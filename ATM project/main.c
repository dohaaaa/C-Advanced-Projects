#include <stdio.h>
#include <stdlib.h>
#define PASSWORD 2005
int main()
{

   int balance=10000;
   while(1){
     int password;
   printf("Enter your password:\n");
   scanf("%d",&password);
   if(password==PASSWORD){
      printf("valid\n");
      int procesNumber;
      printf("Enter the procesNumber :\n ");
      printf("to check your balance press 1\n");
      printf("to withdraw press 2\n");
      printf("to  deposit press 3\n");
      scanf("%d",&procesNumber);
      if(procesNumber==1){
        printf(" your balance is:%d\n",balance);
      }
      else if(procesNumber==2){
            int withdrawNumber;
      printf("Enter How many pounde you want to withdraw?\n");
      scanf("%d",&withdrawNumber);
      if( balance>=withdrawNumber){
         balance=balance-withdrawNumber;
      printf("your process done sucsesfully  now you have:%d\n ",balance);
      }
      else{
        printf("invalid operations!\n");
      }

      }
      else if(procesNumber==3){
            int debositNumber;
      printf("Enter the amount of deposit:\n");
      scanf("%d",&debositNumber);
      balance=balance+debositNumber;
      printf("you have deposit:%d and your balance is: %d\n",debositNumber, balance);

      }
      else{
         printf("wrong procesNumber\n");
      }
      }
      else{
        printf("wrong password\n");
      }
   }

}
