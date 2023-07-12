/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: Garbage_Bin_Simulation
	Model Element	: Data_Storage
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Data_Storage.h
*********************************************************************/

#ifndef Data_Storage_H
#define Data_Storage_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "BDD.h"
//## link itsAnalyzer
class Analyzer;

//## link itsCommunication_System
class Communication_System;

//## link itsMain_Server
class Main_Server;

//## link itsWeb_Dashboard
class Web_Dashboard;

//## package BDD

//## class Data_Storage
class Data_Storage {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedData_Storage;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Data_Storage(void);
    
    //## auto_generated
    ~Data_Storage(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const Analyzer* getItsAnalyzer(void) const;
    
    //## auto_generated
    void setItsAnalyzer(Analyzer* const p_Analyzer);
    
    //## auto_generated
    const Communication_System* getItsCommunication_System(void) const;
    
    //## auto_generated
    void setItsCommunication_System(Communication_System* const p_Communication_System);
    
    //## auto_generated
    const Main_Server* getItsMain_Server(void) const;
    
    //## auto_generated
    void setItsMain_Server(Main_Server* const p_Main_Server);
    
    //## auto_generated
    const Web_Dashboard* getItsWeb_Dashboard(void) const;
    
    //## auto_generated
    void setItsWeb_Dashboard(Web_Dashboard* const p_Web_Dashboard);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    Analyzer* itsAnalyzer;		//## link itsAnalyzer
    
    Communication_System* itsCommunication_System;		//## link itsCommunication_System
    
    Main_Server* itsMain_Server;		//## link itsMain_Server
    
    Web_Dashboard* itsWeb_Dashboard;		//## link itsWeb_Dashboard
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsAnalyzer(Analyzer* const p_Analyzer);
    
    //## auto_generated
    void _setItsAnalyzer(Analyzer* const p_Analyzer);
    
    //## auto_generated
    void _clearItsAnalyzer(void);
    
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
    void __setItsWeb_Dashboard(Web_Dashboard* const p_Web_Dashboard);
    
    //## auto_generated
    void _setItsWeb_Dashboard(Web_Dashboard* const p_Web_Dashboard);
    
    //## auto_generated
    void _clearItsWeb_Dashboard(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedData_Storage : virtual public AOMInstance {
    DECLARE_META(Data_Storage, OMAnimatedData_Storage)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Data_Storage.h
*********************************************************************/
