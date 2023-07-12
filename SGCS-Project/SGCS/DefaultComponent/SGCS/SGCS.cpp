/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: SGCS
	Model Element	: SGCS
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\SGCS\SGCS.cpp
*********************************************************************/

//## auto_generated
#include "SGCS.h"
//## link itsCommunication_System
#include "Communication_System.h"
//## link itsElectricity_provider
#include "Electricity_provider.h"
//## link itsGarbage_Bin
#include "Garbage_Bin.h"
//## link itsGarbage_Disposal_Sites
#include "Garbage_Disposal_Sites.h"
//## link itsMain_Server
#include "Main_Server.h"
//## link itsRecycling_center
#include "Recycling_center.h"
//## link itsTemperature_sensor
#include "Temperature_sensor.h"
//## link itsTruck
#include "Truck.h"
//## link itsTruck_refuel_stations
#include "Truck_refuel_stations.h"
//## link itsUsers
#include "Users.h"
//## link itsVolume_sensor
#include "Volume_sensor.h"
//## link itsWeight_sensor
#include "Weight_sensor.h"
//## package BDD

//## class SGCS
SGCS::SGCS(void) : itsCommunication_System(NULL), itsElectricity_provider(NULL), itsGarbage_Disposal_Sites(NULL), itsMain_Server(NULL), itsRecycling_center(NULL), itsTemperature_sensor(NULL), itsTruck(NULL), itsTruck_refuel_stations(NULL), itsUsers(NULL), itsVolume_sensor(NULL), itsWeight_sensor(NULL) {
}

SGCS::~SGCS(void) {
    cleanUpRelations();
}

const Communication_System* SGCS::getItsCommunication_System(void) const {
    return itsCommunication_System;
}

void SGCS::setItsCommunication_System(Communication_System* const p_Communication_System) {
    if(p_Communication_System != NULL)
        {
            p_Communication_System->_setItsSGCS(this);
        }
    _setItsCommunication_System(p_Communication_System);
}

const Electricity_provider* SGCS::getItsElectricity_provider(void) const {
    return itsElectricity_provider;
}

void SGCS::setItsElectricity_provider(Electricity_provider* const p_Electricity_provider) {
    if(p_Electricity_provider != NULL)
        {
            p_Electricity_provider->_setItsSGCS(this);
        }
    _setItsElectricity_provider(p_Electricity_provider);
}

OMIterator<Garbage_Bin*> SGCS::getItsGarbage_Bin(void) const {
    OMIterator<Garbage_Bin*> iter(itsGarbage_Bin);
    return iter;
}

void SGCS::addItsGarbage_Bin(Garbage_Bin* const p_Garbage_Bin) {
    if(p_Garbage_Bin != NULL)
        {
            p_Garbage_Bin->_setItsSGCS(this);
        }
    _addItsGarbage_Bin(p_Garbage_Bin);
}

void SGCS::removeItsGarbage_Bin(Garbage_Bin* p_Garbage_Bin) {
    if(p_Garbage_Bin != NULL)
        {
            p_Garbage_Bin->__setItsSGCS(NULL);
        }
    _removeItsGarbage_Bin(p_Garbage_Bin);
}

void SGCS::clearItsGarbage_Bin(void) {
    OMIterator<Garbage_Bin*> iter(itsGarbage_Bin);
    while (*iter){
        (*iter)->_clearItsSGCS();
        iter++;
    }
    _clearItsGarbage_Bin();
}

const Garbage_Disposal_Sites* SGCS::getItsGarbage_Disposal_Sites(void) const {
    return itsGarbage_Disposal_Sites;
}

void SGCS::setItsGarbage_Disposal_Sites(Garbage_Disposal_Sites* const p_Garbage_Disposal_Sites) {
    if(p_Garbage_Disposal_Sites != NULL)
        {
            p_Garbage_Disposal_Sites->_setItsSGCS(this);
        }
    _setItsGarbage_Disposal_Sites(p_Garbage_Disposal_Sites);
}

const Main_Server* SGCS::getItsMain_Server(void) const {
    return itsMain_Server;
}

void SGCS::setItsMain_Server(Main_Server* const p_Main_Server) {
    if(p_Main_Server != NULL)
        {
            p_Main_Server->_setItsSGCS(this);
        }
    _setItsMain_Server(p_Main_Server);
}

