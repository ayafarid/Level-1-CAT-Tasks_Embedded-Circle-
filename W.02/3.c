#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ID ;
    scanf("%d",&ID);
    switch(ID)
    {
    case 1234:
        printf("Your name is Harry");
        break;
    case 5678:
        printf("Your name is Ron");
        break;
    case 1145:
        printf("Your name is Hermione");
        break;
    default:
        printf("Wrong ID");
        return 0;
        break;
    }
    return 0;
}
