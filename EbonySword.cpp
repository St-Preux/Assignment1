#include "EbonySword.h"

double EbonySword::hit(double armor) {
    double damage = hitPoints - (armor * 0.5);
    if (damage < 0) {
        return 0;
    }
    return damage;
}
