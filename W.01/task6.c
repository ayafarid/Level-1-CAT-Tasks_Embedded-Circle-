#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 , num2 ;
    printf("Enter any two numbers : ");
    scanf("%d %d",&num1,&num2);
    printf("Arithmetical Operators : \n");
    printf("%d + %d = %d\n",num1,num2,num1+num2);
    printf("%d - %d = %d\n",num1,num2,num1-num2);
    printf("%d * %d = %d\n",num1,num2,num1*num2);
    printf("%d / %d = %d\n",num1,num2,num1/num2);
    printf("%d %% %d = %d\n",num1,num2,num1%num2);
    printf("Logical operators : \n");
    printf("%d && %d = %d\n",num1,num2,num1&&num2);
    printf("%d || %d = %d\n",num1,num2,num1||num2);
    printf("%d ! = %d\n",num1,~num1);
    printf("Bitwise Operators : \n");
    printf("%d | %d = %d\n",num1,num2,num1|num2);
    printf("%d & %d = %d\n",num1,num2,num1&num2);
    printf("%d ^ %d = %d\n",num1,num2,num1^num2);
    printf("%d | %d = %d\n",num1,num2,num1|num2);
    printf("%d >> %d = %d\n",num1,num2,num1>>num2);
    printf("%d << %d = %d\n",num1,num2,num1<<num2);
    printf("~%d = %d",num1,~num1);
    return 0;
}
