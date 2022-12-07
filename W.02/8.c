#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Please enter any num : ");
    scanf("%d",&num);
    for(int i=1 ; i<=12 ; i++){
        printf("%2d * %d = %d\n",i,num,i*num);
    }
    return 0;
}
