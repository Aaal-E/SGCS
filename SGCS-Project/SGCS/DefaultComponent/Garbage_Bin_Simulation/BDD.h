/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: Garbage_Bin_Simulation
	Model Element	: BDD
//!	Generated Date	: Thu, 13, Jul 2023  
	File Path	: DefaultComponent\Garbage_Bin_Simulation\BDD.h
*********************************************************************/

#ifndef BDD_H
#define BDD_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
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

//## auto_generated
class Electricity_provider;

//## auto_generated
class GPS;

//## auto_generated
class Garbage_Bin;

//## auto_generated
class Garbage_Disposal_Sites;

//## auto_generated
class Main_Server;

//## auto_generated
class Recycling_center;

//## auto_generated
class SGCS;

//## auto_generated
class Software_Controllers;

//## auto_generated
class Temperature_sensor;

//## auto_generated
class Truck;

//## auto_generated
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

//## auto_generated
class Users;

//## auto_generated
class Volume_sensor;

//## auto_generated
class Web_Dashboard;

//## auto_generated
class Weight_sensor;

//## package BDD


//## auto_generated
void BDD_initRelations(void);

//## event Add_garbage()
class Add_garbage : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedAdd_garbage;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Add_garbage(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedAdd_garbage : virtual public AOMEvent {
    DECLARE_META_EVENT(Add_garbage)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID Add_garbage_BDD_id;
//#]

//## event event_58()
class event_58 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevent_58;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    event_58(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevent_58 : virtual public AOMEvent {
    DECLARE_META_EVENT(event_58)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID event_58_BDD_id;
//#]

//## event EmptyGarbage()
class EmptyGarbage : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedEmptyGarbage;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    EmptyGarbage(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedEmptyGarbage : virtual public AOMEvent {
    DECLARE_META_EVENT(EmptyGarbage)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID EmptyGarbage_BDD_id;
//#]

//## event RefuelingTruck()
class RefuelingTruck : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedRefuelingTruck;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    RefuelingTruck(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedRefuelingTruck : virtual public AOMEvent {
    DECLARE_META_EVENT(RefuelingTruck)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID RefuelingTruck_BDD_id;
//#]

//## event EmptyTruck()
class EmptyTruck : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedEmptyTruck;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    EmptyTruck(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedEmptyTruck : virtual public AOMEvent {
    DECLARE_META_EVENT(EmptyTruck)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID EmptyTruck_BDD_id;
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\Garbage_Bin_Simulation\BDD.h
*********************************************************************/
