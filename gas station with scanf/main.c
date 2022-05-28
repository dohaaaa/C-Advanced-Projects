#include <stdio.h>
#include <stdlib.h>

int main()
{
   float liter;
   printf("Enter how many liters you want\a?\n");
   scanf("%f",&liter);
   printf("For gasoline 80 you will pay:%f\n",liter*7.25);
   printf("For gasoline 92 you will pay:%f\n",liter*8.50);
   printf("For gasoline 95 you will pay:%f\n",liter*9.50);


    return 0;
}
