#include <stdio.h>
#include <conio.h>
void shivam(int a, int b, int c)
{
    float d = (a * b * c) / 100;
    printf("result %f", d);
}
int main()
{
    int a, b, c;
    printf("enter the printciple numbers :");
    scanf("%d", &a);
    printf("enter the rate numbers :");
    scanf("%d", &b);
    printf("enter the time numbers :");
    scanf("%d", &c);
    shivam(a, b, c);
    return 0;
}