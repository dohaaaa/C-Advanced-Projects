#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Enter your age:\n");
    scanf("%d",&age);

    if(age>=18){
        printf("you are legal\n ");
    }
    else{
        printf("you are illegal\n");
    }

    int number;
    printf("Enter a number\n");
    scanf("%d",&number);
    if(number!=7){
        printf("okey your number will be %d",number);
    }
    else{
        printf("reserved\n");
    }



    return 0;
}
