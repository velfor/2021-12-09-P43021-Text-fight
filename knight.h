#pragma once
#include <iostream>
#include <ctime>
using namespace std;

class Knight {
	//переменные класса (пол€ класса)
private:
	string name;
	int hp;
	int damage;
	int armor;
	int critical;
public:
	//функции, определ€ющие поведение
	//конструктор создает объект класса в пам€ти
	Knight(string fname, int fhp, int fdamage, int farmor,
		int fcritical) {
		name = fname;
		hp = fhp;
		damage = fdamage;
		armor = farmor;
		critical = fcritical;
	}
	//деструктор - очищает пм€ть от объекта класса
	~Knight() {
		cout << "Knight destroyed\n";
	}
	//геттеры и сетеры
	string getName() { return name; }
	int getHp() { return hp; }
	int getDamage() {
		int chance = rand() % 100 + 1;
		if (chance >= 1 && chance <= critical) return damage * 2;
		else return damage;
	}
	int getArmor() { return armor; }
	int getCritical() { return critical; }
	void setName(string fname) { name = fname; }
	void setHp(int fhp) { hp = fhp; }
	void setDamage(int fdamage) { damage = fdamage; }
	void setArmor(int farmor) { armor = farmor; }
	void setCritical(int fcritical) { critical = fcritical; }
	//остальные методы
	void printKnight() {
		cout << "Knight " << name << " has " << hp << " hp\n";
	}
};