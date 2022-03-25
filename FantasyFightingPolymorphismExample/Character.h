#ifndef CHARACTER_H
#define CHARACTER_H

#include "Asset.h"
#include "Weapon.h"
#include "Potion.h"

class Character {
private:
	Asset* myAssets[5];
	int numAssets;
public:
	Character():numAssets(0) {}
	void equip() {
		//add some assets
		myAssets[numAssets++] = new Weapon();
		myAssets[numAssets++] = new Potion();
		myAssets[numAssets++] = new Weapon();
	}
	void attack() {
		//attack with all the weapons you have
		for (auto w : myAssets) {
			w->deploy();
		}
	}

};

#endif
