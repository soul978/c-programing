//          1
//        1   1
//      1   2   1
//    1   3   3   1            //--------print the pascal traingle help of function
//   1  4   6   4   1
//                           2c2 = 2!/2!(2-2)!
//                           2!/2! = 1
//                           o! = 1;
#include<stdio.h>
int factorial(int x){
   int fact =1;
   for (int i = 2; i <=x; i++)//-----------------loop
   {
      fact = fact*i;//multiplied 
   }
      return fact;
}     
int combination (int n,int r){
    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;

}
int main(){
    int n;
    printf("enter the first number :");
    scanf("%d",&n); 
    for (int i = 0; i <=n; i++)
    {
        
        for (int  l = 0; l <=2*n-i; l++)
        {
            printf(" ");
            
        }
        
        for (int j = 0; j <=i; j++)
        {
            int icj = combination(i,j);
            printf(" %d",icj);
        }
        printf("\n");
        
    }
    
    return 0;
}