#pragma once

#include "Includes.h"
#include "Struct.h"

inline void browseWeapons(vector<Weapon>& weapons)
{

	int i = 0;

	while (true)
	{ 

		clear();
		bool show = true;

	weapons[i].display();

	if (show)
	{
		cout << "[S] Show Stats  [N] Next Weapon  [P] Previous Weapon [R] Return" << endl;
	}

	char key = _getch();

	switch (tolower(key))
	{
	case 's':
		clear();
		show = false;
		weapons[i].display();
			weapons[i].displayStats();
		break;

	case 'n':
		clear();

		if (i == weapons.size() - 1)
		{
			clear();
			cout << "[!] You have reached the end!" << endl;
			pause();
			while (_kbhit()) _getch();
			break;
		}

		i++;
		break;

	case '\r':
		clear();

		if (i == weapons.size() - 1)
		{
			clear();
			cout << "[!] You have reached the end!" << endl;
			pause();
			while (_kbhit()) _getch();
			break;
		}

		i++;
		break;

	case 'p':
		clear();

		if (i == 0)
		{
			clear();
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
}

inline Weapon* findWeapon(vector<Weapon>& weapons)
{
	for (size_t i = 0; i < weapons.size(); i++)
	{
		cout << "Name: " << weapons[i].name << endl;
		if (i < weapons.size() - 1) cout << "--------------" << endl;
		space();
	}
}
