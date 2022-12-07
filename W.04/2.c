#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter number of elements of the array : ");
    scanf("%d",&n);
    int array1[n];
    printf("Enter array elements : ");
    for(int i=0 ; i<n ; i++){
        scanf("%d",&array1[i]);
    }
    int max1=array1[0],max2=array1[0];
    for(int i=1 ; i<n ; i++){
        if(max1<array1[i]){
            max2=max1;
            max1=array1[i];
        }else if(max2<array1[i]){
            max2=array1[i];
        }
    }
    printf("Second largest element in the array : %d",max2);
    return 0;
}
