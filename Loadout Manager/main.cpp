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

	setUpWeapons(weapons);
	setUpAttachments(attachments);

	browseWeapons(weapons);

}