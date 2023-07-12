/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Truck_refuel_stations
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Truck_refuel_stations.h
*********************************************************************/

#ifndef Truck_refuel_stations_H
#define Truck_refuel_stations_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include "BDD.h"
//## link itsSGCS
class SGCS;

//## package BDD

//## class Truck_refuel_stations
class Truck_refuel_stations {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Truck_refuel_stations(void);
    
    //## auto_generated
    ~Truck_refuel_stations(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const SGCS* getItsSGCS(void) const;
    
    //## auto_generated
    void setItsSGCS(SGCS* const p_SGCS);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    SGCS* itsSGCS;		//## link itsSGCS
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsSGCS(SGCS* const p_SGCS);
    
    //## auto_generated
    void _setItsSGCS(SGCS* const p_SGCS);
    
    //## auto_generated
    void _clearItsSGCS(void);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Truck_refuel_stations.h
*********************************************************************/
