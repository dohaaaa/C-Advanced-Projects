#include <stdio.h>
#include <stdlib.h>

int main()
{
   int collegeNumber;
   int departement;
   printf("Enter the college you want to join\n");
   printf("if you want to join faculty of engineering press 1\n");
   printf("if you want to join faculty of medicine press 2\n");
   printf("if you want to join faculty of computer science press 3\n");
   scanf("%d",collegeNumber);
   if(collegeNumber==1){
    printf("congrats,you have join to faculty of engineering \n ");
    printf("Enter the departement you want to join\n");
    scanf("%d",departement);
    if(departement==1){
        printf("congrats,you have join to dep of electrnics \n ");
    }
    else if(departement==2){
         printf("congrats,you have join to dep of mecha \n ");
    }
    else if(departement==3){
         printf("congrats,you have join to dep of biomedical  \n ");
    }


   }
   else if(collegeNumber==2){
     printf("congrats,you have join to faculty of medicine \n ");
   }
   else if(collegeNumber==3){
     printf("congrats,you have join to faculty of computer science \n ");
     printf("Enter the departement you want to join\n");
    scanf("%d",departement);
    if(departement==1){
        printf("congrats,you have join to dep of CS \n ");
    }
    else if(departement==2){
         printf("congrats,you have join to dep of AI \n ");
    }
    else if(departement==3){
         printf("congrats,you have join to dep of IS \n ");

    }

   }
   else{
    printf("Invalid number");
   }

    return 0;
}
