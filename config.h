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

new cvar_enabled;
new cvar_debug;

enum State
{
    CONFIG_STATE_NONE,
    CONFIG_STATE_CONFIG,
    CONFIG_STATE_EQUIP,
    CONFIG_STATE_KILLS,
    CONFIG_STATE_SOUNDS,
    CONFIG_STATE_SECONDARY_LIST
}

new State:ConfigState;
new bool:ConfigReset;
new Handle:ConfigParser;
new ParseConfigCount;
new ConfigCount = 0;
