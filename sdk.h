/*******************************************************************************
*   This file is part of AdminMod.
*
*   AdminMod is free software: you can redistribute it and/or modify
*   it under the terms of the GNU General Public License as published by
*   the Free Software Foundation, either version 3 of the License, or
*   (at your option) any later version.
*
*   AdminMod is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*   GNU General Public License for more details.
*
*   You should have received a copy of the GNU General Public License
*   along with AdminMod.  If not, see <http://www.gnu.org/licenses/>.
*
*   Copyright (c) 2013, Marty "MadKat" Lewis
*******************************************************************************/

// GiveNamedItem(string classname, int subtype)
new Handle:hGiveNamedItem;
// Weapon_Equip(CBaseCombatWeapon * weapon)
new Handle:hWeapon_Equip;
// GiveAmmo(int, str, bool)
new Handle:hGiveAmmo;
// RemoveAllItems(bool remove_suit)
new Handle:hRemoveAllItems;
// Spawn(void)
new Handle:hSpawn;

new h_iMaxHealth;
new h_iHealth;
new h_iMaxArmor;
new h_iArmorValue;
new h_flMaxspeed;
new h_flDefaultSpeed;
new h_iPlayerClass;
new h_OffsetFlags;
