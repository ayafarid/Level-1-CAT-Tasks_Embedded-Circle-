#include <stdio.h>
#include <stdlib.h>
int main()
{
    int rowsn=5,colmsn=5;
    int marray[rowsn][colmsn];
    for(int i=0 ; i<rowsn ; i++){
        printf("Enter row %d : ",i+1);
        for(int j=0 ; j<colmsn ; j++){
            scanf("%d",&marray[i][j]);
        }
    }
    int sum=0;
    printf("Rows Totals : ");
    for(int i=0 ; i<rowsn ; i++){
        for(int j=0 ; j<colmsn ; j++){
            sum+=marray[i][j];
        }
        printf(" %d",sum);
        sum=0;
    }
    printf("\nColumns Totals : ");
    for(int i=0 ; i<colmsn ; i++){
        for(int j=0 ; j<rowsn ; j++){
            sum+=marray[j][i];
        }
        printf(" %d",sum);
        sum=0;
    }
    return 0;
}
