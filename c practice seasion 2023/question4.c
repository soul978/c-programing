#include<stdio.h>
#include<conio.h>
int main(){

    char a;
    printf("enter the first characters  :");
    scanf("%c",&a);
    switch (a)
    {
    case  'm':
    case 'M':{
        printf("male ");
        break;
    }
    case 'F':
    case 'f':{
        printf("female");
        break;
    }
    case 'o':
    case 'O':{
        printf("others ");
        break;
    }
    default:{
        printf("not Conform");
        break;
    }
    }
}