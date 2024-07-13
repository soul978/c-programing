#include<stdio.h>
int main(){
    char sex,ms;
    int age;
    printf("enter the age ,sex,amrital status");
    scanf("%d %c %c",&age,&sex,&ms);

    if (ms=='M')
    {
        printf("driver should be insured ");
    }
    else
    {
        if (sex=='M')
        {
            if (age>30)
            {
                printf("driver should be insured\n");
            }
            else{
                printf("driver should not be insured\n");
            }
        }
        
    }
    
    return 0;
}