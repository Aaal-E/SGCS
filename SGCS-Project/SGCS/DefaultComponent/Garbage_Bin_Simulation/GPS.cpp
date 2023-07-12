/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: Garbage_Bin_Simulation
	Model Element	: GPS
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\Garbage_Bin_Simulation\GPS.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "GPS.h"
//#[ ignore
#define BDD_GPS_GPS_SERIALIZE OM_NO_OP
//#]

//## package BDD

//## class GPS
GPS::GPS(void) {
    NOTIFY_CONSTRUCTOR(GPS, GPS(), 0, BDD_GPS_GPS_SERIALIZE);
}

GPS::~GPS(void) {
    NOTIFY_DESTRUCTOR(~GPS, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(GPS, BDD, BDD, false, OMAnimatedGPS)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Garbage_Bin_Simulation\GPS.cpp
*********************************************************************/
