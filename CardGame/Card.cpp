#include<iostream>
#include "Card.h"

//Card::Card(char deger) {
//	this->deger = deger;
//}

char Card::getDeger() {
	return this->deger;
}

void Card::setDeger(char deger) {
	this->deger = deger;
}

bool Card::isTahmin() {
	return this->tahmin;
}

void Card::setTahmin(bool tahmin) {
	this->tahmin = tahmin;
}

