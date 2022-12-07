#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id,true_id=1,true_password=111,trials=3,pass;
    printf("Please enter your id : ");
    scanf("%d",&id);
    if(id==true_id){
        printf("please enter login code : ");
        while(trials--){
            scanf("%d",&pass);
            if(pass==true_password){
                printf("Welcome!\n");
                return 0;
            }else{
                printf("You are not registered\n");
            }
        }
    }
    printf("No more tries");
    return 0;
}
