//print percentage of four subject out of 40
#include<stdio.h>
int main(){
    float m1;
    printf("enter english marks :");
    scanf("%fg",&m1);
    float m2;
     printf("enter physics marks :");
    scanf("%f",&m2);
    float m3;
     printf("enter maths marks :");
    scanf("%f",&m3);
    float m4;
     printf("enter chemistry marks :");
    scanf("%f",&m4);
     float a = (m1+m2+m3+m4)/160*100;
   // float b = (m1+m2+m3+m4)/4;
    printf("the percentage of : %f",a);

    return 0;
}
//its given percentage of 4 subject 