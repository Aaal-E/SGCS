/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: Garbage_Bin_Simulation
	Model Element	: Driver
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Driver.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Driver.h"
//#[ ignore
#define UCs_Driver_Driver_SERIALIZE OM_NO_OP
//#]

//## package UCs

//## actor Driver
Driver::Driver(void) {
    NOTIFY_CONSTRUCTOR(Driver, Driver(), 0, UCs_Driver_Driver_SERIALIZE);
}

Driver::~Driver(void) {
    NOTIFY_DESTRUCTOR(~Driver, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDriver::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(Driver, UCs, UCs, false, OMAnimatedDriver)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Driver.cpp
*********************************************************************/
