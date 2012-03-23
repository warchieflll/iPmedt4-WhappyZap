/*
 * BBApp.cpp
 *
 *  Created on: 23 mrt. 2012
 *      Author: HP
 */

#include "BBApp.h"

BBApp::BBApp()
{
	this->beginScherm = new BeginScherm();
	beginScherm->show();
}

BBApp::~BBApp()
{
	delete this->beginScherm;
}


// bij indrukken van key
void BBApp::keyPressEvent(int keyCode, int nativeCode)
{
	if (MAK_BACK == keyCode )
	{
		// sluit app
		this->close();
	}
}
