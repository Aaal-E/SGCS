/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: SGCS
	Model Element	: Garbage_Bin
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\SGCS\Garbage_Bin.cpp
*********************************************************************/

//## auto_generated
#include <omthread.h>
//## auto_generated
#include "Garbage_Bin.h"
//## link itsCommunication_System
#include "Communication_System.h"
//## link itsSGCS
#include "SGCS.h"
//## package BDD

//## class Garbage_Bin
Garbage_Bin::Garbage_Bin(IOxfActive* const theActiveContext) : OMReactive(), Fill_level(0), Garbage_type("General"), itsCommunication_System(NULL), itsCommunication_System_1(NULL), itsCommunication_System_2(NULL), itsSGCS(NULL) {
    setActiveContext(theActiveContext, false);
    initStatechart();
}

Garbage_Bin::~Garbage_Bin(void) {
    cleanUpRelations();
}

const int Garbage_Bin::getFill_level(void) const {
    return Fill_level;
}

void Garbage_Bin::setFill_level(const int p_Fill_level) {
    Fill_level = p_Fill_level;
}

const OMString Garbage_Bin::getGarbage_type(void) const {
    return Garbage_type;
}

const int Garbage_Bin::getLocation(void) const {
    return Location;
}

void Garbage_Bin::setLocation(const int p_Location) {
    Location = p_Location;
}

const Communication_System* Garbage_Bin::getItsCommunication_System(void) const {
    return itsCommunication_System;
}

void Garbage_Bin::setItsCommunication_System(Communication_System* const p_Communication_System) {
    if(p_Communication_System != NULL)
        {
            p_Communication_System->_setItsGarbage_Bin(this);
        }
    _setItsCommunication_System(p_Communication_System);
}

const Communication_System* Garbage_Bin::getItsCommunication_System_1(void) const {
    return itsCommunication_System_1;
}

void Garbage_Bin::setItsCommunication_System_1(Communication_System* const p_Communication_System) {
    if(p_Communication_System != NULL)
        {
            p_Communication_System->_addItsGarbage_Bin_1(this);
        }
    _setItsCommunication_System_1(p_Communication_System);
}

const Communication_System* Garbage_Bin::getItsCommunication_System_2(void) const {
    return itsCommunication_System_2;
}

void Garbage_Bin::setItsCommunication_System_2(Communication_System* const p_Communication_System) {
    if(p_Communication_System != NULL)
        {
            p_Communication_System->_addItsGarbage_Bin_2(this);
        }
    _setItsCommunication_System_2(p_Communication_System);
}

const SGCS* Garbage_Bin::getItsSGCS(void) const {
    return itsSGCS;
}

void Garbage_Bin::setItsSGCS(SGCS* const p_SGCS) {
    if(p_SGCS != NULL)
        {
            p_SGCS->_addItsGarbage_Bin(this);
        }
    _setItsSGCS(p_SGCS);
}

const Temperature_sensor* Garbage_Bin::getItsTemperature_sensor(void) const {
    return &itsTemperature_sensor;
}

const Volume_sensor* Garbage_Bin::getItsVolume_sensor(void) const {
    return &itsVolume_sensor;
}

const Weight_sensor* Garbage_Bin::getItsWeight_sensor(void) const {
    return &itsWeight_sensor;
}

bool Garbage_Bin::startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = OMReactive::startBehavior();
        }
    return done;
}

void Garbage_Bin::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Garbage_Bin::cleanUpRelations(void) {
    if(itsCommunication_System != NULL)
        {
            const Garbage_Bin* p_Garbage_Bin = itsCommunication_System->getItsGarbage_Bin();
            if(p_Garbage_Bin != NULL)
                {
                    itsCommunication_System->__setItsGarbage_Bin(NULL);
                }
            itsCommunication_System = NULL;
        }
    if(itsCommunication_System_1 != NULL)
        {
            Communication_System* current = itsCommunication_System_1;
            if(current != NULL)
                {
                    current->_removeItsGarbage_Bin_1(this);
                }
            itsCommunication_System_1 = NULL;
        }
    if(itsCommunication_System_2 != NULL)
        {
            Communication_System* current = itsCommunication_System_2;
            if(current != NULL)
                {
                    current->_removeItsGarbage_Bin_2(this);
                }
            itsCommunication_System_2 = NULL;
        }
    if(itsSGCS != NULL)
        {
            SGCS* current = itsSGCS;
            if(current != NULL)
                {
                    current->_removeItsGarbage_Bin(this);
                }
            itsSGCS = NULL;
        }
}

void Garbage_Bin::__setItsCommunication_System(Communication_System* const p_Communication_System) {
    itsCommunication_System = p_Communication_System;
}

void Garbage_Bin::_setItsCommunication_System(Communication_System* const p_Communication_System) {
    if(itsCommunication_System != NULL)
        {
            itsCommunication_System->__setItsGarbage_Bin(NULL);
        }
    __setItsCommunication_System(p_Communication_System);
}

void Garbage_Bin::_clearItsCommunication_System(void) {
    itsCommunication_System = NULL;
}

void Garbage_Bin::__setItsCommunication_System_1(Communication_System* const p_Communication_System) {
    itsCommunication_System_1 = p_Communication_System;
}

void Garbage_Bin::_setItsCommunication_System_1(Communication_System* p_Communication_System) {
    if(itsCommunication_System_1 != NULL)
        {
            itsCommunication_System_1->_removeItsGarbage_Bin_1(this);
        }
    __setItsCommunication_System_1(p_Communication_System);
}

void Garbage_Bin::_clearItsCommunication_System_1(void) {
    itsCommunication_System_1 = NULL;
}

void Garbage_Bin::__setItsCommunication_System_2(Communication_System* const p_Communication_System) {
    itsCommunication_System_2 = p_Communication_System;
}

void Garbage_Bin::_setItsCommunication_System_2(Communication_System* p_Communication_System) {
    if(itsCommunication_System_2 != NULL)
        {
            itsCommunication_System_2->_removeItsGarbage_Bin_2(this);
        }
    __setItsCommunication_System_2(p_Communication_System);
}

void Garbage_Bin::_clearItsCommunication_System_2(void) {
    itsCommunication_System_2 = NULL;
}

void Garbage_Bin::__setItsSGCS(SGCS* const p_SGCS) {
    itsSGCS = p_SGCS;
}

void Garbage_Bin::_setItsSGCS(SGCS* p_SGCS) {
    if(itsSGCS != NULL)
        {
            itsSGCS->_removeItsGarbage_Bin(this);
        }
    __setItsSGCS(p_SGCS);
}

void Garbage_Bin::_clearItsSGCS(void) {
    itsSGCS = NULL;
}

void Garbage_Bin::setGarbage_type(const OMString p_Garbage_type) {
    Garbage_type = p_Garbage_type;
}

void Garbage_Bin::rootState_entDef(void) {
    {
        rootState_subState = EmptyBin;
        rootState_active = EmptyBin;
    }
}

IOxfReactive::TakeEventStatus Garbage_Bin::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State EmptyBin
    if(rootState_active == EmptyBin)
        {
            if(IS_EVENT_TYPE_OF(Add_garbage_BDD_id) == 1)
                {
                    //#[ transition 0 
                    Fill_level += 1;
                    //#]
                    res = eventConsumed;
                }
            
        }
    return res;
}

/*********************************************************************
	File Path	: DefaultComponent\SGCS\Garbage_Bin.cpp
*********************************************************************/
