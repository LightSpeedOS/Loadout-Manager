#include "Struct.h"
#include "Includes.h"

void setUpAttachments(vector<Attachment>& att)
{
    // Muzzle
    Attachment suppressor;
    suppressor.name = "Supressor";
    suppressor.compatible = { "Pistol", "SMG", "AR" };
    suppressor.slots = 2;

    suppressor.agility = -2;
    suppressor.handling = -4;
    suppressor.accuracy = 5;
    suppressor.range = 2;
    suppressor.fireRate = 0;
    att.push_back(suppressor);


    Attachment compensator;
    compensator.name = "Compensator";
    compensator.compatible = { "Pistol", "SMG", "AR" };
    compensator.slots = -1;

    compensator.agility = 1;
    compensator.handling = 3;
    compensator.accuracy = -2;
    compensator.range = 7;
    compensator.fireRate = 0;
    att.push_back(compensator);


    // Barrel
    Attachment extendedBarrel;
    extendedBarrel.name = "Extended Barrel";
    extendedBarrel.compatible = { "SMG", "AR", "Sniper" };
    extendedBarrel.slots = 0;

    extendedBarrel.agility = -1;
    extendedBarrel.handling = 5;
    extendedBarrel.accuracy = 10;
    extendedBarrel.range = 3;
    extendedBarrel.fireRate = 0;
    att.push_back(extendedBarrel);


    Attachment shortBarrel;
    shortBarrel.name = "Short Barrel";
    shortBarrel.compatible = { "SMG", "Pistol" };
    shortBarrel.slots = 5;

    shortBarrel.agility = 2;
    shortBarrel.handling = 1;
    shortBarrel.accuracy = -3;
    shortBarrel.range = -2;
    shortBarrel.fireRate = 0;
    att.push_back(shortBarrel);


    // Optic
    Attachment redDot;
    redDot.name = "Red Dot";
    redDot.compatible = { "SMG", "AR", "Sniper" };
    redDot.slots = 2;

    redDot.agility = 2;
    redDot.handling = 2;
    redDot.accuracy = 1;
    redDot.range = -1;
    redDot.fireRate = 0;
    att.push_back(redDot);


    Attachment holoSight;
    holoSight.name = "Holo Sight";
    holoSight.compatible = { "SMG", "AR" };
    holoSight.slots = -1;

    holoSight.agility = 3;
    holoSight.handling = 4;
    holoSight.accuracy = 4;
    holoSight.range = -5;
    holoSight.fireRate = 0;
    att.push_back(holoSight);


    Attachment scope8x;
    scope8x.name = "8x Scope";
    scope8x.compatible = { "Sniper" };
    scope8x.slots = -7;

    scope8x.agility = -2;
    scope8x.handling = 40;
    scope8x.accuracy = 50;
    scope8x.range = 0;
    scope8x.fireRate = 0;
    att.push_back(scope8x);


    // Magazine
    Attachment extendedMag;
    extendedMag.name = "Extended Mag";
    extendedMag.compatible = { "Pistol", "SMG", "AR", "Sniper" };
    extendedMag.slots = -3;

    extendedMag.agility = -3;
    extendedMag.handling = 2;
    extendedMag.accuracy = 3;
    extendedMag.range = 2;
    extendedMag.fireRate = 0;
    att.push_back(extendedMag);


    Attachment fastMag;
    fastMag.name = "Fast Mag";
    fastMag.compatible = { "SMG" };
    fastMag.slots = 5;

    fastMag.agility = 2;
    fastMag.handling = -1;
    fastMag.accuracy = 1;
    fastMag.range = 0;
    fastMag.fireRate = 0;
    att.push_back(fastMag);


    // Underbarrel
    Attachment horizontalGrip;
    horizontalGrip.name = "Horizontal Grip";
    horizontalGrip.compatible = { "SMG", "AR", "Pistol" };
    horizontalGrip.slots = 3;

    horizontalGrip.agility = 3;
    horizontalGrip.handling = 5;
    horizontalGrip.accuracy = -3;
    horizontalGrip.range = -3;
    horizontalGrip.fireRate = 0;
    att.push_back(horizontalGrip);


    Attachment angledGrip;
    angledGrip.name = "Angled Grip";
    angledGrip.compatible = { "Sniper", "AR" };
    angledGrip.slots = -1;

    angledGrip.agility = -2;
    angledGrip.handling = 4;
    angledGrip.accuracy = 4;
    angledGrip.range = 2;
    angledGrip.fireRate = 0;
    att.push_back(angledGrip);


    // Laser
    Attachment laser;
    laser.name = "Laser";
    laser.compatible = { "Pistol", "SMG" };
    laser.slots = 1;

    laser.agility = 1;
    laser.handling = 4;
    laser.accuracy = 2;
    laser.range = 0;
    laser.fireRate = 0;
    att.push_back(laser);


    Attachment lightTrigger;
    lightTrigger.name = "Light Trigger";
    lightTrigger.compatible = { "Pistol", "Sniper" };
    lightTrigger.slots = 1;

    lightTrigger.agility = 0;
    lightTrigger.handling = 0;
    lightTrigger.accuracy = -2;
    lightTrigger.range = 0;
    lightTrigger.fireRate = 8;
    att.push_back(lightTrigger);


    // Fire Mod
    Attachment rapidFireSpring;
    rapidFireSpring.name = "Rapid Fire Spring";
    rapidFireSpring.compatible = { "SMG", "AR" };
    rapidFireSpring.slots = 1;

    rapidFireSpring.agility = 0;
    rapidFireSpring.handling = -2;
    rapidFireSpring.accuracy = -5;
    rapidFireSpring.range = 0;
    rapidFireSpring.fireRate = 10;
    att.push_back(rapidFireSpring);
}