const Recycling_center* SGCS::getItsRecycling_center(void) const {
    return itsRecycling_center;
}

void SGCS::setItsRecycling_center(Recycling_center* const p_Recycling_center) {
    if(p_Recycling_center != NULL)
        {
            p_Recycling_center->_setItsSGCS(this);
        }
    _setItsRecycling_center(p_Recycling_center);
}

const Garbage_Disposal_Sites::Software_Controllers* SGCS::getItsSoftware_Controllers(void) const {
    return &itsSoftware_Controllers;
}

const Temperature_sensor* SGCS::getItsTemperature_sensor(void) const {
    return itsTemperature_sensor;
}

void SGCS::setItsTemperature_sensor(Temperature_sensor* const p_Temperature_sensor) {
    if(p_Temperature_sensor != NULL)
        {
            p_Temperature_sensor->_setItsSGCS(this);
        }
    _setItsTemperature_sensor(p_Temperature_sensor);
}

const Truck* SGCS::getItsTruck(void) const {
    return itsTruck;
}

void SGCS::setItsTruck(Truck* const p_Truck) {
    if(p_Truck != NULL)
        {
            p_Truck->_setItsSGCS(this);
        }
    _setItsTruck(p_Truck);
}

const Truck_refuel_stations* SGCS::getItsTruck_refuel_stations(void) const {
    return itsTruck_refuel_stations;
}

void SGCS::setItsTruck_refuel_stations(Truck_refuel_stations* const p_Truck_refuel_stations) {
    if(p_Truck_refuel_stations != NULL)
        {
            p_Truck_refuel_stations->_setItsSGCS(this);
        }
    _setItsTruck_refuel_stations(p_Truck_refuel_stations);
}

const Users* SGCS::getItsUsers(void) const {
    return itsUsers;
}

void SGCS::setItsUsers(Users* const p_Users) {
    if(p_Users != NULL)
        {
            p_Users->_setItsSGCS(this);
        }
    _setItsUsers(p_Users);
}

const Volume_sensor* SGCS::getItsVolume_sensor(void) const {
    return itsVolume_sensor;
}

void SGCS::setItsVolume_sensor(Volume_sensor* const p_Volume_sensor) {
    if(p_Volume_sensor != NULL)
        {
            p_Volume_sensor->_setItsSGCS(this);
        }
    _setItsVolume_sensor(p_Volume_sensor);
}

const Weight_sensor* SGCS::getItsWeight_sensor(void) const {
    return itsWeight_sensor;
}

void SGCS::setItsWeight_sensor(Weight_sensor* const p_Weight_sensor) {
    if(p_Weight_sensor != NULL)
        {
            p_Weight_sensor->_setItsSGCS(this);
        }
    _setItsWeight_sensor(p_Weight_sensor);
}

