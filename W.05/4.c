#include <stdio.h>
#include <stdlib.h>
void bubbleSortingAlgrithm(int*,int);
int main()
{
    int arr[7]={3,5,2,11,4,7,13};
    int n=7;
    bubbleSortingAlgrithm(arr,n);
    for(int i=0 ; i<n ; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
void bubbleSortingAlgrithm(int* arr,int size){
    int chek=0;
    while(chek==0){
        int count=0;
        for(int i=0 ; i<size-1 ; i++){
            if(*(arr+i)>*(arr+i+1)){
                int temp=*(arr+i);
                *(arr+i)=*(arr+i+1);
                *(arr+i+1)=temp;
            }else{
                count++;
            }
        }
        if(count==size-1){
            chek=1;
        }
    }
}
