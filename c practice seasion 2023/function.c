#include <stdio.h>
#include <conio.h>
int stm(int a, int b)
{
    printf("multiplicataion \n\n");
    printf("enter the 1st");
    scanf("%d", &a);
    printf("enter the second :");
    scanf("%d", &b);
    printf("\n");
    printf(" multiplication result : %d", a * b);
}
int soulmortal(int a, int b)
{
    printf("subtration \n\n");
    printf("enter subtration first  numbers :");
    scanf("%d", &a);
    printf("enter subtration seconnds numbers : ");
    scanf("%d", &b);

    int c = a - b;
    printf("\n");

    printf("subtration result : %d ", a - b);
}
int gojo(int a, int b)
{
    printf("division \n\n");
    printf("enter division first  numbers :");
    scanf("%d", &a);
    printf("enter division seconnds numbers : ");
    scanf("%d", &b);
    int c = a - b;
    printf("\n");

    printf("division result : %d", a / b);
}
int addition(int a, int b)
{
    printf("addtion\n\n ");
    printf("enter addition first numbers :");
    scanf("%d", &a);
    printf("enter addition second numbers :");
    scanf("%d", &b);
    printf("\n");

    printf("resultant addtion : %d", a + b);
}
int main()
{
    int choose;
    printf("choose the task \n1.adttion\n2.multiplication\n3.subtration\n4.division\n");
    scanf("%d", &choose);
    printf("\n");
    int a;
    int b;
    if (choose == 1)
    {
        addition(a, b);
    }
    else if (choose == 2)
    {
        stm(a, b);
    }
    else if (choose == 3)
    {
        soulmortal(a, b);
    }
    else if (choose == 4)
    {
        gojo(a, b);
    }
    else
    {
        printf("invalid number enter please enter 1,2,3,4 any numbers");
    }

    printf("\n\n\n\n");
    printf("the task is done bye bye :");
    return 0;
}