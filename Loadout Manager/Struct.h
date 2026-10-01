#pragma once
#include "Includes.h"

using namespace std;

enum mainMenu
{
	List = 1,
	Equip,
	Unequip,
	Info,
	Attach,
	Remove,
	Quit
};

enum weaponType
{
	AR,     // 0
	SMG,    // 1
	Sniper, // 2
	Pistol, // 3
};

struct Weapon
{
	string name;
	string type;
	int damage;
	int slots; // how much attachments you can put on one weapon

	int agility;
	int handling;
	int accuracy;
	int range;
	int fireRate;

	inline void display()
	{
		space();
		cout << "======Weapon Information======" << endl;
		space();

		cout << "Weapon Name: " << name << endl;
		cout << "Weapon Type: " << type << endl;
		cout << name << " Damage: " << damage << endl;
		cout << "Attactment Slots: " << slots << endl;
		space();
	}

	inline void displayStats()
	{
		space();
		cout << "======Weapon Stats ======" << endl;
		space();

		cout << "Agility: " << agility << endl;
		cout << "Handling: " << handling << endl;
		cout << "Accuracy: " << accuracy << endl;
		cout << "Range: " << range << endl;
		cout << "Fire Rate: " << fireRate << endl;

		getKey();
	}
};

struct Attachment
{
	string name;
	vector<string> compatible;
	int slots;

	int agility;
	int handling;
	int accuracy;
	int range;
	int fireRate;
};