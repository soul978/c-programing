#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("enter the first numbers :");
    scanf("%d", &a);
    int b;
    printf("enter the second numbers :");
    scanf("%d", &b);
    int c;
    printf("enter the third numbers :");
    scanf("%d", &c);
    int d;
    printf("enter the fourth numbers :");
    scanf("%d", &d);
    if (b < a)
    {
        if (d < c)
        {
            if (b < d)
            {
                printf("%d is the smallest numbers ", b);
            }
            else
            {
                printf("%d is the smallest numbers ", d);
            }
        }
        else
        {
            if (b < c)
            {
                printf("%d is smallest numbers ", b);
            }
            else
            {
                printf("%d is smallest numbers ", c);
            }
        }
    }
    else
    {
        if (b < d)
        {
            printf("%d is smallest numbers :", b);
        }
        else
        {
            printf("%d is samllest numbers :", d);
        }
    }

    return 0;
}