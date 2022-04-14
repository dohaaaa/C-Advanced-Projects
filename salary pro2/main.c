#include <stdio.h>
#include <stdlib.h>

int main()
{

    float salary;
    float sales;
    float hrsworked;
    printf("Enter your salary:\n");
    scanf("%f",& salary);
    printf("Enter your sales:\n");
    scanf("%f",& sales);
    printf("Enter your hrsworked:\n");
    scanf("%f",& hrsworked);

    (sales>25000 || hrsworked> 40)? printf(" bonus ,your salary will to be :%f", salary+(salary*0.10)):printf("no bonus.");
    !(sales>25000 || hrsworked> 40)?printf(" discond ,your salary will to be :%f", salary-(salary*0.10)):printf("no discond.");






    return 0;
}
