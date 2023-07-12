/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Truck
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Truck.h
*********************************************************************/

#ifndef Truck_H
#define Truck_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include "BDD.h"
//## classInstance itsGPS
#include "GPS.h"
//## link itsDispatch
class Dispatch;

//## link itsSGCS
class SGCS;

//## package BDD

//## class Truck
class Truck {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Truck(void);
    
    //## auto_generated
    ~Truck(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const float getFill_level(void) const;
    
    //## auto_generated
    void setFill_level(const float p_Fill_level);
    
    //## auto_generated
    const float getFuel_level(void) const;
    
    //## auto_generated
    void setFuel_level(const float p_Fuel_level);
    
    //## auto_generated
    const OMString getGarbage_type(void) const;
    
    //## auto_generated
    void setGarbage_type(const OMString p_Garbage_type);
    
    //## auto_generated
    const Dispatch* getItsDispatch(void) const;
    
    //## auto_generated
    void setItsDispatch(Dispatch* const p_Dispatch);
    
    //## auto_generated
    const Dispatch* getItsDispatch_1(void) const;
    
    //## auto_generated
    void setItsDispatch_1(Dispatch* const p_Dispatch);
    
    //## auto_generated
    const GPS* getItsGPS(void) const;
    
    //## auto_generated
    const GPS* getItsGPS_1(void) const;
    
    //## auto_generated
    const SGCS* getItsSGCS(void) const;
    
    //## auto_generated
    void setItsSGCS(SGCS* const p_SGCS);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    float Fill_level;		//## attribute Fill_level
    
    float Fuel_level;		//## attribute Fuel_level
    
    OMString Garbage_type;		//## attribute Garbage_type
    
    ////    Relations and components    ////
    
    Dispatch* itsDispatch;		//## link itsDispatch
    
    Dispatch* itsDispatch_1;		//## link itsDispatch_1
    
    GPS itsGPS;		//## classInstance itsGPS
    
    GPS itsGPS_1;		//## classInstance itsGPS_1
    
    SGCS* itsSGCS;		//## link itsSGCS
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsDispatch(Dispatch* const p_Dispatch);
    
    //## auto_generated
    void _setItsDispatch(Dispatch* p_Dispatch);
    
    //## auto_generated
    void _clearItsDispatch(void);
    
    //## auto_generated
    void __setItsDispatch_1(Dispatch* const p_Dispatch);
    
    //## auto_generated
    void _setItsDispatch_1(Dispatch* p_Dispatch);
    
    //## auto_generated
    void _clearItsDispatch_1(void);
    
    //## auto_generated
    void __setItsSGCS(SGCS* const p_SGCS);
    
    //## auto_generated
    void _setItsSGCS(SGCS* const p_SGCS);
    
    //## auto_generated
    void _clearItsSGCS(void);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Truck.h
*********************************************************************/
