#ifndef POTION_H
#define POTION_H

#include <iostream>
#include "Asset.h"

class Potion : public Asset{
public:
	Potion() {}
	void deploy();

};

void Potion::deploy() {
	std::cout << "Magic potion attack!!"<<std::endl;
}

#endif
