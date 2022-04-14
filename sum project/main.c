#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sum=0;
    int number;
    float item;
    printf("how many items you want?\n");
    scanf("%f",&item);
    for (int i=0;i<item;i++){
      printf("Enter the item %d price:\n",i+1);
      scanf("%d",&number);
      sum=sum+number;

    }
    printf("the total price is :%f\n",sum);
    printf("avg price is :%f \n",sum/item);
}
