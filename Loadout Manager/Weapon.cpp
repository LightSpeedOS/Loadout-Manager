#include "Struct.h"
#include "Includes.h"

void setUpWeapons(vector<Weapon>& weapons)
{

	// Sub Machine Guns
	Weapon iso;
	iso.name = "Iso Nightside";
	iso.type = "SMG";
	iso.damage = 24;
	iso.slots = 5;

	iso.agility = 78;
	iso.handling = 72;
	iso.accuracy = 61;
	iso.range = 45;
	iso.fireRate = 88;
	weapons.push_back(iso);

	Weapon c9;
	c9.name = "C9";
	c9.type = "SMG";
	c9.damage = 29;
	c9.slots = 5;

	c9.agility = 82;
	c9.handling = 76;
	c9.accuracy = 58;
	c9.range = 42;
	c9.fireRate = 91;
	weapons.push_back(c9);

	// Assault Rifles
	Weapon an94;
	an94.name = "AN94";
	an94.type = "AR";
	an94.damage = 35;
	an94.slots = 6;

	an94.agility = 62;
	an94.handling = 58;
	an94.accuracy = 74;
	an94.range = 71;
	an94.fireRate = 69;
	weapons.push_back(an94);

	Weapon mcw;
	mcw.name = "MCW";
	mcw.type = "AR";
	mcw.damage = 37;
	mcw.slots = 6;

	mcw.agility = 63;
	mcw.handling = 61;
	mcw.accuracy = 81;
	mcw.range = 79;
	mcw.fireRate = 68;
	weapons.push_back(mcw);

	// Sniper
	Weapon kar;
	kar.name = "KAR-98K";
	kar.type = "Sniper";
	kar.damage = 78;
	kar.slots = 5;

	kar.agility = 52;
	kar.handling = 55;
	kar.accuracy = 89;
	kar.range = 95;
	kar.fireRate = 38;
	weapons.push_back(kar);

	// Pistol
	Weapon venator;
	venator.name = "Venator";
	venator.type = "Pistol";
	venator.damage = 34;
	venator.slots = 2;

	venator.agility = 78;
	venator.handling = 71;
	venator.accuracy = 56;
	venator.range = 40;
	venator.fireRate = 82;
	weapons.push_back(venator);

	Weapon m9;
	m9.name = "M9";
	m9.type = "Pistol";
	m9.damage = 15;
	m9.slots = 1;

	m9.agility = 67;
	m9.handling = 59;
	m9.accuracy = 78;
	m9.range = 21;
	m9.fireRate = 99;
	weapons.push_back(m9);
}