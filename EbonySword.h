#include <string>
#include "Weapon.h"

#ifndef EBONYSWORD_H
#define EBONYSWORD_H

class EbonySword : public Weapon {
public:

    EbonySword() : Weapon("Ebony sword", 125.0) {
        
     }

    virtual ~EbonySword() {};

    virtual double hit(double armor);

};

#endif /* EBONYSWORD_H */