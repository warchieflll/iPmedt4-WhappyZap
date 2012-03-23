/*
 * BBApp.h
 *
 *  Created on: 23 mrt. 2012
 *      Author: HP
 */

#ifndef BBAPP_H_
#define BBAPP_H_


//we gebruiken Screen klasse om schermen aan te maken
#include <MAUtil/Moblet.h>
#include <MAUI/Screen.h>

//deze namespaces zijn nodig om niet overal MAUtil:: en MAUI:: achter bijbehorende klassen te schrijven
using namespace MAUtil;
using namespace MAUI;

//we maken een beginscherm
#include "BeginScherm.h"

//de klasse is een Moblet die events af kan vangen, en opgestart wordt in de main
class BBApp : public Moblet
{
private:
	Screen* beginScherm;

public:
	BBApp();
	virtual ~BBApp();

	void keyPressEvent( int keyCode, int nativeCode );
};

#endif /* BBAPP_H_ */
