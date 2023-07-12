/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: BDD
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\BDD.cpp
*********************************************************************/

//## auto_generated
#include "BDD.h"
//## classInstance itsElectricity_provider
#include "Electricity_provider.h"
//## classInstance itsGarbage_Disposal_Sites
#include "Garbage_Disposal_Sites.h"
//## classInstance part_0
#include "part_0.h"
//## classInstance itsRecycling_center
#include "Recycling_center.h"
//## classInstance itsTruck_refuel_stations
#include "Truck_refuel_stations.h"
//## classInstance itsUsers
#include "Users.h"
//## auto_generated
#include "Analyzer.h"
//## auto_generated
#include "block_39.h"
//## auto_generated
#include "Communication_System.h"
//## auto_generated
#include "Data_Storage.h"
//## auto_generated
#include "Dispatch.h"
//## auto_generated
#include "Garbage_Bin.h"
//## auto_generated
#include "GPS.h"
//## auto_generated
#include "Main_Server.h"
//## auto_generated
#include "SGCS.h"
//## auto_generated
#include "Software_Controllers.h"
//## auto_generated
#include "Temperature_sensor.h"
//## auto_generated
#include "Truck.h"
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
#include "Volume_sensor.h"
//## auto_generated
#include "Web_Dashboard.h"
//## auto_generated
#include "Weight_sensor.h"
//## package BDD


//## classInstance itsElectricity_provider
Electricity_provider itsElectricity_provider;

//## classInstance itsGarbage_Disposal_Sites
Garbage_Disposal_Sites itsGarbage_Disposal_Sites;

//## classInstance itsRecycling_center
Recycling_center itsRecycling_center;

//## classInstance itsTruck_refuel_stations
Truck_refuel_stations itsTruck_refuel_stations;

//## classInstance itsUsers
Users itsUsers;

//## classInstance part_0
part_0_C part_0;

//## event Add_garbage()
Add_garbage::Add_garbage(void) : OMEvent() {
    setId(Add_garbage_BDD_id);
}

//#[ ignore
const IOxfEvent::ID Add_garbage_BDD_id(9601);
//#]

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\BDD.cpp
*********************************************************************/
