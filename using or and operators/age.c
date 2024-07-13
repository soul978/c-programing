// the ages of ram,shyam and ajay give input and write a program to show which one is youngest
#include<stdio.h>
int main(){
    int ram,shyam,ajay;
    printf("enter the ram age :");scanf("%d",&ram);
    printf("enter the shyam age :");scanf("%d",&shyam);
    printf("enter the ajay age :");scanf("%d",&ajay);
if (ram<shyam && ram<ajay)
    {
        printf(" ram is youngest",ram);
    }
 if (shyam<ram && shyam<ajay)
    {
        printf(" shyam is youngest",shyam);
    }
if (ajay<shyam && ajay<ram)
    {
        printf(" ajay is youngest",ajay);
    }
    return 0;
}