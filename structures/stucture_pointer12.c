//? sturcture pointers
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pokemon
{
   int hp;
   int speed;
   int attack;
   char tier;
   char name[20];
}pokemon;
void change(pokemon* s){//? help of function values changes ;
    //?(*s).hp= 70;
    s->hp = 70;//! new method to change the values ,
    (*s).attack =80;
    (*s).speed =110;
    (*s).tier= 's';
    //?strcpy((*s).name,"raichu");
    strcpy(s->name,"raichu");
    return;
}
int main(){
   pokemon pikachu = {60,70,100,'a',"pikachu"};//? this and down side variables are same;
   //pokemon pikachu;
//    pikachu.hp = 60;
//    pikachu.attack = 70;
//    pikachu.speed = 100;
//    pikachu.tier = 'a';
//    strcpy(pikachu.name,"pikachu");
    // int* x  => address of integer values;
    pokemon* x =&pikachu;
      
   //! structure me pointer ke help value to upadate bhi kaar shaktea hai
   //? structure me function se value update nahi kar shakte 
   //?hai but pointer ke help ke value to change lar shakte hai

   printf("%d\n",pikachu.hp);
   printf("%d\n",pikachu.attack);
   printf("%d\n",pikachu.speed);
   printf("%c\n",pikachu.tier);
   printf("%s\n",pikachu.name);
   
   change(&pikachu);

    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);
    return 0;
}