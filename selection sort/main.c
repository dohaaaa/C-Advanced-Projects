#include <stdio.h>
#include <stdlib.h>

int main()
{
    int data[]={20,12,10,15,2};
    int size=sizeof(data)/sizeof(data[0]);


    for(int step=0;step<size-1;size++){
            int min_idx=step;

        for(int i=step+1;i<size;i++){
            if(data[i]<data[min_idx]){
                min_idx=i;
            }
            int temp=data[min_idx];
            data[min_idx]=data[step];
            data[step]=temp;
        }

    }
    for(int k=0;k<size;k++){
        printf(data[k]);
    }
}
