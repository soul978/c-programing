 // help of function  find out factorial
 
 
 #include<stdio.h>
   int factorial(int x){
   int fact =1;
   for (int i = 2; i <=x; i++)//-----------------loop
   {
      fact = fact*i;//multiplied 
   }
      return fact;
   }
    int main(){
    int n;
    printf("enter the n number :");
    scanf("%d",&n);
    int r;
    printf("enter the r number :");
    scanf("%d",&r);

   //  int nfact=factorial(n);//n
   //  int rfact=factorial(r);//r
   //  int nrfact=factorial(n-r);//n-r !
    //int ncr =nfact/(rfact*nrfact);//------------------------------formula of  factorial
                        

    int ncr = factorial(n)/(factorial(r)*factorial(n-r));// in one line code is completed
    printf("%d",ncr);
    
    return 0;
    }
 //  example  formula  n!/(r!*n!-r!)
 //  n!= 5    // 5*4*3*2*1       // 5*4    20/2  =10ans
 //r!=2       //  2*1            // 2*1
 //n!-r!=3    //  3*2*1          