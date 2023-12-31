/*
Copyright KM_2023 Hannah Blythe Morrison

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

// Set the tapping term.

#define PERMISSIVE_HOLD
#define TAPPING_TERM 190

// Capsword.

#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD

// Enable kinetic mouse for nice scroll wheel emulation.

#define MK_KINETIC_SPEED
#define MOUSEKEY_INTERVAL 16
#define MOUSEKEY_TIME_TO_MAX 40
#define MOUSEKEY_DELAY 100
#define MOUSEKEY_WHEEL_DELAY 100

#define MOUSEKEY_WHEEL_INTERVAL 50 // The default is 100
#define MOUSEKEY_WHEEL_TIME_TO_MAX 100 // The default is 40

#define MOUSEKEY_WHEEL_INITIAL_MOVEMENTS 12
#define MOUSEKEY_WHEEL_BASE_MOVEMENTS 32
#define MOUSEKEY_WHEEL_ACCELERATED_MOVEMENTS 32
#define MOUSEKEY_WHEEL_DECELERATED_MOVEMENTS 12
