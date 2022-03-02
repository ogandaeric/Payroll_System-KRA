/*
Payroll System
by Eric Oganda
Feb 2022
MIT License
C89 Compiler
*/


#include <stdio.h>

int main()
{

    char name[30];
    char KRA_PIN[10];
    char Employment_Number[10];
    float basic, hra, overtime, da, pf, gross;

    printf("Enter name: ");
    gets(name);
    printf("KRA_PIN: ");
    gets(KRA_PIN);
    printf("Employment_Number: ");
    gets(Employment_Number);

    printf("Enter Normal Pay: ");
    scanf("%f",&basic);
    printf("Enter Hourly Rate: ");
    scanf("%f",&hra);
    printf("Enter Overtime Hours: ");
    scanf("%f",&overtime);
    printf("Enter Tax Paid: ");
    scanf("%f",&da);

    /*pf automatic calculated 12%*/
    pf= (basic*30)/100;

    gross=basic+da+hra+pf+overtime;

    printf("\nName: %s \nNormal Pay: %f \nHourly Rate: %f \nOvertime Hours: %f \nTax Paid: %f \n***GROSS SALARY: %f ***",name,basic,hra,da,pf,gross);

    return 0;
}
