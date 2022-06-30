#include <stdio.h>
#include <stdlib.h>

int main()
{
    int month;
    printf("Enter your birth month:\n");
    scanf("%d",&month);

    switch(month){
    case 1 :printf(" JAN, new partner\n");
     break;
    case 2 :printf(" FEB,job promotion\n");
     break;
    case 3 :printf(" MAR,bank account increase\n");
     break;
    case 4 :printf(" APR,weight loss\n");
     break;
    case 5 :printf(" MAY,new career\n");
     break;
    case 6 :printf(" JUN,a puppy\n");
     break;
    case 7 :printf(" JUL,engagement\n");
     break;
    case 8 :printf(" AUG,lottery win\n");
     break;
    case 9 :printf("SEP,new house\n");
     break;
    case 10 :printf(" OCT,new car\n");
     break;
    case 11 :printf(" NOV,a intervention\n");
     break;
    case 12 :printf("DEC,new baby\n");
     break;
    default:printf("invalid input");
     break;


    }


}
