/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: Garbage_Bin_Simulation
	Model Element	: Garbage_Bin_Simulation
//!	Generated Date	: Thu, 13, Jul 2023  
	File Path	: DefaultComponent\Garbage_Bin_Simulation\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "Garbage_Bin.h"
//## auto_generated
#include "Truck.h"
RhpInteger main( void) {
    RhpInteger status = 0;
    try {
        if(OXF::initialize(0,NULL))
            {
                Garbage_Bin p_Garbage_Bin;
                p_Garbage_Bin.setShouldDelete(false);
                Truck p_Truck;
                p_Truck.setShouldDelete(false);
                (void) p_Garbage_Bin.startBehavior();
                (void) p_Truck.startBehavior();
                //#[ configuration DefaultComponent::Garbage_Bin_Simulation 
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
	File Path	: DefaultComponent\Garbage_Bin_Simulation\MainDefaultComponent.cpp
*********************************************************************/
