// $Id: BlueSerpent.cpp 10108 2012-04-22 04:54:24Z mrimer $

/* ***** BEGIN LICENSE BLOCK *****
 * Version: MPL 1.1
 *
 * The contents of this file are subject to the Mozilla Public License Version
 * 1.1 (the "License"); you may not use this file except in compliance with
 * the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 * for the specific language governing rights and limitations under the
 * License.
 *
 * The Original Code is Deadly Rooms of Death.
 *
 * The Initial Developer of the Original Code is
 * Caravel Software.
 * Portions created by the Initial Developer are Copyright (C) 1995, 1996, 
 * 1997, 2000, 2001, 2002, 2005 Caravel Software. All Rights Reserved.
 *
 * Contributor(s):
 *
 * ***** END LICENSE BLOCK ***** */

#include "BlueSerpent.h"

//
//Public methods.
//

//*****************************************************************************************
CBlueSerpent::CBlueSerpent(CCurrentGame *pSetCurrentGame)
	: CSerpent(M_SERPENTB, pSetCurrentGame)
{
}

//*****************************************************************************************
void CBlueSerpent::Process(
//Process a blue serpent for movement:
//Don't grow or shrink.  Serpent only shrinks when stabbed in the tail.
//
//Params:
	const int /*nLastCommand*/,   //(in) Last swordsman command.
	CCueEvents& /*CueEvents*/)  //(in/out) Accepts pointer to an IDList object that will be populated
							//with codes indicating events that happened that may correspond to
							//sound or graphical effects.
{
}
