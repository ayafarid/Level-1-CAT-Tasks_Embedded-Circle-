#include <stdio.h>
#include <stdlib.h>

int main()
{
    int workingHours;
    printf("Please enter your working hours : ");
    scanf("%d",&workingHours);
    printf("Your salary : ");
    float salary= (workingHours<40) ? (workingHours*50*.9):(workingHours*50);
    printf("%.5f",salary);

    return 0;
}
