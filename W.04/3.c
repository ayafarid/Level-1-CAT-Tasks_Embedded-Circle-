#include <stdio.h>
#include <stdlib.h>
int unique[900005]; /// Random large number :)
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
    for(int i=0 ; i<n ; i++){
        if(unique[array1[i]]==1){
            continue;
        }
        printf("%d ",array1[i]);
        unique[array1[i]]=1;
    }
    return 0;
}
