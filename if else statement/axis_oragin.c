// give a point(x,y) write a program to find out of it lies on the  x axis ,y-axis or at the orgin viz(0,0)
#include <stdio.h>
int main()
{
    int x, y;
    printf("enter the cordinate :");
    scanf("%d %d", &x, &y);
    printf("enter the cordinate :");
    if (x == 0 && y == 0)
    {
        printf("the pointr is origin");
    }
    else if (x == 0)
    {
        printf("dies on y-axis");
    }
    else if (y == 0)
    {
        printf("dies on x-axis");
    }
    else
    {
        printf("the pointer is not lie on x or y-axis");
    }
    return 0;
}