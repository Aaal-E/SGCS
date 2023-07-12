/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Temperature_sensor
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Temperature_sensor.h
*********************************************************************/

#ifndef Temperature_sensor_H
#define Temperature_sensor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include "BDD.h"
//## link itsSGCS
class SGCS;

//## package BDD

//## class Temperature_sensor
class Temperature_sensor {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Temperature_sensor(void);
    
    //## auto_generated
    ~Temperature_sensor(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const SGCS* getItsSGCS(void) const;
    
    //## auto_generated
    void setItsSGCS(SGCS* const p_SGCS);
    
    //## auto_generated
    const Temperature_sensor* getItsTemperature_sensor(void) const;
    
    //## auto_generated
    void setItsTemperature_sensor(Temperature_sensor* const p_Temperature_sensor);
    
    //## auto_generated
    const Temperature_sensor* getItsTemperature_sensor_1(void) const;
    
    //## auto_generated
    void setItsTemperature_sensor_1(Temperature_sensor* const p_Temperature_sensor);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    SGCS* itsSGCS;		//## link itsSGCS
    
    Temperature_sensor* itsTemperature_sensor;		//## link itsTemperature_sensor
    
    Temperature_sensor* itsTemperature_sensor_1;		//## link itsTemperature_sensor_1
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsSGCS(SGCS* const p_SGCS);
    
    //## auto_generated
    void _setItsSGCS(SGCS* const p_SGCS);
    
    //## auto_generated
    void _clearItsSGCS(void);
    
    //## auto_generated
    void __setItsTemperature_sensor(Temperature_sensor* const p_Temperature_sensor);
    
    //## auto_generated
    void _setItsTemperature_sensor(Temperature_sensor* const p_Temperature_sensor);
    
    //## auto_generated
    void _clearItsTemperature_sensor(void);
    
    //## auto_generated
    void __setItsTemperature_sensor_1(Temperature_sensor* const p_Temperature_sensor);
    
    //## auto_generated
    void _setItsTemperature_sensor_1(Temperature_sensor* const p_Temperature_sensor);
    
    //## auto_generated
    void _clearItsTemperature_sensor_1(void);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Temperature_sensor.h
*********************************************************************/
