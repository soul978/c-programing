#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("enter the numbers :");
    scanf("%d\n%d\n%d\n%d", &a, &b, &c, &d);
    if (a < b)
    {
        if (a < c)
        {
            if (a < d)
                printf(" is smallest :%d\n", a);
            else
                printf("is smallest :%d\n", d);
        }
        else
            printf("is smallest :%d\n", c);
    }
    else
    {
        if (b < c)
        {
            if (b < d)
                printf("is smallest :%d\n", b);
            else
                printf("is smallest :%d\n", d);
        }
        else
            printf(" is samllest %d\n", c);
    }

    return 0;
}