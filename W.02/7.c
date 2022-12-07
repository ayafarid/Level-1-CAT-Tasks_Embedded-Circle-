#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=10,num,sum=0;
    printf("Please enter any 10 numbers : ");
    while(n--){
        scanf("%d",&num);
        sum+=num;
    }
    printf("The summation = %d\nThe average = %.2f\n",sum,sum/10.0);
    return 0;
}
