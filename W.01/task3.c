#include <stdio.h>
#include <stdlib.h>

int main()
{
    float amount;
    printf("Enter an amount : ");
    scanf("%f",&amount);
    printf("With tax added : $%.2f",(amount+0.05*amount));
    return 0;
}
