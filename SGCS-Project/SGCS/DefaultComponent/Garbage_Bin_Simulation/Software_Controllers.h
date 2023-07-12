/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: Garbage_Bin_Simulation
	Model Element	: Software_Controllers
//!	Generated Date	: Thu, 13, Jul 2023  
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Software_Controllers.h
*********************************************************************/

#ifndef Software_Controllers_H
#define Software_Controllers_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
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
#ifdef _OMINSTRUMENT
    OM_DECLARE_COMPOSITE_OFFSET
#endif // _OMINSTRUMENT

    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSoftware_Controllers;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
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

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSoftware_Controllers : virtual public AOMInstance {
    DECLARE_META(Software_Controllers, OMAnimatedSoftware_Controllers)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Software_Controllers.h
*********************************************************************/
