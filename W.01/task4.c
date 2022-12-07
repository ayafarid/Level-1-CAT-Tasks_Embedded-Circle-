#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=7,y=4;
    // x : 0000 0111
    // y : 0000 0100
    printf("x|y : %d\n",x|y); /// 7
    // x|y :: 0000 0111
    printf("x&y : %d\n",x&y); /// 4
    // x&y :: 0000 0100
    printf("x<<1 : %d\n",x<<1); /// 14 => 7*2
    // x<<1 :: 0000 1110
    printf("x>>2 : %d\n",x>>2); /// 1 => 7/(2^2)
    // x>>2 :: 0000 0001
    return 0;
}
