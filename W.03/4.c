#include <stdio.h>
#include <stdlib.h>
int login(int,int,int);
int main()
{
    int correctId=12345,correctPass=12345,num=3;
    if(login(correctId,correctPass,num)){
        printf("Welcome!");
    }else{
        printf("Try Again Later!!!");
    }
}
int login(int ID,int pass,int numoftrials){
    int id,password;
    printf("please enter your id and password :)\n");
    printf("ID : ");
    scanf("%d",&id);
    printf("Password : ");
    scanf("%d",&password);
    if(pass==password&&id==ID){
        return 1;
    }else if(numoftrials>0){
        printf("-----------------------------------\n");
        printf("Try Again!\n");
        login(ID,pass,--numoftrials);
    }else{
        return 0;
    }
}
