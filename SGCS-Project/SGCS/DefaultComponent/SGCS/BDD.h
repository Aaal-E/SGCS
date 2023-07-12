/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: SGCS
	Model Element	: BDD
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\SGCS\BDD.h
*********************************************************************/

#ifndef BDD_H
#define BDD_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <event.h>
//## auto_generated
class Analyzer;

//## auto_generated
class Communication_System;

//## auto_generated
class Data_Storage;

//## auto_generated
class Dispatch;

//## classInstance itsElectricity_provider
class Electricity_provider;

//## auto_generated
class GPS;

//## auto_generated
class Garbage_Bin;

//## classInstance itsGarbage_Disposal_Sites
class Garbage_Disposal_Sites;

//## auto_generated
class Main_Server;

//## classInstance itsRecycling_center
class Recycling_center;

//## auto_generated
class SGCS;

//## auto_generated
class Temperature_sensor;

//## auto_generated
class Truck;

//## classInstance itsTruck_refuel_stations
class Truck_refuel_stations;

//## auto_generated
class UC_Citizen_check_fill_level;

//## auto_generated
class UC_Citizen_deposit_garbage;

//## auto_generated
class UC_Collect_garbage;

//## auto_generated
class UC_Plan_route;

//## auto_generated
class UC_System_overview;

//## classInstance itsUsers
class Users;

//## auto_generated
class Volume_sensor;

//## auto_generated
class Web_Dashboard;

//## auto_generated
class Weight_sensor;

//## auto_generated
class block_39;

//## classInstance part_0
class part_0_C;

//## package BDD


//## classInstance itsElectricity_provider
extern Electricity_provider itsElectricity_provider;

//## classInstance itsGarbage_Disposal_Sites
extern Garbage_Disposal_Sites itsGarbage_Disposal_Sites;

//## classInstance itsRecycling_center
extern Recycling_center itsRecycling_center;

//## classInstance itsTruck_refuel_stations
extern Truck_refuel_stations itsTruck_refuel_stations;

//## classInstance itsUsers
extern Users itsUsers;

//## classInstance part_0
extern part_0_C part_0;

//## event Add_garbage()
class Add_garbage : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Add_garbage(void);
};

//#[ ignore
extern const IOxfEvent::ID Add_garbage_BDD_id;
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\SGCS\BDD.h
*********************************************************************/
