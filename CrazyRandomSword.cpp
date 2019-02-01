#include "CrazyRandomSword.h"
#include<ctime>

double CrazyRandomSword::hit(double armor) {
    double damage = hitPoints - rand()%(int)(armor/3)+2;
    
    if(damage < 0){
        return 0;
    }
    return damage;
}