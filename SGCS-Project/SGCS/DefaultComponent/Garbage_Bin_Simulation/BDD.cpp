/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: Garbage_Bin_Simulation
	Model Element	: BDD
//!	Generated Date	: Thu, 13, Jul 2023  
	File Path	: DefaultComponent\Garbage_Bin_Simulation\BDD.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "BDD.h"
//## auto_generated
#include "Analyzer.h"
//## auto_generated
#include "Communication_System.h"
//## auto_generated
#include "Data_Storage.h"
//## auto_generated
#include "Dispatch.h"
//## auto_generated
#include "Electricity_provider.h"
//## auto_generated
#include "Garbage_Bin.h"
//## auto_generated
#include "Garbage_Disposal_Sites.h"
//## auto_generated
#include "GPS.h"
//## auto_generated
#include "Main_Server.h"
//## auto_generated
#include "Recycling_center.h"
//## auto_generated
#include "SGCS.h"
//## auto_generated
#include "Software_Controllers.h"
//## auto_generated
#include "Temperature_sensor.h"
//## auto_generated
#include "Truck.h"
//## auto_generated
#include "Truck_refuel_stations.h"
//## auto_generated
#include "UC_Citizen_check_fill_level.h"
//## auto_generated
#include "UC_Citizen_deposit_garbage.h"
//## auto_generated
#include "UC_Collect_garbage.h"
//## auto_generated
#include "UC_Plan_route.h"
//## auto_generated
#include "UC_System_overview.h"
//## auto_generated
#include "Users.h"
//## auto_generated
#include "Volume_sensor.h"
//## auto_generated
#include "Web_Dashboard.h"
//## auto_generated
#include "Weight_sensor.h"
//#[ ignore
#define Add_garbage_SERIALIZE OM_NO_OP

#define Add_garbage_UNSERIALIZE OM_NO_OP

#define Add_garbage_CONSTRUCTOR Add_garbage()

#define event_58_SERIALIZE OM_NO_OP

#define event_58_UNSERIALIZE OM_NO_OP

#define event_58_CONSTRUCTOR event_58()

#define EmptyGarbage_SERIALIZE OM_NO_OP

#define EmptyGarbage_UNSERIALIZE OM_NO_OP

#define EmptyGarbage_CONSTRUCTOR EmptyGarbage()

#define RefuelingTruck_SERIALIZE OM_NO_OP

#define RefuelingTruck_UNSERIALIZE OM_NO_OP

#define RefuelingTruck_CONSTRUCTOR RefuelingTruck()

#define EmptyTruck_SERIALIZE OM_NO_OP

#define EmptyTruck_UNSERIALIZE OM_NO_OP

#define EmptyTruck_CONSTRUCTOR EmptyTruck()
//#]

//## package BDD


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances(void);

IMPLEMENT_META_PACKAGE(BDD, BDD)
#endif // _OMINSTRUMENT

void BDD_initRelations(void) {
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances(void) {
}
#endif // _OMINSTRUMENT

//## event Add_garbage()
Add_garbage::Add_garbage(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(Add_garbage)
    setId(Add_garbage_BDD_id);
}

//#[ ignore
const IOxfEvent::ID Add_garbage_BDD_id(9601);
//#]

IMPLEMENT_META_EVENT_P(Add_garbage, BDD, BDD, Add_garbage())

//## event event_58()
event_58::event_58(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(event_58)
    setId(event_58_BDD_id);
}

//#[ ignore
const IOxfEvent::ID event_58_BDD_id(9602);
//#]

IMPLEMENT_META_EVENT_P(event_58, BDD, BDD, event_58())

//## event EmptyGarbage()
EmptyGarbage::EmptyGarbage(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(EmptyGarbage)
    setId(EmptyGarbage_BDD_id);
}

//#[ ignore
const IOxfEvent::ID EmptyGarbage_BDD_id(9603);
//#]

IMPLEMENT_META_EVENT_P(EmptyGarbage, BDD, BDD, EmptyGarbage())

//## event RefuelingTruck()
RefuelingTruck::RefuelingTruck(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(RefuelingTruck)
    setId(RefuelingTruck_BDD_id);
}

//#[ ignore
const IOxfEvent::ID RefuelingTruck_BDD_id(9604);
//#]

IMPLEMENT_META_EVENT_P(RefuelingTruck, BDD, BDD, RefuelingTruck())

//## event EmptyTruck()
EmptyTruck::EmptyTruck(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(EmptyTruck)
    setId(EmptyTruck_BDD_id);
}

//#[ ignore
const IOxfEvent::ID EmptyTruck_BDD_id(9605);
//#]

IMPLEMENT_META_EVENT_P(EmptyTruck, BDD, BDD, EmptyTruck())

/*********************************************************************
	File Path	: DefaultComponent\Garbage_Bin_Simulation\BDD.cpp
*********************************************************************/
