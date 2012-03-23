/*
 * BeginScherm.cpp
 *
 *  Created on: 23 mrt. 2012
 *      Author: HP
 */

#include "BeginScherm.h"

BeginScherm::BeginScherm() {

	//sla schermgrootte op in globale variabelen
	MAExtent screenSize = maGetScrSize();
	int screenWidth = EXTENT_X( screenSize );
	int screenHeight = EXTENT_Y( screenSize );

}

BeginScherm::~BeginScherm()
{

}

//show() override de show() van de super klasse (Screen), omdat we bij showen eerst opties willen ophalen
void BeginScherm::show()
{
	//roep de show() van de superklasse (Screen) aan
	this->Screen::show();
}

//bij indrukken van de MAK_FIRE toets, laat optiescherm zien
void BeginScherm::keyPressEvent(int keyCode, int nativeCode)
{

}

//bij touch op scherm, laat optiescherm zien.
void BeginScherm::pointerPressEvent(MAPoint2d point)
{

}
