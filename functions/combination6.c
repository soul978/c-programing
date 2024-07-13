//cpmbination question n!= means n factorial
//facorial formula 5!=5*4*3*2*1
//find out factorial n!/r!*(n-r)!
//(n-r)!= (n-r)*(n-r-1)------------------------------formula
// without funtion

#include<stdio.h>
int main(){
    int n;
    printf("enter the n number :");
    scanf("%d",&n);
    int r;
    printf("enter the r number :");
    scanf("%d",&r);
    int nfact=1;
    int rfact=1;
    int nrfact=1;
    for (int i = 2; i <=n; i++)
    {
       nfact=nfact*i;
    }
    for (int i = 2; i <=r; i++)
    {                
       rfact=rfact*i;
    }
    for (int i = 2; i <=n-r; i++)
    {
       nrfact=nrfact*i;
    }

    int ncr =nfact/(rfact*nrfact);//------------------------------formula of  factorial 
    printf("%d",ncr);
       
      return 0;
}
  