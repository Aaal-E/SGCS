/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Software_Controllers
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Software_Controllers.h
*********************************************************************/

#ifndef Software_Controllers_H
#define Software_Controllers_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include "BDD.h"
//## classInstance itsUC_Citizen_check_fill_level
#include "UC_Citizen_check_fill_level.h"
//## classInstance itsUC_Citizen_deposit_garbage
#include "UC_Citizen_deposit_garbage.h"
//## classInstance itsUC_Collect_garbage
#include "UC_Collect_garbage.h"
//## classInstance itsUC_Plan_route
#include "UC_Plan_route.h"
//## classInstance itsUC_System_overview
#include "UC_System_overview.h"
//## package BDD

//## class Software_Controllers
class Software_Controllers {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Software_Controllers(void);
    
    //## auto_generated
    ~Software_Controllers(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const UC_Citizen_check_fill_level* getItsUC_Citizen_check_fill_level(void) const;
    
    //## auto_generated
    const UC_Citizen_deposit_garbage* getItsUC_Citizen_deposit_garbage(void) const;
    
    //## auto_generated
    const UC_Collect_garbage* getItsUC_Collect_garbage(void) const;
    
    //## auto_generated
    const UC_Plan_route* getItsUC_Plan_route(void) const;
    
    //## auto_generated
    const UC_System_overview* getItsUC_System_overview(void) const;
    
    ////    Relations and components    ////

private :

    UC_Citizen_check_fill_level itsUC_Citizen_check_fill_level;		//## classInstance itsUC_Citizen_check_fill_level
    
    UC_Citizen_deposit_garbage itsUC_Citizen_deposit_garbage;		//## classInstance itsUC_Citizen_deposit_garbage
    
    UC_Collect_garbage itsUC_Collect_garbage;		//## classInstance itsUC_Collect_garbage
    
    UC_Plan_route itsUC_Plan_route;		//## classInstance itsUC_Plan_route
    
    UC_System_overview itsUC_System_overview;		//## classInstance itsUC_System_overview
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Software_Controllers.h
*********************************************************************/
