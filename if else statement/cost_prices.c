//  input cost price and selling price of an item write a program to detrmine the seller has profit or not and
// also find how many forfit or lose .
#include <stdio.h>
int main()
{
    int cp;
    printf("enter the cp price :");
    scanf("%d", &cp);
    int sp;
    printf("enter the sp price :");
    scanf("%d", &sp);
    if (cp > sp)
    {
        printf("loss");
    }
    if (cp < sp)
    {
        printf("profit");
    }
    if (cp == sp)
    {
        printf(" not profit not lose");
    }
    return 0;
}
// sp>cp  (profit)
// sp<cp  (loss)