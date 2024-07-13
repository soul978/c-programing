// take a input and check the puduct is gone profit or lose
#include <stdio.h>
int main()
{
    int cp, sp;
    printf("enter cost price of the poduct :");
    scanf("%d", &cp);
    printf("enter selling price of the poduct :");
    scanf("%d", &sp);
    if (cp > sp)
    {
        printf("lose");
    }
    else if (sp > cp)
    {
        printf("profit");
    }
    else
    {
        printf("not profit not lose");
    }
    return 0;
}