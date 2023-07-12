/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Communication_System
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Communication_System.h
*********************************************************************/

#ifndef Communication_System_H
#define Communication_System_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include "BDD.h"
//## auto_generated
#include "omcollec.h"
//## link itsData_Storage
class Data_Storage;

//## link itsDispatch
class Dispatch;

//## link itsGarbage_Bin
class Garbage_Bin;

//## link itsMain_Server
class Main_Server;

//## link itsSGCS
class SGCS;

//## package BDD

//## class Communication_System
class Communication_System {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Communication_System(void);
    
    //## auto_generated
    ~Communication_System(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const Data_Storage* getItsData_Storage(void) const;
    
    //## auto_generated
    void setItsData_Storage(Data_Storage* const p_Data_Storage);
    
    //## auto_generated
    const Dispatch* getItsDispatch(void) const;
    
    //## auto_generated
    void setItsDispatch(Dispatch* const p_Dispatch);
    
    //## auto_generated
    const Garbage_Bin* getItsGarbage_Bin(void) const;
    
    //## auto_generated
    void setItsGarbage_Bin(Garbage_Bin* const p_Garbage_Bin);
    
    //## auto_generated
    OMIterator<Garbage_Bin*> getItsGarbage_Bin_1(void) const;
    
    //## auto_generated
    void addItsGarbage_Bin_1(Garbage_Bin* const p_Garbage_Bin);
    
    //## auto_generated
    void removeItsGarbage_Bin_1(Garbage_Bin* p_Garbage_Bin);
    
    //## auto_generated
    void clearItsGarbage_Bin_1(void);
    
    //## auto_generated
    OMIterator<Garbage_Bin*> getItsGarbage_Bin_2(void) const;
    
    //## auto_generated
    void addItsGarbage_Bin_2(Garbage_Bin* const p_Garbage_Bin);
    
    //## auto_generated
    void removeItsGarbage_Bin_2(Garbage_Bin* p_Garbage_Bin);
    
    //## auto_generated
    void clearItsGarbage_Bin_2(void);
    
    //## auto_generated
    const Main_Server* getItsMain_Server(void) const;
    
    //## auto_generated
    void setItsMain_Server(Main_Server* const p_Main_Server);
    
    //## auto_generated
    const SGCS* getItsSGCS(void) const;
    
    //## auto_generated
    void setItsSGCS(SGCS* const p_SGCS);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    Data_Storage* itsData_Storage;		//## link itsData_Storage
    
    Dispatch* itsDispatch;		//## link itsDispatch
    
    Garbage_Bin* itsGarbage_Bin;		//## link itsGarbage_Bin
    
    OMCollection<Garbage_Bin*> itsGarbage_Bin_1;		//## link itsGarbage_Bin_1
    
    OMCollection<Garbage_Bin*> itsGarbage_Bin_2;		//## link itsGarbage_Bin_2
    
    Main_Server* itsMain_Server;		//## link itsMain_Server
    
    SGCS* itsSGCS;		//## link itsSGCS
    
    ////    Framework operations    ////

public :

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
    void __setItsGarbage_Bin(Garbage_Bin* const p_Garbage_Bin);
    
    //## auto_generated
    void _setItsGarbage_Bin(Garbage_Bin* const p_Garbage_Bin);
    
    //## auto_generated
    void _clearItsGarbage_Bin(void);
    
    //## auto_generated
    void _addItsGarbage_Bin_1(Garbage_Bin* const p_Garbage_Bin);
    
    //## auto_generated
    void _removeItsGarbage_Bin_1(Garbage_Bin* const p_Garbage_Bin);
    
    //## auto_generated
    void _clearItsGarbage_Bin_1(void);
    
    //## auto_generated
    void _addItsGarbage_Bin_2(Garbage_Bin* const p_Garbage_Bin);
    
    //## auto_generated
    void _removeItsGarbage_Bin_2(Garbage_Bin* const p_Garbage_Bin);
    
    //## auto_generated
    void _clearItsGarbage_Bin_2(void);
    
    //## auto_generated
    void __setItsMain_Server(Main_Server* const p_Main_Server);
    
    //## auto_generated
    void _setItsMain_Server(Main_Server* const p_Main_Server);
    
    //## auto_generated
    void _clearItsMain_Server(void);
    
    //## auto_generated
    void __setItsSGCS(SGCS* const p_SGCS);
    
    //## auto_generated
    void _setItsSGCS(SGCS* const p_SGCS);
    
    //## auto_generated
    void _clearItsSGCS(void);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Communication_System.h
*********************************************************************/
