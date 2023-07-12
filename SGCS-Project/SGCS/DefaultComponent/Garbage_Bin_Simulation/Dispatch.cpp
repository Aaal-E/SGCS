/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: Garbage_Bin_Simulation
	Model Element	: Dispatch
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Dispatch.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Dispatch.h"
//## link itsCommunication_System
#include "Communication_System.h"
//## link itsMain_Server
#include "Main_Server.h"
//## link itsTruck
#include "Truck.h"
//#[ ignore
#define BDD_Dispatch_Dispatch_SERIALIZE OM_NO_OP
//#]

//## package BDD

//## class Dispatch
Dispatch::Dispatch(void) : itsCommunication_System(NULL), itsMain_Server(NULL) {
    NOTIFY_CONSTRUCTOR(Dispatch, Dispatch(), 0, BDD_Dispatch_Dispatch_SERIALIZE);
}

Dispatch::~Dispatch(void) {
    NOTIFY_DESTRUCTOR(~Dispatch, true);
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
            NOTIFY_RELATION_CLEARED("itsCommunication_System");
            const Dispatch* p_Dispatch = itsCommunication_System->getItsDispatch();
            if(p_Dispatch != NULL)
                {
                    itsCommunication_System->__setItsDispatch(NULL);
                }
            itsCommunication_System = NULL;
        }
    if(itsMain_Server != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsMain_Server");
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
    if(p_Communication_System != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCommunication_System", p_Communication_System, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCommunication_System");
        }
}

void Dispatch::_setItsCommunication_System(Communication_System* const p_Communication_System) {
    if(itsCommunication_System != NULL)
        {
            itsCommunication_System->__setItsDispatch(NULL);
        }
    __setItsCommunication_System(p_Communication_System);
}

void Dispatch::_clearItsCommunication_System(void) {
    NOTIFY_RELATION_CLEARED("itsCommunication_System");
    itsCommunication_System = NULL;
}

void Dispatch::__setItsMain_Server(Main_Server* const p_Main_Server) {
    itsMain_Server = p_Main_Server;
    if(p_Main_Server != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsMain_Server", p_Main_Server, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsMain_Server");
        }
}

void Dispatch::_setItsMain_Server(Main_Server* const p_Main_Server) {
    if(itsMain_Server != NULL)
        {
            itsMain_Server->__setItsDispatch(NULL);
        }
    __setItsMain_Server(p_Main_Server);
}

void Dispatch::_clearItsMain_Server(void) {
    NOTIFY_RELATION_CLEARED("itsMain_Server");
    itsMain_Server = NULL;
}

void Dispatch::_addItsTruck(Truck* const p_Truck) {
    if(p_Truck != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTruck", p_Truck, false, false);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTruck");
        }
    itsTruck.add(p_Truck);
}

void Dispatch::_removeItsTruck(Truck* const p_Truck) {
    NOTIFY_RELATION_ITEM_REMOVED("itsTruck", p_Truck);
    itsTruck.remove(p_Truck);
}

void Dispatch::_clearItsTruck(void) {
    NOTIFY_RELATION_CLEARED("itsTruck");
    itsTruck.removeAll();
}

void Dispatch::_addItsTruck_1(Truck* const p_Truck) {
    if(p_Truck != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTruck_1", p_Truck, false, false);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTruck_1");
        }
    itsTruck_1.add(p_Truck);
}

void Dispatch::_removeItsTruck_1(Truck* const p_Truck) {
    NOTIFY_RELATION_ITEM_REMOVED("itsTruck_1", p_Truck);
    itsTruck_1.remove(p_Truck);
}

void Dispatch::_clearItsTruck_1(void) {
    NOTIFY_RELATION_CLEARED("itsTruck_1");
    itsTruck_1.removeAll();
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDispatch::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTruck", false, false);
    {
        OMIterator<Truck*> iter(myReal->itsTruck);
        while (*iter){
            aomsRelations->ADD_ITEM(*iter);
            iter++;
        }
    }
    aomsRelations->addRelation("itsCommunication_System", false, true);
    if(myReal->itsCommunication_System)
        {
            aomsRelations->ADD_ITEM(myReal->itsCommunication_System);
        }
    aomsRelations->addRelation("itsTruck_1", false, false);
    {
        OMIterator<Truck*> iter(myReal->itsTruck_1);
        while (*iter){
            aomsRelations->ADD_ITEM(*iter);
            iter++;
        }
    }
    aomsRelations->addRelation("itsMain_Server", false, true);
    if(myReal->itsMain_Server)
        {
            aomsRelations->ADD_ITEM(myReal->itsMain_Server);
        }
}
//#]

IMPLEMENT_META_P(Dispatch, BDD, BDD, false, OMAnimatedDispatch)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Dispatch.cpp
*********************************************************************/
