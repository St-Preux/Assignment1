#include <string>
#include "Weapon.h"
#include <ctime>


#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

 
class CrazyRandomSword : public Weapon {
public:
    
    CrazyRandomSword() : Weapon("Crazy random sword", rand()%100+7) { 
        srand((unsigned int)time(NULL));
        hitPoints = rand()%100+7;
     }

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);

};

#endif /* CRAZYRANDOMSWOR_H */
