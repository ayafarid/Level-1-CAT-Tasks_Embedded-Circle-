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
    for(int i=0 ; i<n ; i++){
        for(int j=i ; j<n ; j++){
            if(array1[i]>array1[j]){
                int temp=array1[i];
                array1[i]=array1[j];
                array1[j]=temp;
            }
        }
    }
    int chek;
    printf("Ascending order 1 or 0 for descending ? ");
    scanf("%d",&chek);
    if(chek==1){
        for(int i=0 ; i<n ; i++){
            printf("%d ",array1[i]);
        }
        printf("\n");
    }else{
        for(int i=n-1 ; i>=0 ; i--){
            printf("%d ",array1[i]);
        }
        printf("\n");
    }

    return 0;
}
