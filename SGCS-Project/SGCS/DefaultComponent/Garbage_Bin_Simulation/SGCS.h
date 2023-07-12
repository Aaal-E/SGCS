/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: Garbage_Bin_Simulation
	Model Element	: SGCS
//!	Generated Date	: Thu, 13, Jul 2023  
	File Path	: DefaultComponent\Garbage_Bin_Simulation\SGCS.h
*********************************************************************/

#ifndef SGCS_H
#define SGCS_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "BDD.h"
//## auto_generated
#include "omcollec.h"
//## classInstance itsSoftware_Controllers
#include "Software_Controllers.h"
//## link itsCommunication_System
class Communication_System;

//## link itsElectricity_provider
class Electricity_provider;

//## link itsGarbage_Bin
class Garbage_Bin;

//## link itsGarbage_Disposal_Sites
class Garbage_Disposal_Sites;

//## link itsMain_Server
class Main_Server;

//## link itsRecycling_center
class Recycling_center;

//## link itsTemperature_sensor
class Temperature_sensor;

//## link itsTruck
class Truck;

//## link itsTruck_refuel_stations
class Truck_refuel_stations;

//## link itsUsers
class Users;

//## link itsVolume_sensor
class Volume_sensor;

//## link itsWeight_sensor
class Weight_sensor;

//## package BDD

//## class SGCS
class SGCS {
#ifdef _OMINSTRUMENT
    OM_DECLARE_COMPOSITE_OFFSET
#endif // _OMINSTRUMENT

    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSGCS;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SGCS(void);
    
