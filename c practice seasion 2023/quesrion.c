#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, c, d;
    printf("enter the first numbers :");
    scanf("%d", &a);
    printf("enter the second numbers :");
    scanf("%d", &b);
    printf("enter the third numbers :");
    scanf("%d", &c);
    printf("enter the fourth numbers :");
    scanf("%d", &d);
    if (b < a)
    {
        if (d < c)
        {
            if (b < d)
            {
                printf("%d is smallest numbers ", b);
            }
            else
            {
                printf("%d is smallest numbers ", d);
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
                printf("%d is gsmallest numbers ", c);
            }
        }
    }
    else

    {
        printf("%d is smallest numbers ", a);
    }

    return 0;
}