/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Electricity_provider
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Electricity_provider.h
*********************************************************************/

#ifndef Electricity_provider_H
#define Electricity_provider_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include "BDD.h"
//## link itsSGCS
class SGCS;

//## package BDD

//## class Electricity_provider
class Electricity_provider {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Electricity_provider(void);
    
    //## auto_generated
    ~Electricity_provider(void);
    
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
	File Path	: DefaultComponent\DefaultConfig\Electricity_provider.h
*********************************************************************/
