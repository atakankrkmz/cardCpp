#include<iostream>
using std::cout;
using std::endl;
using std::cin;
#include"Card.h"

/* FONKSİYONLAR */
void gameArea();
bool isGameOver();
void guess();
bool chechGuess(char a, char b);

Card cards[4][4];

int main() {

	cards[0][0].setDeger('A');
	cards[0][1].setDeger('B');
	cards[0][2].setDeger('C');
	cards[0][3].setDeger('D');
	cards[1][0].setDeger('E');
	cards[1][1].setDeger('F');
	cards[1][2].setDeger('G');
	cards[1][3].setDeger('A');
	cards[2][0].setDeger('B');
	cards[2][1].setDeger('C');
	cards[2][2].setDeger('D');
	cards[2][3].setDeger('E');
	cards[3][0].setDeger('F');
	cards[3][1].setDeger('G');
	cards[3][2].setDeger('Z');
	cards[3][3].setDeger('Z');

	gameArea();
	
	while (!isGameOver()) 
	{
		guess();
	}
	 
	cout << "Tebrikler butun tahminler tamamlandi..." << endl;
	exit(3);

	return 0;
}

bool isGameOver() {
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (!cards[i][j].isTahmin())
			{
				return false;
			}
		}
	}
}

void gameArea() {
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (cards[i][j].isTahmin())
			{
				cout << " |" << cards[i][j].getDeger() << "| ";
			}
			else
			{
				cout << " | | ";
			}
		}
		cout << ""<< endl;
	}
}

void guess() {

	int satir1, sutun1;
	int satir2, sutun2;
	cout << "Tahmin edilecek satir ve sutunu iki deger birlikte giriniz ornek:'1 2' "<< endl<< endl;

	cout << "1.Tahmininizi giriniz : ";
	cin >> satir1 >> sutun1;

	cards[satir1][sutun1].setTahmin(true);
	gameArea();

	cout << "2.Tahmininizi giriniz : ";
	cin >> satir2 >> sutun2;

	cards[satir2][sutun2].setTahmin(true);
	gameArea();

	if (!chechGuess(cards[satir1][sutun1].getDeger(), cards[satir2][sutun2].getDeger()))
	{
		cards[satir1][sutun1].setTahmin(false);
		cards[satir2][sutun2].setTahmin(false);
	}

}

bool chechGuess(char a, char b) {
	if (a == b)
	{
		cout << "Tahmininiz dogru.." << endl;
		return true;
	}
	else 
	{
		cout << "Tahmininiz yanlis." << endl;
		return false;
	}
}
