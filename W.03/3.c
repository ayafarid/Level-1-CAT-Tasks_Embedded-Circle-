#include <stdio.h>
#include <stdlib.h>
int numOfDigits(int);
int main()
{
    int num=1456789;
    printf("Number of digits of %d = %d",num,numOfDigits(num));
}
int numOfDigits(int num){
    if(num==0){
        return 0;
    }else{
        return 1+numOfDigits(num/10);
    }
}
