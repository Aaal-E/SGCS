/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: Garbage_Bin_Simulation
	Model Element	: Garbage_Bin
//!	Generated Date	: Thu, 13, Jul 2023  
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Garbage_Bin.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Garbage_Bin.h"
//## link itsCommunication_System
#include "Communication_System.h"
//## link itsSGCS
#include "SGCS.h"
//#[ ignore
#define BDD_Garbage_Bin_Garbage_Bin_SERIALIZE OM_NO_OP
//#]

//## package BDD

//## class Garbage_Bin
Garbage_Bin::Garbage_Bin(IOxfActive* const theActiveContext) : OMReactive(), Capacity(7), Fill_level(0), Garbage_type("General"), itsCommunication_System(NULL), itsCommunication_System_1(NULL), itsCommunication_System_2(NULL), itsSGCS(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Garbage_Bin, Garbage_Bin(), 0, BDD_Garbage_Bin_Garbage_Bin_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

Garbage_Bin::~Garbage_Bin(void) {
    NOTIFY_DESTRUCTOR(~Garbage_Bin, true);
    cleanUpRelations();
}

const int Garbage_Bin::getCapacity(void) const {
    return Capacity;
}

void Garbage_Bin::setCapacity(const int p_Capacity) {
    Capacity = p_Capacity;
}

const float Garbage_Bin::getFill_level(void) const {
    return Fill_level;
}

void Garbage_Bin::setFill_level(const float p_Fill_level) {
    Fill_level = p_Fill_level;
    NOTIFY_SET_OPERATION;
}

const OMString Garbage_Bin::getGarbage_type(void) const {
    return Garbage_type;
}

void Garbage_Bin::setGarbage_type(const OMString p_Garbage_type) {
    Garbage_type = p_Garbage_type;
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
            NOTIFY_RELATION_CLEARED("itsCommunication_System");
            const Garbage_Bin* p_Garbage_Bin = itsCommunication_System->getItsGarbage_Bin();
            if(p_Garbage_Bin != NULL)
                {
                    itsCommunication_System->__setItsGarbage_Bin(NULL);
                }
            itsCommunication_System = NULL;
        }
    if(itsCommunication_System_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCommunication_System_1");
            Communication_System* current = itsCommunication_System_1;
            if(current != NULL)
                {
                    current->_removeItsGarbage_Bin_1(this);
                }
            itsCommunication_System_1 = NULL;
        }
    if(itsCommunication_System_2 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCommunication_System_2");
            Communication_System* current = itsCommunication_System_2;
            if(current != NULL)
                {
                    current->_removeItsGarbage_Bin_2(this);
                }
            itsCommunication_System_2 = NULL;
        }
    if(itsSGCS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSGCS");
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
    if(p_Communication_System != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCommunication_System", p_Communication_System, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCommunication_System");
        }
}

void Garbage_Bin::_setItsCommunication_System(Communication_System* const p_Communication_System) {
    if(itsCommunication_System != NULL)
        {
            itsCommunication_System->__setItsGarbage_Bin(NULL);
        }
    __setItsCommunication_System(p_Communication_System);
}

void Garbage_Bin::_clearItsCommunication_System(void) {
    NOTIFY_RELATION_CLEARED("itsCommunication_System");
    itsCommunication_System = NULL;
}

void Garbage_Bin::__setItsCommunication_System_1(Communication_System* const p_Communication_System) {
    itsCommunication_System_1 = p_Communication_System;
    if(p_Communication_System != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCommunication_System_1", p_Communication_System, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCommunication_System_1");
        }
}

void Garbage_Bin::_setItsCommunication_System_1(Communication_System* p_Communication_System) {
    if(itsCommunication_System_1 != NULL)
        {
            itsCommunication_System_1->_removeItsGarbage_Bin_1(this);
        }
    __setItsCommunication_System_1(p_Communication_System);
}

void Garbage_Bin::_clearItsCommunication_System_1(void) {
    NOTIFY_RELATION_CLEARED("itsCommunication_System_1");
    itsCommunication_System_1 = NULL;
}

void Garbage_Bin::__setItsCommunication_System_2(Communication_System* const p_Communication_System) {
    itsCommunication_System_2 = p_Communication_System;
    if(p_Communication_System != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCommunication_System_2", p_Communication_System, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCommunication_System_2");
        }
}

void Garbage_Bin::_setItsCommunication_System_2(Communication_System* p_Communication_System) {
    if(itsCommunication_System_2 != NULL)
        {
            itsCommunication_System_2->_removeItsGarbage_Bin_2(this);
        }
    __setItsCommunication_System_2(p_Communication_System);
}

void Garbage_Bin::_clearItsCommunication_System_2(void) {
    NOTIFY_RELATION_CLEARED("itsCommunication_System_2");
    itsCommunication_System_2 = NULL;
}

