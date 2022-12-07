#include <stdio.h>
#include <stdlib.h>
int freq[3005]; /// Random large number :)
int repeatingElement(int[],int);
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
    printf("%d",repeatingElement(array1,n));
    return 0;
}
int repeatingElement(int array[],int n){
    int maxRN=0,Nor=0;
    for(int i=0 ; i<n ; i++){
        freq[array[i]]++;
    }
    for(int i=0 ; i<3005 ; i++){
        if(Nor<freq[i]){
            maxRN=i;
            Nor=freq[i];
        }
    }
    return maxRN;
}
