/**
 * Copyright (C) 2023 Darryl Pogue
 * This file is part of UruClientDelay <https://github.com/dpogue/UruClientDelay>
 *
 * UruClientDelay is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * UruClientDelay is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with UruClientDelay.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <windows.h>
#include <stdio.h>
#include "dll.h"

DLLEXPORT void InitGlobals(hsResMgr* mgr, plFactory* factory,
                           plTimerCallbackManager* timerMgr,
                           plTimerShare* timer, plNetClientApp* app)
{
    // Enable Client Delay (adds a 5 millisecond sleep each frame)
    fDelayMS = 1;

    printf("Client Delay enabled\n");
}

BOOL APIENTRY DllMain (HINSTANCE hInst, DWORD reason, LPVOID reserved)
{
    return TRUE;
}