void Garbage_Bin::__setItsSGCS(SGCS* const p_SGCS) {
    itsSGCS = p_SGCS;
    if(p_SGCS != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSGCS", p_SGCS, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSGCS");
        }
}

void Garbage_Bin::_setItsSGCS(SGCS* p_SGCS) {
    if(itsSGCS != NULL)
        {
            itsSGCS->_removeItsGarbage_Bin(this);
        }
    __setItsSGCS(p_SGCS);
}

void Garbage_Bin::_clearItsSGCS(void) {
    NOTIFY_RELATION_CLEARED("itsSGCS");
    itsSGCS = NULL;
}

void Garbage_Bin::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("1");
        NOTIFY_STATE_ENTERED("ROOT.EmptyBin");
        pushNullTransition();
        rootState_subState = EmptyBin;
        rootState_active = EmptyBin;
        NOTIFY_TRANSITION_TERMINATED("1");
    }
}

IOxfReactive::TakeEventStatus Garbage_Bin::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State EmptyBin
        case EmptyBin:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    //## transition 2 
                    if(Fill_level >= Capacity )
                        {
                            NOTIFY_TRANSITION_STARTED("2");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.EmptyBin");
                            NOTIFY_STATE_ENTERED("ROOT.Fullbin");
                            rootState_subState = Fullbin;
                            rootState_active = Fullbin;
                            NOTIFY_TRANSITION_TERMINATED("2");
                            res = eventConsumed;
                        }
                }
            else {
                if(IS_EVENT_TYPE_OF(Add_garbage_BDD_id) == 1)
                    {
                        NOTIFY_TRANSITION_STARTED("0");
                        //#[ transition 0 
                        Fill_level += 1;
                        //#]
                        NOTIFY_TRANSITION_TERMINATED("0");
                        res = eventConsumed;
                    }
                }
                
            
        }
        break;
        // State Fullbin
        case Fullbin:
        {
            if(IS_EVENT_TYPE_OF(EmptyGarbage_BDD_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    NOTIFY_STATE_EXITED("ROOT.Fullbin");
                    NOTIFY_STATE_ENTERED("ROOT.IsEpmptying");
                    pushNullTransition();
                    rootState_subState = IsEpmptying;
                    rootState_active = IsEpmptying;
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
        }
        break;
        // State IsEpmptying
        case IsEpmptying:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.IsEpmptying");
                    //#[ transition 4 
                    Fill_level = 0;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.EmptyBin");
                    pushNullTransition();
                    rootState_subState = EmptyBin;
                    rootState_active = EmptyBin;
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedGarbage_Bin::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("Fill_level", x2String(myReal->Fill_level));
    aomsAttributes->addAttribute("Garbage_type", x2String(myReal->Garbage_type));
    aomsAttributes->addAttribute("Location", x2String(myReal->Location));
    aomsAttributes->addAttribute("Capacity", x2String(myReal->Capacity));
}

void OMAnimatedGarbage_Bin::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsCommunication_System", false, true);
    if(myReal->itsCommunication_System)
        {
            aomsRelations->ADD_ITEM(myReal->itsCommunication_System);
        }
    aomsRelations->addRelation("itsCommunication_System_1", false, true);
    if(myReal->itsCommunication_System_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsCommunication_System_1);
        }
    aomsRelations->addRelation("itsWeight_sensor", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsWeight_sensor);
    aomsRelations->addRelation("itsVolume_sensor", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsVolume_sensor);
    aomsRelations->addRelation("itsCommunication_System_2", false, true);
    if(myReal->itsCommunication_System_2)
        {
            aomsRelations->ADD_ITEM(myReal->itsCommunication_System_2);
        }
    aomsRelations->addRelation("itsTemperature_sensor", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsTemperature_sensor);
    aomsRelations->addRelation("itsSGCS", false, true);
    if(myReal->itsSGCS)
        {
            aomsRelations->ADD_ITEM(myReal->itsSGCS);
        }
}

void OMAnimatedGarbage_Bin::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Garbage_Bin::terminationstate_0:
        {
            terminationstate_0_serializeStates(aomsState);
        }
        break;
        case Garbage_Bin::EmptyBin:
        {
            EmptyBin_serializeStates(aomsState);
        }
        break;
        case Garbage_Bin::Fullbin:
        {
            Fullbin_serializeStates(aomsState);
        }
        break;
        case Garbage_Bin::IsEpmptying:
        {
            IsEpmptying_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedGarbage_Bin::terminationstate_0_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.terminationstate_0");
}

void OMAnimatedGarbage_Bin::IsEpmptying_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.IsEpmptying");
}

void OMAnimatedGarbage_Bin::Fullbin_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Fullbin");
}

void OMAnimatedGarbage_Bin::EmptyBin_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.EmptyBin");
}
//#]

IMPLEMENT_REACTIVE_META_P(Garbage_Bin, BDD, BDD, false, OMAnimatedGarbage_Bin)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Garbage_Bin.cpp
*********************************************************************/
