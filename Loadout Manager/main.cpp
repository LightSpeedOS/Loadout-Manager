#include "Includes.h"
#include "Struct.h"
#include "Weapon.h"
#include "Attachment.h"
#include "Logic.h"

using namespace std;

auto main() -> int
{
	initConsole();
	SetConsoleTitleA("Weapon Manager");

	Weapon* currentWeapon = nullptr;
	vector<Weapon> weapons;

	vector<Attachment> attachments;
	vector<int>eAttachments;

	setUpWeapons(weapons);
	setUpAttachments(attachments);

	
	while (true)
	{
		clear();
		int mainOption;

		printWeapon(currentWeapon);

		cout << "[1] Browse Weapons" << endl;
		cout << "[2] Equip Weapon" << endl;
		cout << "[3] Unequip Weapon" << endl;
		cout << "[4] Attachments" << endl;
		cout << "[5] View Loadout" << endl;
		cout << "[6] Quit" << endl;

		space();
		cout << "> ";
		cin >> mainOption;
		cin.ignore();

		if (input())
		{
			continue;
		}

		switch (mainOption)
		{
		case List:
			browseWeapons(weapons);
			break;

		case Equip:
			currentWeapon = findWeapon(weapons, weaponSearch(weapons));
			break;

		case Unequip:
			clearWeapon(currentWeapon);
			break;

		case Attach:

			break;

		}
	}
}