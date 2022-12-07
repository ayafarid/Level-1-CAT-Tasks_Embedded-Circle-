#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void printStdInfo(int);
void manpStdInfo(int);
typedef struct students{
    int sdtID;
    float programmingGrade;
    float dataStructureGrade;
    float discreteMathimaticsGrade;
    float algorithmsGrade;
}Students;
Students studentsInfo[10];
int main()
{
    for(int i=0 ; i<10 ; i++){
        studentsInfo[i].sdtID=i+1;
        studentsInfo[i].programmingGrade=(rand()%50)+50;
        studentsInfo[i].dataStructureGrade=(rand()%50)+50;
        studentsInfo[i].discreteMathimaticsGrade=(rand()%50)+50;
        studentsInfo[i].algorithmsGrade=(rand()%50)+50;
    }
    int id;
    int flag=1;
    while(flag){
        printf("Enter 0 for student and 1 for admin: ");
        int chek;
        scanf("%d",&chek);
        printf("Enter the student ID (1->10) : ");
        scanf("%d",&id);
        if(id>=1&&id<=10){
            printStdInfo(id);
            if(chek==1){
                int ch;
                printf("Do you want to manipulate the student grades 1 (Yes) or 0(No) ?");
                scanf("%d",&ch);
                if(ch==1){
                    manpStdInfo(id);
                }else{
                    printf("------------------------------------------------\n");
                    continue;
                }
            }
        }else{
            printf("Wrong ID!\nPlease Try again.\n");
        }
        printf("------------------------------------------------\n");
    }
}
void printStdInfo(int id){
    printf("Student ID : %d",studentsInfo[id-1].sdtID);
    printf("Student Grade on programming : %.6f\n",studentsInfo[id-1].programmingGrade);
    printf("Student Grade on Data Structure : %.6f\n",studentsInfo[id-1].dataStructureGrade);
    printf("Student Grade on Discrete Mathimatics : %.6f\n",studentsInfo[id-1].discreteMathimaticsGrade);
    printf("Student Grade on Alogrithms : %.6f\n",studentsInfo[id-1].algorithmsGrade);
    printf("------------------------------------------------\n");
}
void manpStdInfo(int id){
    printf("Student ID : %d\n",studentsInfo[id-1].sdtID);
    printf("Student Grade on programming : ");
    scanf("%f",&studentsInfo[id-1].programmingGrade);
    printf("Student Grade on Data Structure : ");
    scanf("%f",&studentsInfo[id-1].dataStructureGrade);
    printf("Student Grade on Discrete Mathimatics : ");
    scanf("%f",&studentsInfo[id-1].discreteMathimaticsGrade);
    printf("Student Grade on Alogrithms : ");
    scanf("%f",&studentsInfo[id-1].algorithmsGrade);
    printf("------------------------------------------------\n");
}
