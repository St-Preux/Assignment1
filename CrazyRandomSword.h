#include <string>
#include "Weapon.h"
#include<ctime>


#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

 
class CrazyRandomSword : public Weapon {
public:
    
    CrazyRandomSword() : Weapon("Crazy random sword", rand()%100+7) { //Calls Weapon(name, hitpoints) constructor with values Common Spear and 40.0
    }

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);

};

#endif /* CRAZYRANDOMSWOR_H */
