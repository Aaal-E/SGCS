/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Analyzer
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Analyzer.h
*********************************************************************/

#ifndef Analyzer_H
#define Analyzer_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include "BDD.h"
//## link itsData_Storage
class Data_Storage;

//## link itsMain_Server
class Main_Server;

//## package BDD

//## class Analyzer
class Analyzer {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Analyzer(void);
    
    //## auto_generated
    ~Analyzer(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const Data_Storage* getItsData_Storage(void) const;
    
    //## auto_generated
    void setItsData_Storage(Data_Storage* const p_Data_Storage);
    
    //## auto_generated
    const Main_Server* getItsMain_Server(void) const;
    
    //## auto_generated
    void setItsMain_Server(Main_Server* const p_Main_Server);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    Data_Storage* itsData_Storage;		//## link itsData_Storage
    
    Main_Server* itsMain_Server;		//## link itsMain_Server
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsData_Storage(Data_Storage* const p_Data_Storage);
    
    //## auto_generated
    void _setItsData_Storage(Data_Storage* const p_Data_Storage);
    
    //## auto_generated
    void _clearItsData_Storage(void);
    
    //## auto_generated
    void __setItsMain_Server(Main_Server* const p_Main_Server);
    
    //## auto_generated
    void _setItsMain_Server(Main_Server* const p_Main_Server);
    
    //## auto_generated
    void _clearItsMain_Server(void);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Analyzer.h
*********************************************************************/
