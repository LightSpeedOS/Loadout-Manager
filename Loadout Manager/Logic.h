#pragma once

#include "Includes.h"
#include "Struct.h"


void printWeapon(Weapon* current)
{
	cout << "=====Loadout Manager=====" << endl;
	space();

	if (current == nullptr) cout << "Current Weapon: None" << endl;
	else cout << "Current Weapon: " << current->name << " | DMG (" << red << current->damage << reset << ")" << endl;
	space();
}

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
			pause();
			while (_kbhit()) _getch();
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

inline string tolower(string text)
{
	for (char& c : text)
	{
		c = tolower(c);
	}
	return text;
}

inline string weaponSearch(vector<Weapon>& weapons)
{
	string nameSearch;
	while (true)
	{
		clear();

		cout << "=======Weapon List=======" << endl;
		space();

		cout << left << setw(4) << "#" << setw(16) << "NAME" << setw(9) << "TYPE" << "DMG" << endl;

		for (size_t i = 0; i < weapons.size(); i++)
		{
			cout << left << setw(4) << i + 1 << setw(16) << weapons[i].name << setw(9) << weapons[i].type << weapons[i].damage << right << endl;
		}


		space();
		cout << "Enter a name: ";
		getline(cin, nameSearch);

		if (!nameSearch.empty())
		{
			break;
		}
	}
	return nameSearch;
}

inline Weapon* findWeapon(vector<Weapon>& weapons, string nameSearch)
{

	Weapon* pWeapon = nullptr;

	for (size_t i = 0; i < weapons.size(); i++)
	{
		if (tolower(nameSearch) == tolower(weapons[i].name))
		{
			pWeapon = &weapons[i];
		}
	}

	if (pWeapon == nullptr)
	{
		clear();
		cout << "[!] Weapon Not Found" << endl;
		pause();
		return nullptr;
	}
	else
	{
		clear();
		cout << "[+] " << green << "Successfully " << reset << "Found -> " << pWeapon->name << endl;
		getKey();
		return pWeapon;
	}

}

inline void clearWeapon(Weapon*& current)
{
	clear();

	if (current == nullptr)
	{
		cout << "[!] No Weapon To Clear" << endl;
		pause();
		return;
	}

	cout << "[+] " << green << "Successfully " << reset << "Cleared Weapon" << endl;
	current = nullptr;
	getKey();
}

inline bool isCompatible(const Weapon* current, const Attachment& att)
{
	for (size_t i = 0; i < att.compatible.size(); i++)
	{

		if (current->type == att.compatible[i]) return true;
	}

	return false;
}

inline const char* statColor(int value)
{
	if (value > 0) return green;
	if (value < 0) return red;

	return reset;
}

inline void editAttachments(Weapon* current, vector<Attachment>& att)
{
	clear();

	cout << "Available Attachments for " << current->name << endl;
	cout << "Size: " << current->attached.size();
	space();


	for (size_t i = 0; i < att.size(); i++)
	{
		if (isCompatible(current, att[i]))
		{
			cout << left << att[i].name << endl;
		}
	}

}
