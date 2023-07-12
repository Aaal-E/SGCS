/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: SGCS
	Model Element	: Dispatch
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\SGCS\Dispatch.h
*********************************************************************/

#ifndef Dispatch_H
#define Dispatch_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include "BDD.h"
//## auto_generated
#include "omcollec.h"
//## link itsCommunication_System
class Communication_System;

//## link itsMain_Server
class Main_Server;

//## link itsTruck
class Truck;

//## package BDD

//## class Dispatch
class Dispatch {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Dispatch(void);
    
    //## auto_generated
    ~Dispatch(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const Communication_System* getItsCommunication_System(void) const;
    
    //## auto_generated
    void setItsCommunication_System(Communication_System* const p_Communication_System);
    
    //## auto_generated
    const Main_Server* getItsMain_Server(void) const;
    
    //## auto_generated
    void setItsMain_Server(Main_Server* const p_Main_Server);
    
    //## auto_generated
    OMIterator<Truck*> getItsTruck(void) const;
    
    //## auto_generated
    void addItsTruck(Truck* const p_Truck);
    
    //## auto_generated
    void removeItsTruck(Truck* p_Truck);
    
    //## auto_generated
    void clearItsTruck(void);
    
    //## auto_generated
    OMIterator<Truck*> getItsTruck_1(void) const;
    
    //## auto_generated
    void addItsTruck_1(Truck* const p_Truck);
    
    //## auto_generated
    void removeItsTruck_1(Truck* p_Truck);
    
    //## auto_generated
    void clearItsTruck_1(void);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    Communication_System* itsCommunication_System;		//## link itsCommunication_System
    
    Main_Server* itsMain_Server;		//## link itsMain_Server
    
    OMCollection<Truck*> itsTruck;		//## link itsTruck
    
    OMCollection<Truck*> itsTruck_1;		//## link itsTruck_1
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsCommunication_System(Communication_System* const p_Communication_System);
    
    //## auto_generated
    void _setItsCommunication_System(Communication_System* const p_Communication_System);
    
    //## auto_generated
    void _clearItsCommunication_System(void);
    
    //## auto_generated
    void __setItsMain_Server(Main_Server* const p_Main_Server);
    
    //## auto_generated
    void _setItsMain_Server(Main_Server* const p_Main_Server);
    
    //## auto_generated
    void _clearItsMain_Server(void);
    
    //## auto_generated
    void _addItsTruck(Truck* const p_Truck);
    
    //## auto_generated
    void _removeItsTruck(Truck* const p_Truck);
    
    //## auto_generated
    void _clearItsTruck(void);
    
    //## auto_generated
    void _addItsTruck_1(Truck* const p_Truck);
    
    //## auto_generated
    void _removeItsTruck_1(Truck* const p_Truck);
    
    //## auto_generated
    void _clearItsTruck_1(void);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\SGCS\Dispatch.h
*********************************************************************/
