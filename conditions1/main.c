#include <stdio.h>
#include <stdlib.h>

int main()
{
    int willsmith;
    int agirl;

    printf("Enter the chance for the man to live:\n");
    scanf("%d",&willsmith);

    printf("Enter the chance for the girl to live:\n");
    scanf("%d",&agirl);

    if(willsmith>agirl)
        {
        printf("save will smith\n");
    }
    else if(willsmith<agirl) {
        printf("save a girl\n");
    }
    else {
        printf("save the both\n");
    }



     int Grade;
     printf("Enter your Grade:\n");
     scanf("%d",&Grade);
     if(Grade==100){
        printf("congrats.you have full mark\n");
     }

      else if(Grade>=50){
        printf("congrats.you have passed\n");
     }
     else{

        printf("sorry.you have failed\n");
     }

    return 0;
}
