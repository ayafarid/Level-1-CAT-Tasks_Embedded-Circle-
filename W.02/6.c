#include <stdio.h>
#include <stdlib.h>

int main()
{
    int result;
    printf("Please enter the result of 3x4 : ");
    scanf("%d",&result);
    while(result!=12){
        printf("Try again\n");
        scanf("%d",&result);
    }
    printf("Thanks\n");
    return 0;
}