void SGCS::cleanUpRelations(void) {
    if(itsCommunication_System != NULL)
        {
            const SGCS* p_SGCS = itsCommunication_System->getItsSGCS();
            if(p_SGCS != NULL)
                {
                    itsCommunication_System->__setItsSGCS(NULL);
                }
            itsCommunication_System = NULL;
        }
    if(itsElectricity_provider != NULL)
        {
            const SGCS* p_SGCS = itsElectricity_provider->getItsSGCS();
            if(p_SGCS != NULL)
                {
                    itsElectricity_provider->__setItsSGCS(NULL);
                }
            itsElectricity_provider = NULL;
        }
    {
        OMIterator<Garbage_Bin*> iter(itsGarbage_Bin);
        while (*iter){
            const SGCS* p_SGCS = (*iter)->getItsSGCS();
            if(p_SGCS != NULL)
                {
                    (*iter)->__setItsSGCS(NULL);
                }
            iter++;
        }
        itsGarbage_Bin.removeAll();
    }
    if(itsGarbage_Disposal_Sites != NULL)
        {
            const SGCS* p_SGCS = itsGarbage_Disposal_Sites->getItsSGCS();
            if(p_SGCS != NULL)
                {
                    itsGarbage_Disposal_Sites->__setItsSGCS(NULL);
                }
            itsGarbage_Disposal_Sites = NULL;
        }
    if(itsMain_Server != NULL)
        {
            const SGCS* p_SGCS = itsMain_Server->getItsSGCS();
            if(p_SGCS != NULL)
                {
                    itsMain_Server->__setItsSGCS(NULL);
                }
            itsMain_Server = NULL;
        }
    if(itsRecycling_center != NULL)
        {
            const SGCS* p_SGCS = itsRecycling_center->getItsSGCS();
            if(p_SGCS != NULL)
                {
                    itsRecycling_center->__setItsSGCS(NULL);
                }
            itsRecycling_center = NULL;
        }
    if(itsTemperature_sensor != NULL)
        {
            const SGCS* p_SGCS = itsTemperature_sensor->getItsSGCS();
            if(p_SGCS != NULL)
                {
                    itsTemperature_sensor->__setItsSGCS(NULL);
                }
            itsTemperature_sensor = NULL;
        }
    if(itsTruck != NULL)
        {
            const SGCS* p_SGCS = itsTruck->getItsSGCS();
            if(p_SGCS != NULL)
                {
                    itsTruck->__setItsSGCS(NULL);
                }
            itsTruck = NULL;
        }
    if(itsTruck_refuel_stations != NULL)
        {
            const SGCS* p_SGCS = itsTruck_refuel_stations->getItsSGCS();
            if(p_SGCS != NULL)
                {
                    itsTruck_refuel_stations->__setItsSGCS(NULL);
                }
            itsTruck_refuel_stations = NULL;
        }
    if(itsUsers != NULL)
        {
            const SGCS* p_SGCS = itsUsers->getItsSGCS();
            if(p_SGCS != NULL)
                {
                    itsUsers->__setItsSGCS(NULL);
                }
            itsUsers = NULL;
        }
    if(itsVolume_sensor != NULL)
        {
            const SGCS* p_SGCS = itsVolume_sensor->getItsSGCS();
            if(p_SGCS != NULL)
                {
                    itsVolume_sensor->__setItsSGCS(NULL);
                }
            itsVolume_sensor = NULL;
        }
    if(itsWeight_sensor != NULL)
        {
            const SGCS* p_SGCS = itsWeight_sensor->getItsSGCS();
            if(p_SGCS != NULL)
                {
                    itsWeight_sensor->__setItsSGCS(NULL);
                }
            itsWeight_sensor = NULL;
        }
}

void SGCS::__setItsCommunication_System(Communication_System* const p_Communication_System) {
    itsCommunication_System = p_Communication_System;
}

void SGCS::_setItsCommunication_System(Communication_System* const p_Communication_System) {
    if(itsCommunication_System != NULL)
        {
            itsCommunication_System->__setItsSGCS(NULL);
        }
    __setItsCommunication_System(p_Communication_System);
}

void SGCS::_clearItsCommunication_System(void) {
    itsCommunication_System = NULL;
}

void SGCS::__setItsElectricity_provider(Electricity_provider* const p_Electricity_provider) {
    itsElectricity_provider = p_Electricity_provider;
}

void SGCS::_setItsElectricity_provider(Electricity_provider* const p_Electricity_provider) {
    if(itsElectricity_provider != NULL)
        {
            itsElectricity_provider->__setItsSGCS(NULL);
        }
    __setItsElectricity_provider(p_Electricity_provider);
}

void SGCS::_clearItsElectricity_provider(void) {
    itsElectricity_provider = NULL;
}

void SGCS::_addItsGarbage_Bin(Garbage_Bin* const p_Garbage_Bin) {
    itsGarbage_Bin.add(p_Garbage_Bin);
}

void SGCS::_removeItsGarbage_Bin(Garbage_Bin* const p_Garbage_Bin) {
    itsGarbage_Bin.remove(p_Garbage_Bin);
}

void SGCS::_clearItsGarbage_Bin(void) {
    itsGarbage_Bin.removeAll();
}

void SGCS::__setItsGarbage_Disposal_Sites(Garbage_Disposal_Sites* const p_Garbage_Disposal_Sites) {
    itsGarbage_Disposal_Sites = p_Garbage_Disposal_Sites;
}

void SGCS::_setItsGarbage_Disposal_Sites(Garbage_Disposal_Sites* const p_Garbage_Disposal_Sites) {
    if(itsGarbage_Disposal_Sites != NULL)
        {
            itsGarbage_Disposal_Sites->__setItsSGCS(NULL);
        }
    __setItsGarbage_Disposal_Sites(p_Garbage_Disposal_Sites);
}

