/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: SGCS
	Model Element	: Main_Server
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\SGCS\Main_Server.h
*********************************************************************/

#ifndef Main_Server_H
#define Main_Server_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include "BDD.h"
//## link itsAnalyzer
class Analyzer;

//## link itsCommunication_System
class Communication_System;

//## link itsData_Storage
class Data_Storage;

//## link itsDispatch
class Dispatch;

//## link itsSGCS
class SGCS;

//## link itsWeb_Dashboard
class Web_Dashboard;

//## package BDD

//## class Main_Server
class Main_Server {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Main_Server(void);
    
    //## auto_generated
    ~Main_Server(void);
    
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
    const Data_Storage* getItsData_Storage(void) const;
    
    //## auto_generated
    void setItsData_Storage(Data_Storage* const p_Data_Storage);
    
    //## auto_generated
    const Dispatch* getItsDispatch(void) const;
    
    //## auto_generated
    void setItsDispatch(Dispatch* const p_Dispatch);
    
    //## auto_generated
    const SGCS* getItsSGCS(void) const;
    
    //## auto_generated
    void setItsSGCS(SGCS* const p_SGCS);
    
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
    
    Data_Storage* itsData_Storage;		//## link itsData_Storage
    
    Dispatch* itsDispatch;		//## link itsDispatch
    
    SGCS* itsSGCS;		//## link itsSGCS
    
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
    void __setItsData_Storage(Data_Storage* const p_Data_Storage);
    
    //## auto_generated
    void _setItsData_Storage(Data_Storage* const p_Data_Storage);
    
    //## auto_generated
    void _clearItsData_Storage(void);
    
    //## auto_generated
    void __setItsDispatch(Dispatch* const p_Dispatch);
    
    //## auto_generated
    void _setItsDispatch(Dispatch* const p_Dispatch);
    
    //## auto_generated
    void _clearItsDispatch(void);
    
    //## auto_generated
    void __setItsSGCS(SGCS* const p_SGCS);
    
    //## auto_generated
    void _setItsSGCS(SGCS* const p_SGCS);
    
    //## auto_generated
    void _clearItsSGCS(void);
    
    //## auto_generated
    void __setItsWeb_Dashboard(Web_Dashboard* const p_Web_Dashboard);
    
    //## auto_generated
    void _setItsWeb_Dashboard(Web_Dashboard* const p_Web_Dashboard);
    
    //## auto_generated
    void _clearItsWeb_Dashboard(void);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\SGCS\Main_Server.h
*********************************************************************/
