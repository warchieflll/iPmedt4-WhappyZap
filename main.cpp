#include <MAUtil/Moblet.h>
#include "BBApp.h"

//de main functie
extern "C" int MAMain()
{
	Moblet::run(new BBApp());
	return 0;
}
