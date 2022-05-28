#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*for(int i=1;i<=10;i++){


     for(int j=1;j<=10;j++){
    printf("Hello world!%d\n",j);

    }*/

   printf("how many level for your pyramid\n");
 int level;

 scanf("%d",&level);
 level=level+2;
 for (int i=2;i,level;i++){
    for(int j=1;j<i;j++)
        {
        printf("#");
    }
    printf("\n");
 }





}


