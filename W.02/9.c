#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Please enter any number : ");
    scanf("%d",&num);
    int temp=num,fact=1;
    while(temp!=0){
        fact*=temp;
        temp--;
    }
    printf("factorial of %d = %d",num,fact);
    return 0;
}
