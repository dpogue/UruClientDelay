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

#ifndef _DLL_H_
#define _DLL_H_

#define DLLEXPORT __declspec (dllexport)

class hsResMgr;
class plFactory;
class plTimerCallbackManager;
class plTimerShare;
class plNetClientApp;

// Statics -- YOU MUST UPDATE THESE FOR EACH NEW EXE!
// fDelayMS is defined as an hsBool, which is a typedef to int
#define fDelayMS        (*(int*)0x00B6573C)

extern "C" {

DLLEXPORT void InitGlobals(hsResMgr* mgr, plFactory* factory,
                           plTimerCallbackManager* timerMgr,
                           plTimerShare* timer, plNetClientApp* app);

}

#endif
