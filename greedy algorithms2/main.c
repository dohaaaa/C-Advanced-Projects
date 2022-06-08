#include <stdio.h>
#include <stdlib.h>

int main()
{
   double cost;
   double payment;
   int Dollar,halfDoller,quarterDoller,dime,nikel,penny;
   int remain;
   printf("Enter the total payment:\n");
   scanf("%lf",&payment);

   printf("Enter the cost:\n");
   scanf("%lf",&cost);

   cost=cost*100;
   payment=payment*100;

   remain=payment-cost;


   Dollar=remain/100;
   remain=remain%100;
   printf("your Dollar is:%d\n",Dollar);

   halfDoller=remain/50;
   remain=remain%50;
   printf("your halfDoller is:%d\n",halfDoller);

   quarterDoller=remain/25;
   remain=remain%25;
   printf("your quarterDoller is:%d\n",quarterDoller);

    dime=remain/10;
   remain=remain%10;
   printf("your dime is:%d\n",dime);

    nikel=remain/5;
   remain=remain%5;
   printf("your nikel is:%d\n",nikel);

   penny=remain/1;
   remain=remain%1;
   printf("your penny is:%d\n",penny);








}
