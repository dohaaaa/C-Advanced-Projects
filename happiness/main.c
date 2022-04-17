#include <stdio.h>
#include <stdlib.h>

int main()
{

  int prefer;
  printf("on a scale of 1 to 10,how happy are you?\n");
  scanf("%d",&prefer);

  if(prefer>=8){
    printf("PRIMA");
  }
  else if(prefer>=5){
    printf("SO GUT ");
  }
  else if(prefer>=3){
    printf("GUT");
  }
  else{
    printf("SCHLECHT");
  }



    return 0;
}
