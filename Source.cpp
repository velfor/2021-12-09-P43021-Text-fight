#include <iostream>
#include "knight.h"
#include "paladin.h"
#include <ctime>
#include <windows.h>
using namespace std;

int main() {
	srand(time(0));
	//tring fname, int fhp, int fdamage, int farmor, int fcritical
	Knight k1("Valera", 1000, 100, 200, 3);
	k1.printKnight();
	Paladin p1("Vasya", 1000, 100, 200, 3);
	p1.printPaladin();

	//игровой цикл
	while (true) {
		//удар рыцаря по паладину
		cout << "Khight hits paladin\n";
		p1.setHp(p1.getHp() - k1.getDamage());
		p1.printPaladin();
		//проверка на смерть
		if (p1.getHp() <= 0) {
			cout << "Paladin die, knight win!";
			break;
		}
		//удар паладина по рыцарю
		cout << "Paladin hits khight\n";
		k1.setHp(k1.getHp() - p1.getDamage());
		k1.printKnight();
		//проверка на смерть
		if (k1.getHp() <= 0) {
			cout << "Knight die, paladin win!";
			break;
		}
		Sleep(2000);
	}
	return 0;
}