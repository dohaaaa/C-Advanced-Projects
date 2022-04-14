#include <stdio.h>
#include <stdlib.h>

int main()
{

   float laptop_price;

   printf("Enter the laptop_price please!\n");

   scanf("%f",&laptop_price);


   printf("the added tax is :%f\n",laptop_price*0.05);

   printf("the laptop_price after the added tax is:%f\n",laptop_price+laptop_price*0.05);



    return 0;
}
