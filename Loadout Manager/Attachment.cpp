#include "Struct.h"
#include "Includes.h"

inline void setUpAttachments(vector<Attachment>& att)
{

	// Agility / Handling / Accuracy / Range / Fire Rate

	// Muzzle
	att.push_back({ "Supressor", { "Pistol", "SMG", "AR", }, 2, -2, -4, 5, 2 });
	att.push_back({ "Compensator", { "Pistol", "SMG", "AR", }, -1, 1, 3, -2, 7 });

	// Barrel
	att.push_back({ "Extended Barrel", { "SMG", "AR", "Sniper", }, 0, -1, 5, 10, 3 });
	att.push_back({ "Short Barrel", { "SMG", "Pistol", }, 5, 2, 1, -3, -2 });

	//Optic
	att.push_back({ "Red Dot", { "SMG", "AR", "Sniper", }, 2, 2, 2, 1, -1 });
	att.push_back({ "Holo Sight", { "SMG", "AR", }, -1, 3, 4, 4, -5 });
	att.push_back({ "8x Scope", { "Sniper", }, -7, -2, 40, 50, 0 });

	//Magazine
	att.push_back({ "Extended Mag", { "Pistol", "SMG", "AR", "Sniper", }, -3, -3, 2, 3, 2 });
	att.push_back({ "Fast Mag", { "SMG", }, 5, 2, -1, 1, 0 });

	//Underbarrel
	att.push_back({ "Horizontal Grip", { "SMG", "AR", "Pistol", }, 3, 3, 5, -3, -3 });
	att.push_back({ "Angled Grip", { "Sniper", "AR", }, -1, -2, 4, 4, 2 });

	//Laser
	att.push_back({ "Laser",             { "Pistol", "SMG" },       1,  1,  4,  2,  0,  0 });
	att.push_back({ "Light Trigger",     { "Pistol", "Sniper" },    1,  0,  0, -2,  0,  8 });
	
	//Fire Mod
	att.push_back({ "Rapid Fire Spring", { "SMG", "AR" },           1,  0, -2, -5,  0, 10 });
}