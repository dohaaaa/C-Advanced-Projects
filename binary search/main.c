#include <stdio.h>
#include <stdlib.h>

int main()
{
    int SearchedNumber=8;
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12};
     int n=sizeof(arr)/sizeof(arr[0]);
    int low,high,middle;
    low=0;
    high=n-1;
    while(low<=high){
        middle=(low+high)/2;
        if(arr[middle]==SearchedNumber)
        printf("the index is:",middle);
        return middle;

    }
    if(SearchedNumber>arr[middle]){

        printf("Now i am in the right side");
        low= middle+1;

    }
    else{
          printf("Now i am in the left side");
        high= middle-1;
    }

}
