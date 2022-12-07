#include <stdio.h>
#include <stdlib.h>
int f(int);
int main()
{
    int num;
    printf("Please enter any number : ");
    scanf("%d",&num);
    printf("The fibonacci of %d = %d ",num,f(num));
}
int f(int num){
    if(num==1){
        return 1;
    }else if(num==0){
        return 0;
    }else{
        return f(num-1)+f(num-2);
    }
}
