/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: Garbage_Bin_Simulation
	Model Element	: Garbage_Disposal_Sites
//!	Generated Date	: Thu, 13, Jul 2023  
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Garbage_Disposal_Sites.h
*********************************************************************/

#ifndef Garbage_Disposal_Sites_H
#define Garbage_Disposal_Sites_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "BDD.h"
//## link itsSGCS
class SGCS;

//## package BDD

//## class Garbage_Disposal_Sites
class Garbage_Disposal_Sites {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedGarbage_Disposal_Sites;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Garbage_Disposal_Sites(void);
    
    //## auto_generated
    ~Garbage_Disposal_Sites(void);
    
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

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedGarbage_Disposal_Sites : virtual public AOMInstance {
    DECLARE_META(Garbage_Disposal_Sites, OMAnimatedGarbage_Disposal_Sites)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Garbage_Disposal_Sites.h
*********************************************************************/
