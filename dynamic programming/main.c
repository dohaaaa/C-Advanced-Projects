#include <stdio.h>
#include <stdlib.h>

int main()
{
     char email[30];
     printf("enter your email:\n");
     scanf("%s",email);
     printf("your email is :%s",email);

   for(int i=0;i<10;i++){
    if(email[i]=='@'){
        printf("\nvailed email");
        return 0;
    }

   }
    printf("\nin vailed email");

}
