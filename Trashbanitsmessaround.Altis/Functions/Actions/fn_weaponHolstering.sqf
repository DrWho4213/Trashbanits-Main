// File Name: weaponHolstering.sqf
// Description: Simple scroll wheel weapon holster
// By: DrWho

player action ["SWITCHWEAPON",player,player,-1];
waitUntil {currentWeapon player == "" or {primaryWeapon player == "" && handgunWeapon player == ""}};