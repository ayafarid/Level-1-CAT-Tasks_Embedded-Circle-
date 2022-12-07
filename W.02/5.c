#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3;
    printf("Please enter any three numbers : ");
    scanf("%d %d %d",&num1,&num2,&num3);
    int max=(num1>num2)?num1:num2;
    max=(max>num3)?max:num3;
    printf("Max num : %d",max);
    return 0;
}
