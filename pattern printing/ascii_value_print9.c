//print scill value print
//ABCD  A=65  a=97                   //int d= a+64; important
//ABCD   B=66  b=98                   //int a=1;
//ABCD   C=67   c=99   //eneter the number 
//ABCD
#include<stdio.h>
/*int main(){
    int n;
    printf("enter the first number :");
    scanf("%d",&n);                                    //inter any number it can give scii values 
    char s=n;
    printf("%c",s);
    return 0;
}*/
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    { int a=1;
     for (int j = 1; j <=n; j++)                          //n=6 type
        {                                                  //it can help to produce alphabetic trangle 
            int d= a+64;
            char ch =(char)d;
          printf("%c",ch);
         a++;
        }
        printf("\n");
    }
    
    return 0;
}