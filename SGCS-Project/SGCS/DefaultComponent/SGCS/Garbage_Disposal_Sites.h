/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: SGCS
	Model Element	: Garbage_Disposal_Sites
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\SGCS\Garbage_Disposal_Sites.h
*********************************************************************/

#ifndef Garbage_Disposal_Sites_H
#define Garbage_Disposal_Sites_H

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
//## link itsSGCS
class SGCS;

//## package BDD

//## class Garbage_Disposal_Sites
class Garbage_Disposal_Sites {
public :

    //## class Garbage_Disposal_Sites::Software_Controllers
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

#endif
/*********************************************************************
	File Path	: DefaultComponent\SGCS\Garbage_Disposal_Sites.h
*********************************************************************/
