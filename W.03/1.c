#include <stdio.h>
#include <stdlib.h>
int maxValue(int,int);
int main()
{
    int x,y;
    printf("Enter any two numbers : ");
    scanf("%d %d",&x,&y);
    printf("The max number between %d and %d = %d",x,y,maxValue(x,y));
}
int maxValue(int x,int y){
    return (x>y)?x:y;
}

