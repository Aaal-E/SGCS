/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: Garbage_Bin_Simulation
	Model Element	: GPS
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\Garbage_Bin_Simulation\GPS.h
*********************************************************************/

#ifndef GPS_H
#define GPS_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "BDD.h"
//## package BDD

//## class GPS
class GPS {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedGPS;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    GPS(void);
    
    //## auto_generated
    ~GPS(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedGPS : virtual public AOMInstance {
    DECLARE_META(GPS, OMAnimatedGPS)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Garbage_Bin_Simulation\GPS.h
*********************************************************************/