void SGCS::_clearItsGarbage_Disposal_Sites(void) {
    itsGarbage_Disposal_Sites = NULL;
}

void SGCS::__setItsMain_Server(Main_Server* const p_Main_Server) {
    itsMain_Server = p_Main_Server;
}

void SGCS::_setItsMain_Server(Main_Server* const p_Main_Server) {
    if(itsMain_Server != NULL)
        {
            itsMain_Server->__setItsSGCS(NULL);
        }
    __setItsMain_Server(p_Main_Server);
}

void SGCS::_clearItsMain_Server(void) {
    itsMain_Server = NULL;
}

void SGCS::__setItsRecycling_center(Recycling_center* const p_Recycling_center) {
    itsRecycling_center = p_Recycling_center;
}

void SGCS::_setItsRecycling_center(Recycling_center* const p_Recycling_center) {
    if(itsRecycling_center != NULL)
        {
            itsRecycling_center->__setItsSGCS(NULL);
        }
    __setItsRecycling_center(p_Recycling_center);
}

void SGCS::_clearItsRecycling_center(void) {
    itsRecycling_center = NULL;
}

void SGCS::__setItsTemperature_sensor(Temperature_sensor* const p_Temperature_sensor) {
    itsTemperature_sensor = p_Temperature_sensor;
}

void SGCS::_setItsTemperature_sensor(Temperature_sensor* const p_Temperature_sensor) {
    if(itsTemperature_sensor != NULL)
        {
            itsTemperature_sensor->__setItsSGCS(NULL);
        }
    __setItsTemperature_sensor(p_Temperature_sensor);
}

void SGCS::_clearItsTemperature_sensor(void) {
    itsTemperature_sensor = NULL;
}

void SGCS::__setItsTruck(Truck* const p_Truck) {
    itsTruck = p_Truck;
}

void SGCS::_setItsTruck(Truck* const p_Truck) {
    if(itsTruck != NULL)
        {
            itsTruck->__setItsSGCS(NULL);
        }
    __setItsTruck(p_Truck);
}

void SGCS::_clearItsTruck(void) {
    itsTruck = NULL;
}

void SGCS::__setItsTruck_refuel_stations(Truck_refuel_stations* const p_Truck_refuel_stations) {
    itsTruck_refuel_stations = p_Truck_refuel_stations;
}

void SGCS::_setItsTruck_refuel_stations(Truck_refuel_stations* const p_Truck_refuel_stations) {
    if(itsTruck_refuel_stations != NULL)
        {
            itsTruck_refuel_stations->__setItsSGCS(NULL);
        }
    __setItsTruck_refuel_stations(p_Truck_refuel_stations);
}

void SGCS::_clearItsTruck_refuel_stations(void) {
    itsTruck_refuel_stations = NULL;
}

void SGCS::__setItsUsers(Users* const p_Users) {
    itsUsers = p_Users;
}

void SGCS::_setItsUsers(Users* const p_Users) {
    if(itsUsers != NULL)
        {
            itsUsers->__setItsSGCS(NULL);
        }
    __setItsUsers(p_Users);
}

void SGCS::_clearItsUsers(void) {
    itsUsers = NULL;
}

void SGCS::__setItsVolume_sensor(Volume_sensor* const p_Volume_sensor) {
    itsVolume_sensor = p_Volume_sensor;
}

void SGCS::_setItsVolume_sensor(Volume_sensor* const p_Volume_sensor) {
    if(itsVolume_sensor != NULL)
        {
            itsVolume_sensor->__setItsSGCS(NULL);
        }
    __setItsVolume_sensor(p_Volume_sensor);
}

void SGCS::_clearItsVolume_sensor(void) {
    itsVolume_sensor = NULL;
}

void SGCS::__setItsWeight_sensor(Weight_sensor* const p_Weight_sensor) {
    itsWeight_sensor = p_Weight_sensor;
}

void SGCS::_setItsWeight_sensor(Weight_sensor* const p_Weight_sensor) {
    if(itsWeight_sensor != NULL)
        {
            itsWeight_sensor->__setItsSGCS(NULL);
        }
    __setItsWeight_sensor(p_Weight_sensor);
}

void SGCS::_clearItsWeight_sensor(void) {
    itsWeight_sensor = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\SGCS\SGCS.cpp
*********************************************************************/
