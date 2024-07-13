 //!-----------structure variables can be pass to a functon;
 //! function ke through value change nahi hoti hai structutre me 
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pokemon
{
   int hp;
   int speed;
   int attack;//? data type ko int kke bahar is like liye hai 
   //?--------------------------ki koi bhi function baniye to sab me iska use kar shakete hai;
   char tier;
    char name[15];
}pokemon;
void fun(pokemon p){
    printf("%d",p.hp);
    return;
}

void change(pokemon a){
    a.hp =70;
    a.attack= 90;
    a.speed = 60;  // values change nhi ho raha hai iska matlab
    //? sturcture me pass by value hoti hai but pass by refrence nahi hoti hai;

    return;
}
int main(){
    pokemon pikachu;
    pikachu.hp =60;
    pikachu.attack = 60;
    pikachu.speed = 89;
    change(pikachu);
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
  //  fun(pikachu);
}//? page no 158