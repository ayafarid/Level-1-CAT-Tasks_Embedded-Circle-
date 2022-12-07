#include <stdio.h>
#include <stdlib.h>
int scalerMulti(int*,int*,int,int);
int main()
{
    int arr1[5]={1,2,3,4,5},arr2[5]={6,7,8,9,10};
    int sum=scalerMulti(arr1,arr2,5,5);
    printf("scalar multiplication %d",sum);
    return 0;
}
int scalerMulti(int* arr1,int* arr2,int size1,int size2){
    int sum=0;
    for(int i=0;i<size1;i++){
        sum=sum+*(arr1+i) * *(arr2+i);
    }
    return sum;
}
