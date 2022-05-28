#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    1. GET THE PLAINTEXT
    2.GET THE KEY
    3.ENCIPHER
    4.PRINT THE CHIPHER TEXT


    char plaintext[50];
    int key;
    printf("Enter the plaintext:\n");
    gets(plaintext);
    printf("Enter the key:\n");
    scanf("%d",&key);

    for(int i=0;i<strlen(plaintext);i++){
        printf("%c",plaintext[i]+key);
    }*/


     char massage[50];
    int key;
    printf("Enter the massage:\n");
    gets(massage);
    printf("Enter the key:\n");
    scanf("%d",&key);

    for(int i=0;i<strlen(massage);i++){
        printf("%c",massage[i]=massage[i]+key);
    }

    printf("\n%s\n",massage);


    for(int i=0;i<strlen(massage);i++){
        printf("%c",massage[i]=massage[i]-key);
    }







}
