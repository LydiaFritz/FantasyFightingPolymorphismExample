#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include "Asset.h"

class Weapon : public Asset {
public:
	Weapon() {}
	void deploy();
};

void Weapon::deploy() {
	std::cout << "Weapon attack!!" << std::endl;
}


#endif
