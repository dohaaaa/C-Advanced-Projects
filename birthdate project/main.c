#include <stdio.h>
#include <stdlib.h>

int main()
{
   int currentyear=2022;
   int birthdate=2005;
   int year=currentyear- birthdate;
   int month,week,day;

   printf(" your year is=%d\n",year);

   day=year*365;
   year=year%365;
    printf(" your day is=%d\n",day);

    week=year*48;
   year=year%48;
    printf(" your week is=%d\n",week);

     month=year*12;
   year=year%12;
    printf(" your month is=%d\n",month);



}
