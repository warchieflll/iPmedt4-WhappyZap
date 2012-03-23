/*
 * BeginScherm.h
 *
 *  Created on: 23 mrt. 2012
 *      Author: HP
 */

#ifndef BEGINSCHERM_H_
#define BEGINSCHERM_H_

#include <MAUI/Screen.h>

using namespace MAUtil;
using namespace MAUI;

class BeginScherm : public Screen
{
public:
	BeginScherm();
	virtual ~BeginScherm();
	void run( MAEvent event );

	//kan key en touch events opvangen
	void keyPressEvent(int keyCode, int nativeCode);
	void pointerPressEvent(MAPoint2d point);

	//bevat een show() functie die alle eigenschappen update bij aanroep met waarden uit OptieScherm
	void show();
};

#endif /* BEGINSCHERM_H_ */
