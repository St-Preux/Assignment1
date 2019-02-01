#include "CrazyRandomSword.h"
#include<ctime>

double CrazyRandomSword::hit(double armor) {
    double damage = hitPoints - rand()%(int)(armor/3)+2;
    double hitPoints = rand()%100+7;
    if(damage < 0){
        return 0;
    }
    return damage;
}