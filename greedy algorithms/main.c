#include <stdio.h>
#include <stdlib.h>

int main()
{
    int item=27;
    int pay=100;
    int remain=pay-item;
    int hundred,half,ten,pound;

    printf("the remain is :%d\n ",remain);

    hundred=remain/100;
    remain=remain%100;
    printf("your hundreds are :%d\n",hundred);

    half=remain/50;
    remain=remain%50;
    printf(" your half is :%d\n",half);

    ten=remain/10;
    remain=remain%10;
    printf(" your ten is :%d\n",ten);

    printf(" your pounds are :%d\n",remain);

    return 0;





}
