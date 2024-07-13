//?basic sturture how create a sturcture
#include<stdio.h>
int main(){
    struct pokemon
    {
        int speed;
        int hp;
        int attack;
        char tier;//? a,b,c,d
        char name[50];
    } pikachu,charizard,a;//?----------------------yaha pe decleration 
    //?karne se niche decleration nahi karna padega ;

    //struct pokemon pikachu;//?-------------------------ye decleration nahi karna padega 
    pikachu.attack = 60;
    pikachu.hp = 50;
    pikachu.speed = 100;
    pikachu.tier = 'a';

    //struct pokemon charizard;
    charizard.attack = 130;
    charizard.hp = 120;
    charizard.speed = 10;
    charizard.tier = 'b';

   // printf("%c ",charizard.tier);

    //struct pokemon a;
    a.attack = 110;
    a.hp = 80;
    a.speed = 100;
    a.tier = 's';
    printf("%d",a);
   
    return 0;
}