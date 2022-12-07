#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Please enter any number : ");
    scanf("%d",&num);
    if(num%2==0){
        printf("%d is Even Number",num);
    }else{
        printf("%d is Odd Number",num);
    }
    return 0;
}
