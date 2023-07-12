/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: SGCS
	Model Element	: Dispatch
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\SGCS\Dispatch.cpp
*********************************************************************/

//## auto_generated
#include "Dispatch.h"
//## link itsCommunication_System
#include "Communication_System.h"
//## link itsMain_Server
#include "Main_Server.h"
//## link itsTruck
#include "Truck.h"
//## package BDD

//## class Dispatch
Dispatch::Dispatch(void) : itsCommunication_System(NULL), itsMain_Server(NULL) {
}

Dispatch::~Dispatch(void) {
    cleanUpRelations();
}

const Communication_System* Dispatch::getItsCommunication_System(void) const {
    return itsCommunication_System;
}

void Dispatch::setItsCommunication_System(Communication_System* const p_Communication_System) {
    if(p_Communication_System != NULL)
        {
            p_Communication_System->_setItsDispatch(this);
        }
    _setItsCommunication_System(p_Communication_System);
}

const Main_Server* Dispatch::getItsMain_Server(void) const {
    return itsMain_Server;
}

void Dispatch::setItsMain_Server(Main_Server* const p_Main_Server) {
    if(p_Main_Server != NULL)
        {
            p_Main_Server->_setItsDispatch(this);
        }
    _setItsMain_Server(p_Main_Server);
}

OMIterator<Truck*> Dispatch::getItsTruck(void) const {
    OMIterator<Truck*> iter(itsTruck);
    return iter;
}

void Dispatch::addItsTruck(Truck* const p_Truck) {
    if(p_Truck != NULL)
        {
            p_Truck->_setItsDispatch(this);
        }
    _addItsTruck(p_Truck);
}

void Dispatch::removeItsTruck(Truck* p_Truck) {
    if(p_Truck != NULL)
        {
            p_Truck->__setItsDispatch(NULL);
        }
    _removeItsTruck(p_Truck);
}

void Dispatch::clearItsTruck(void) {
    OMIterator<Truck*> iter(itsTruck);
    while (*iter){
        (*iter)->_clearItsDispatch();
        iter++;
    }
    _clearItsTruck();
}

OMIterator<Truck*> Dispatch::getItsTruck_1(void) const {
    OMIterator<Truck*> iter(itsTruck_1);
    return iter;
}

void Dispatch::addItsTruck_1(Truck* const p_Truck) {
    if(p_Truck != NULL)
        {
            p_Truck->_setItsDispatch_1(this);
        }
    _addItsTruck_1(p_Truck);
}

void Dispatch::removeItsTruck_1(Truck* p_Truck) {
    if(p_Truck != NULL)
        {
            p_Truck->__setItsDispatch_1(NULL);
        }
    _removeItsTruck_1(p_Truck);
}

void Dispatch::clearItsTruck_1(void) {
    OMIterator<Truck*> iter(itsTruck_1);
    while (*iter){
        (*iter)->_clearItsDispatch_1();
        iter++;
    }
    _clearItsTruck_1();
}

void Dispatch::cleanUpRelations(void) {
    if(itsCommunication_System != NULL)
        {
            const Dispatch* p_Dispatch = itsCommunication_System->getItsDispatch();
            if(p_Dispatch != NULL)
                {
                    itsCommunication_System->__setItsDispatch(NULL);
                }
            itsCommunication_System = NULL;
        }
    if(itsMain_Server != NULL)
        {
            const Dispatch* p_Dispatch = itsMain_Server->getItsDispatch();
            if(p_Dispatch != NULL)
                {
                    itsMain_Server->__setItsDispatch(NULL);
                }
            itsMain_Server = NULL;
        }
    {
        OMIterator<Truck*> iter(itsTruck);
        while (*iter){
            const Dispatch* p_Dispatch = (*iter)->getItsDispatch();
            if(p_Dispatch != NULL)
                {
                    (*iter)->__setItsDispatch(NULL);
                }
            iter++;
        }
        itsTruck.removeAll();
    }
    {
        OMIterator<Truck*> iter(itsTruck_1);
        while (*iter){
            const Dispatch* p_Dispatch = (*iter)->getItsDispatch_1();
            if(p_Dispatch != NULL)
                {
                    (*iter)->__setItsDispatch_1(NULL);
                }
            iter++;
        }
        itsTruck_1.removeAll();
    }
}

void Dispatch::__setItsCommunication_System(Communication_System* const p_Communication_System) {
    itsCommunication_System = p_Communication_System;
}

void Dispatch::_setItsCommunication_System(Communication_System* const p_Communication_System) {
    if(itsCommunication_System != NULL)
        {
            itsCommunication_System->__setItsDispatch(NULL);
        }
    __setItsCommunication_System(p_Communication_System);
}

void Dispatch::_clearItsCommunication_System(void) {
    itsCommunication_System = NULL;
}

void Dispatch::__setItsMain_Server(Main_Server* const p_Main_Server) {
    itsMain_Server = p_Main_Server;
}

void Dispatch::_setItsMain_Server(Main_Server* const p_Main_Server) {
    if(itsMain_Server != NULL)
        {
            itsMain_Server->__setItsDispatch(NULL);
        }
    __setItsMain_Server(p_Main_Server);
}

void Dispatch::_clearItsMain_Server(void) {
    itsMain_Server = NULL;
}

void Dispatch::_addItsTruck(Truck* const p_Truck) {
    itsTruck.add(p_Truck);
}

void Dispatch::_removeItsTruck(Truck* const p_Truck) {
    itsTruck.remove(p_Truck);
}

void Dispatch::_clearItsTruck(void) {
    itsTruck.removeAll();
}

void Dispatch::_addItsTruck_1(Truck* const p_Truck) {
    itsTruck_1.add(p_Truck);
}

void Dispatch::_removeItsTruck_1(Truck* const p_Truck) {
    itsTruck_1.remove(p_Truck);
}

void Dispatch::_clearItsTruck_1(void) {
    itsTruck_1.removeAll();
}

/*********************************************************************
	File Path	: DefaultComponent\SGCS\Dispatch.cpp
*********************************************************************/