    //## auto_generated
    ~SGCS(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const Communication_System* getItsCommunication_System(void) const;
    
    //## auto_generated
    void setItsCommunication_System(Communication_System* const p_Communication_System);
    
    //## auto_generated
    const Electricity_provider* getItsElectricity_provider(void) const;
    
    //## auto_generated
    void setItsElectricity_provider(Electricity_provider* const p_Electricity_provider);
    
    //## auto_generated
    OMIterator<Garbage_Bin*> getItsGarbage_Bin(void) const;
    
    //## auto_generated
    void addItsGarbage_Bin(Garbage_Bin* const p_Garbage_Bin);
    
    //## auto_generated
    void removeItsGarbage_Bin(Garbage_Bin* p_Garbage_Bin);
    
    //## auto_generated
    void clearItsGarbage_Bin(void);
    
    //## auto_generated
    const Garbage_Disposal_Sites* getItsGarbage_Disposal_Sites(void) const;
    
    //## auto_generated
    void setItsGarbage_Disposal_Sites(Garbage_Disposal_Sites* const p_Garbage_Disposal_Sites);
    
    //## auto_generated
    const Main_Server* getItsMain_Server(void) const;
    
    //## auto_generated
    void setItsMain_Server(Main_Server* const p_Main_Server);
    
    //## auto_generated
    const Recycling_center* getItsRecycling_center(void) const;
    
    //## auto_generated
    void setItsRecycling_center(Recycling_center* const p_Recycling_center);
    
    //## auto_generated
    const Software_Controllers* getItsSoftware_Controllers(void) const;
    
    //## auto_generated
    const Temperature_sensor* getItsTemperature_sensor(void) const;
    
    //## auto_generated
    void setItsTemperature_sensor(Temperature_sensor* const p_Temperature_sensor);
    
    //## auto_generated
    const Truck* getItsTruck(void) const;
    
    //## auto_generated
    void setItsTruck(Truck* const p_Truck);
    
    //## auto_generated
    const Truck_refuel_stations* getItsTruck_refuel_stations(void) const;
    
    //## auto_generated
    void setItsTruck_refuel_stations(Truck_refuel_stations* const p_Truck_refuel_stations);
    
    //## auto_generated
    const Users* getItsUsers(void) const;
    
    //## auto_generated
    void setItsUsers(Users* const p_Users);
    
    //## auto_generated
    const Volume_sensor* getItsVolume_sensor(void) const;
    
    //## auto_generated
    void setItsVolume_sensor(Volume_sensor* const p_Volume_sensor);
    
    //## auto_generated
    const Weight_sensor* getItsWeight_sensor(void) const;
    
    //## auto_generated
    void setItsWeight_sensor(Weight_sensor* const p_Weight_sensor);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    Communication_System* itsCommunication_System;		//## link itsCommunication_System
    
    Electricity_provider* itsElectricity_provider;		//## link itsElectricity_provider
    
    OMCollection<Garbage_Bin*> itsGarbage_Bin;		//## link itsGarbage_Bin
    
    Garbage_Disposal_Sites* itsGarbage_Disposal_Sites;		//## link itsGarbage_Disposal_Sites
    
    Main_Server* itsMain_Server;		//## link itsMain_Server
    
    Recycling_center* itsRecycling_center;		//## link itsRecycling_center
    
    Software_Controllers itsSoftware_Controllers;		//## classInstance itsSoftware_Controllers
    
    Temperature_sensor* itsTemperature_sensor;		//## link itsTemperature_sensor
    
    Truck* itsTruck;		//## link itsTruck
    
    Truck_refuel_stations* itsTruck_refuel_stations;		//## link itsTruck_refuel_stations
    
    Users* itsUsers;		//## link itsUsers
    
    Volume_sensor* itsVolume_sensor;		//## link itsVolume_sensor
    
    Weight_sensor* itsWeight_sensor;		//## link itsWeight_sensor
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsCommunication_System(Communication_System* const p_Communication_System);
    
    //## auto_generated
    void _setItsCommunication_System(Communication_System* const p_Communication_System);
    
    //## auto_generated
    void _clearItsCommunication_System(void);
    
    //## auto_generated
    void __setItsElectricity_provider(Electricity_provider* const p_Electricity_provider);
    
    //## auto_generated
    void _setItsElectricity_provider(Electricity_provider* const p_Electricity_provider);
    
    //## auto_generated
    void _clearItsElectricity_provider(void);
    
    //## auto_generated
    void _addItsGarbage_Bin(Garbage_Bin* const p_Garbage_Bin);
    
    //## auto_generated
    void _removeItsGarbage_Bin(Garbage_Bin* const p_Garbage_Bin);
    
    //## auto_generated
    void _clearItsGarbage_Bin(void);
    
    //## auto_generated
    void __setItsGarbage_Disposal_Sites(Garbage_Disposal_Sites* const p_Garbage_Disposal_Sites);
    
    //## auto_generated
    void _setItsGarbage_Disposal_Sites(Garbage_Disposal_Sites* const p_Garbage_Disposal_Sites);
    
    //## auto_generated
    void _clearItsGarbage_Disposal_Sites(void);
    
    //## auto_generated
    void __setItsMain_Server(Main_Server* const p_Main_Server);
    
    //## auto_generated
    void _setItsMain_Server(Main_Server* const p_Main_Server);
    
    //## auto_generated
    void _clearItsMain_Server(void);
    
    //## auto_generated
    void __setItsRecycling_center(Recycling_center* const p_Recycling_center);
    
    //## auto_generated
    void _setItsRecycling_center(Recycling_center* const p_Recycling_center);
    
    //## auto_generated
    void _clearItsRecycling_center(void);
    
    //## auto_generated
    void __setItsTemperature_sensor(Temperature_sensor* const p_Temperature_sensor);
    
    //## auto_generated
    void _setItsTemperature_sensor(Temperature_sensor* const p_Temperature_sensor);
    
    //## auto_generated
    void _clearItsTemperature_sensor(void);
    
    //## auto_generated
    void __setItsTruck(Truck* const p_Truck);
    
    //## auto_generated
    void _setItsTruck(Truck* const p_Truck);
    
    //## auto_generated
    void _clearItsTruck(void);
    
    //## auto_generated
    void __setItsTruck_refuel_stations(Truck_refuel_stations* const p_Truck_refuel_stations);
    
    //## auto_generated
    void _setItsTruck_refuel_stations(Truck_refuel_stations* const p_Truck_refuel_stations);
    
    //## auto_generated
    void _clearItsTruck_refuel_stations(void);
    
    //## auto_generated
    void __setItsUsers(Users* const p_Users);
    
    //## auto_generated
    void _setItsUsers(Users* const p_Users);
    
    //## auto_generated
    void _clearItsUsers(void);
    
    //## auto_generated
    void __setItsVolume_sensor(Volume_sensor* const p_Volume_sensor);
    
    //## auto_generated
    void _setItsVolume_sensor(Volume_sensor* const p_Volume_sensor);
    
    //## auto_generated
    void _clearItsVolume_sensor(void);
    
    //## auto_generated
    void __setItsWeight_sensor(Weight_sensor* const p_Weight_sensor);
    
    //## auto_generated
    void _setItsWeight_sensor(Weight_sensor* const p_Weight_sensor);
    
    //## auto_generated
    void _clearItsWeight_sensor(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSGCS : virtual public AOMInstance {
    DECLARE_META(SGCS, OMAnimatedSGCS)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Garbage_Bin_Simulation\SGCS.h
*********************************************************************/
