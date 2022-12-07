#include <stdio.h>
#include <stdlib.h>
int sum(int*,int*);
int main()
{
    int x , y;
    printf("Enter any 2 values : ");
    scanf("%d %d",&x,&y);
    printf("sum of %d + %d = %d",x,y,sum(&x,&y));
    return 0;
}
int sum(int* num1,int* num2){
    return *num1+*num2;
}
