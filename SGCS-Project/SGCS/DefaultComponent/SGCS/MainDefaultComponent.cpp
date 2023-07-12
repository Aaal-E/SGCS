/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: SGCS
	Model Element	: SGCS
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\SGCS\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "Garbage_Bin.h"
RhpInteger main( void) {
    RhpInteger status = 0;
    try {
        if(OXF::initialize(0,NULL))
            {
                Garbage_Bin p_Garbage_Bin;
                p_Garbage_Bin.setShouldDelete(false);
                (void) p_Garbage_Bin.startBehavior();
                //#[ configuration DefaultComponent::SGCS 
                //#]
                OXF::start();
                status = 0;
            }
        else
            {
                status = 1;
            }
    }
    catch (...)
    {
        status = 0;
    }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\SGCS\MainDefaultComponent.cpp
*********************************************************************/
