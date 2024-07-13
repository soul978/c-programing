//formal parameter and actual paramter

//------------------------------------------------------------
//only question solve 
//--------------------
void swap(int a, int b){
    int temp =a;
    a=b;
    b=temp;
    return;
}
int main(){
  int  a=2;
  int  b=9;
    swap(a,b);//----------------a and b is formal parameters,
    //----------------------------a and b values are its actual paremetres ;
    return 0;
}