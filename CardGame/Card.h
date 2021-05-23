#pragma once
#ifndef CARD_H
#define CARD_H
class Card
{
public:
	//Card(char deger);
	char getDeger();
	void setDeger(char deger);
	bool isTahmin();
	void setTahmin(bool tahmin);
private:
	char deger;
	bool tahmin = false;
};

#endif // !CARD_H
