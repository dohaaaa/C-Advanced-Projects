#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=5;

    int *p=malloc(10*sizeof(int));

    if(p==NULL){

        printf("there is no memory allocated");
    }
    else{
        printf("there is  memory and we allocated for you");

       free(p);
    }
    char c=12000;
    printf("%d\n",c);

    char *z=malloc(sizeof(char)*5);

    z=12000;
    printf("%d\n",z);



}
