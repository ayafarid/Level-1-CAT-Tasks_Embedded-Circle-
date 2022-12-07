#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rate;
    printf("Enter your rate : ");
    scanf("%d",&rate);
    if(rate>=85){
        printf("Exellent");
    }else if(rate>=75){
        printf("Very good");
    }else if(rate>=65){
        printf("good");
    }else if(rate>=50){
        printf("Acceptable");
    }else{
        printf("Fallen");
    }
    return 0;
}
