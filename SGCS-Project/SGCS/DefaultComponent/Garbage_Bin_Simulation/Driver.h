/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: Garbage_Bin_Simulation
	Model Element	: Driver
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Driver.h
*********************************************************************/

#ifndef Driver_H
#define Driver_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "UCs.h"
//## package UCs

//## actor Driver
class Driver {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDriver;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Driver(void);
    
    //## auto_generated
    ~Driver(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDriver : virtual public AOMInstance {
    DECLARE_META(Driver, OMAnimatedDriver)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Driver.h
*********************************************************************/
