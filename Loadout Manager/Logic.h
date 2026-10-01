#pragma once

#include "Includes.h"
#include "Struct.h"

inline void browseWeapons(vector<Weapon>& weapons)
{
	int i = 0;

	cout << "[S] Show Stats  [N] Next Weapon  [B] Previous Weapon  [E] Equip [R] Return" << endl;
	char key = _getch();

	switch (tolower(key))
	{
	case 's':
		weapon.displayerStats();
		break;

	case 'n':
		clear();

		if (i == weapons.size())
		{
			cout << "[!] You have reached the end!" << endl;
			break;
		}

		i++;
		break;

	case 'p':
		clear();

		if (i == 0)
		{
			cout << "[!] You have reached the start" << endl;
			break;
		}
		i--;
		break;

	case 'r':
		clear();
		cout << "Returning." << endl;
		pause();
		return;

	default:
		invalid();
		while (_kbhit()) _getch();
		break;
	}
}
