#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct employees{
    float sallary;
    float bonus;
    float deductions;
}Employees;
float calcNetSallary(float,float,float);
int main()
{
    Employees employeesMohsen,employeesMaged,employeesMariem;
    printf("Enter the information about 3 employees first.\nMohsen-\n\nSallary:");
    scanf("%f",&employeesMohsen.sallary);
    printf("Bonus:");
    scanf("%f",&employeesMohsen.bonus);
    printf("Deductions: ");
    scanf("%f",&employeesMohsen.deductions);
    printf("------------------------\n");
    printf("Maged-\n\nSallary:");
    scanf("%f",&employeesMaged.sallary);
    printf("Bonus:");
    scanf("%f",&employeesMaged.bonus);
    printf("Deductions: ");
    scanf("%f",&employeesMaged.deductions);
    printf("------------------------\n");
    printf("Mariem-\n\nSallary:");
    scanf("%f",&employeesMariem.sallary);
    printf("Bonus:");
    scanf("%f",&employeesMariem.bonus);
    printf("Deductions: ");
    scanf("%f",&employeesMariem.deductions);
    printf("------------------------\n");
    float netMohsen=calcNetSallary(employeesMohsen.sallary,employeesMohsen.bonus,employeesMohsen.deductions);
    float netMaged=calcNetSallary(employeesMaged.sallary,employeesMaged.bonus,employeesMaged.deductions);
    float netMariem=calcNetSallary(employeesMariem.sallary,employeesMariem.bonus,employeesMariem.deductions);
    float total=netMaged+netMariem+netMohsen;
    printf("Net sallary of Mohsen : %f\n",netMohsen);
    printf("Net sallary of Maged : %f\n",netMaged);
    printf("Net sallary of Mariem : %f\n",netMariem);
    printf("------------------------\n");
    printf("Total : %f\n",total);
    printf("------------------------\n");

}
float calcNetSallary(float sallary,float bonus,float deductions){
    return sallary+bonus-deductions;
}
