#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sad;
    int love;

    printf(" the number of sad\n");
    scanf("%d",sad);

    printf(" the number of love\n");
    scanf("%d",love);

    if(sad>love){
        printf("sad post\n");
    }
    else if(sad==love){
        printf("feelings post");
    }
    else{
        printf("loving post");

    }

    return 0;
}
