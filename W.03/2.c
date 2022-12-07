#include <stdio.h>
#include <stdlib.h>
int x , y;
int swap();
int main()
{
    x=12;
    y=15;
    printf("The value of x and y after  swapping.\nX = %d\nY = %d\n",x,y);
    swap(x,y);
    printf("The value of x and y before swapping.\nX = %d\nY = %d",x,y);
}
int swap(){
    int temp=x;
    x=y;
    y=temp;
}
