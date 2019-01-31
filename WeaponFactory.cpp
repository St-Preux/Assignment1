/* 
 * File:   WeaponFactory.cpp
 * Author: Javier <jrescobara@gmail.com>
 *  
 */ 

#include <string>
#include <stddef.h> 
#include "WeaponFactory.h"
#include "CommonSword.h" 
#include "CommonSpear.h"
#include "CrazyRandomSword.h"
#include "EbonySword.h"
#include "SimpleHammer.h"

WeaponFactory* WeaponFactory::instance = NULL;

WeaponFactory * WeaponFactory::getInstance() {
    if (!instance) {
        instance = new WeaponFactory();
    }
    return instance;
}

Weapon * WeaponFactory::getWeapon(std::string name) {
    if (name.compare("sword") == 0) {
        return new CommonSword();
    }
    
    if (name.compare("spear") == 0) {
        return new CommonSpear();
    }

    if (name.compare("random sword") == 0) {
        return new CrazyRandomSword();
    }
    
    if (name.compare("ebony sword") == 0) {
        return new EbonySword();
    }
    
    if (name.compare("hammer") == 0) {
        return new SimpleHammer();
    }

    throw "Invalid weapon";
}