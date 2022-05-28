#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    /*
    #ctype.h
     1 true
     0 false

      1.isalpha
      2.isdigit
      3.islower
      4.isupper
      5.isspace
      6.toupper
      7.tolower
    */

       char c='A';
     printf("%d\n",isalpha(c));

       int birthdate=2005;
     printf("%d\n",isalpha(birthdate));

       char birthdate='2005';
     printf("%d\n",isdigit(birthdate));

       char birthdate='a';
     printf("%d\n",isdigit(birthdate));

     printf("%d\n",islower(c));
     printf("%d\n",islower(C));

     printf("%d\n",isupper(C));
     printf("%d\n",isupper(c));

     printf("%d\n",isspace(''));
     printf("%d\n",isspace('a'));

       char c='';
       if(isspace(c)==0){
        printf("Doha is first letter is :%c\n",c);

       }
       else{
        printf("Doha put space first!\n");
       }

     char c;
     printf("Enter your first letter Doha:\n");
     scanf("%c",&c);
     printf("%c\n",toupper(c));
     printf("%c\n",c+32);



      char c;
     printf("Enter your first letter Doha:\n");
     scanf("%c",&c);
     printf("%c\n",tolower(c));
     printf("%c\n",c-32);




}
