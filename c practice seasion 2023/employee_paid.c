#include<stdio.h>
int main(){
    float basicsalary,da,hrs,grossalary;
    printf("enter the basic salary :");
    scanf("%f",&basicsalary);

    if (basicsalary<1500)
    {
        hrs = basicsalary*10/100;
        da =basicsalary*90/100;
    }
    else
    {
        hrs = 500;
        da =basicsalary*98/100;
    }
    grossalary = basicsalary+hrs+da;
    printf("gross salary = rs %f\n",grossalary);
    return 0;
}