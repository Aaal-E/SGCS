/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: Garbage_Bin_Simulation
	Model Element	: Truck
//!	Generated Date	: Thu, 13, Jul 2023  
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Truck.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Truck.h"
//## link itsDispatch
#include "Dispatch.h"
//## link itsSGCS
#include "SGCS.h"
//#[ ignore
#define BDD_Truck_Truck_SERIALIZE OM_NO_OP
//#]

//## package BDD

//## class Truck
Truck::Truck(IOxfActive* const theActiveContext) : OMReactive(), Capacity(100), Fill_level(0), Fuel_level(100), Garbage_type("General"), itsDispatch(NULL), itsDispatch_1(NULL), itsSGCS(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Truck, Truck(), 0, BDD_Truck_Truck_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

Truck::~Truck(void) {
    NOTIFY_DESTRUCTOR(~Truck, true);
    cleanUpRelations();
}

const int Truck::getCapacity(void) const {
    return Capacity;
}

void Truck::setCapacity(const int p_Capacity) {
    Capacity = p_Capacity;
}

const float Truck::getFill_level(void) const {
    return Fill_level;
}

void Truck::setFill_level(const float p_Fill_level) {
    Fill_level = p_Fill_level;
    NOTIFY_SET_OPERATION;
}

const float Truck::getFuel_level(void) const {
    return Fuel_level;
}

void Truck::setFuel_level(const float p_Fuel_level) {
    Fuel_level = p_Fuel_level;
}

const OMString Truck::getGarbage_type(void) const {
    return Garbage_type;
}

void Truck::setGarbage_type(const OMString p_Garbage_type) {
    Garbage_type = p_Garbage_type;
}

const Dispatch* Truck::getItsDispatch(void) const {
    return itsDispatch;
}

void Truck::setItsDispatch(Dispatch* const p_Dispatch) {
    if(p_Dispatch != NULL)
        {
            p_Dispatch->_addItsTruck(this);
        }
    _setItsDispatch(p_Dispatch);
}

const Dispatch* Truck::getItsDispatch_1(void) const {
    return itsDispatch_1;
}

void Truck::setItsDispatch_1(Dispatch* const p_Dispatch) {
    if(p_Dispatch != NULL)
        {
            p_Dispatch->_addItsTruck_1(this);
        }
    _setItsDispatch_1(p_Dispatch);
}

const GPS* Truck::getItsGPS(void) const {
    return &itsGPS;
}

const GPS* Truck::getItsGPS_1(void) const {
    return &itsGPS_1;
}

const SGCS* Truck::getItsSGCS(void) const {
    return itsSGCS;
}

void Truck::setItsSGCS(SGCS* const p_SGCS) {
    if(p_SGCS != NULL)
        {
            p_SGCS->_setItsTruck(this);
        }
    _setItsSGCS(p_SGCS);
}

bool Truck::startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = OMReactive::startBehavior();
        }
    return done;
}

void Truck::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Truck::cleanUpRelations(void) {
    if(itsDispatch != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDispatch");
            Dispatch* current = itsDispatch;
            if(current != NULL)
                {
                    current->_removeItsTruck(this);
                }
            itsDispatch = NULL;
        }
    if(itsDispatch_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDispatch_1");
            Dispatch* current = itsDispatch_1;
            if(current != NULL)
                {
                    current->_removeItsTruck_1(this);
                }
            itsDispatch_1 = NULL;
        }
    if(itsSGCS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSGCS");
            const Truck* p_Truck = itsSGCS->getItsTruck();
            if(p_Truck != NULL)
                {
                    itsSGCS->__setItsTruck(NULL);
                }
            itsSGCS = NULL;
        }
}

void Truck::__setItsDispatch(Dispatch* const p_Dispatch) {
    itsDispatch = p_Dispatch;
    if(p_Dispatch != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDispatch", p_Dispatch, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDispatch");
        }
}

void Truck::_setItsDispatch(Dispatch* p_Dispatch) {
    if(itsDispatch != NULL)
        {
            itsDispatch->_removeItsTruck(this);
        }
    __setItsDispatch(p_Dispatch);
}

void Truck::_clearItsDispatch(void) {
    NOTIFY_RELATION_CLEARED("itsDispatch");
    itsDispatch = NULL;
}

void Truck::__setItsDispatch_1(Dispatch* const p_Dispatch) {
    itsDispatch_1 = p_Dispatch;
    if(p_Dispatch != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDispatch_1", p_Dispatch, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDispatch_1");
        }
}

void Truck::_setItsDispatch_1(Dispatch* p_Dispatch) {
    if(itsDispatch_1 != NULL)
        {
            itsDispatch_1->_removeItsTruck_1(this);
        }
    __setItsDispatch_1(p_Dispatch);
}

void Truck::_clearItsDispatch_1(void) {
    NOTIFY_RELATION_CLEARED("itsDispatch_1");
    itsDispatch_1 = NULL;
}

void Truck::__setItsSGCS(SGCS* const p_SGCS) {
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

void Truck::_setItsSGCS(SGCS* const p_SGCS) {
    if(itsSGCS != NULL)
        {
            itsSGCS->__setItsTruck(NULL);
        }
    __setItsSGCS(p_SGCS);
}

void Truck::_clearItsSGCS(void) {
    NOTIFY_RELATION_CLEARED("itsSGCS");
    itsSGCS = NULL;
}

void Truck::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.NotFullTruck");
        pushNullTransition();
        rootState_subState = NotFullTruck;
        rootState_active = NotFullTruck;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Truck::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State NotFullTruck
        case NotFullTruck:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    //## transition 1 
                    if(Fill_level >= Capacity)
                        {
                            NOTIFY_TRANSITION_STARTED("1");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.NotFullTruck");
                            NOTIFY_STATE_ENTERED("ROOT.FullTruck");
                            rootState_subState = FullTruck;
                            rootState_active = FullTruck;
                            NOTIFY_TRANSITION_TERMINATED("1");
                            res = eventConsumed;
                        }
                    else
                        {
                            //## transition 5 
                            if(Fuel_level <= 0)
                                {
                                    NOTIFY_TRANSITION_STARTED("5");
                                    popNullTransition();
                                    NOTIFY_STATE_EXITED("ROOT.NotFullTruck");
                                    NOTIFY_STATE_ENTERED("ROOT.OutFuelTruck");
                                    rootState_subState = OutFuelTruck;
                                    rootState_active = OutFuelTruck;
                                    NOTIFY_TRANSITION_TERMINATED("5");
                                    res = eventConsumed;
                                }
                        }
                }
            else {
                if(IS_EVENT_TYPE_OF(EmptyGarbage_BDD_id) == 1)
                    {
                        NOTIFY_TRANSITION_STARTED("4");
                        //#[ transition 4 
                        Fill_level += 7;
                        Fuel_level -= 1;
                        //#]
                        NOTIFY_TRANSITION_TERMINATED("4");
                        res = eventConsumed;
                    }
                }
                
            
        }
        break;
        // State FullTruck
        case FullTruck:
        {
            if(IS_EVENT_TYPE_OF(EmptyTruck_BDD_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.FullTruck");
                    NOTIFY_STATE_ENTERED("ROOT.Emptying_truck");
                    pushNullTransition();
                    rootState_subState = Emptying_truck;
                    rootState_active = Emptying_truck;
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Emptying_truck
        case Emptying_truck:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Emptying_truck");
                    //#[ transition 3 
                    Fill_level = 0;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.NotFullTruck");
                    pushNullTransition();
                    rootState_subState = NotFullTruck;
                    rootState_active = NotFullTruck;
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
        }
        break;
        // State OutFuelTruck
        case OutFuelTruck:
        {
            if(IS_EVENT_TYPE_OF(RefuelingTruck_BDD_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    NOTIFY_STATE_EXITED("ROOT.OutFuelTruck");
                    //#[ transition 6 
                    Fuel_level = 100;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.NotFullTruck");
                    pushNullTransition();
                    rootState_subState = NotFullTruck;
                    rootState_active = NotFullTruck;
                    NOTIFY_TRANSITION_TERMINATED("6");
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
void OMAnimatedTruck::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("Garbage_type", x2String(myReal->Garbage_type));
    aomsAttributes->addAttribute("Fill_level", x2String(myReal->Fill_level));
    aomsAttributes->addAttribute("Fuel_level", x2String(myReal->Fuel_level));
    aomsAttributes->addAttribute("Capacity", x2String(myReal->Capacity));
}

void OMAnimatedTruck::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDispatch", false, true);
    if(myReal->itsDispatch)
        {
            aomsRelations->ADD_ITEM(myReal->itsDispatch);
        }
    aomsRelations->addRelation("itsDispatch_1", false, true);
    if(myReal->itsDispatch_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsDispatch_1);
        }
    aomsRelations->addRelation("itsGPS", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsGPS);
    aomsRelations->addRelation("itsGPS_1", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsGPS_1);
    aomsRelations->addRelation("itsSGCS", false, true);
    if(myReal->itsSGCS)
        {
            aomsRelations->ADD_ITEM(myReal->itsSGCS);
        }
}

void OMAnimatedTruck::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Truck::NotFullTruck:
        {
            NotFullTruck_serializeStates(aomsState);
        }
        break;
        case Truck::FullTruck:
        {
            FullTruck_serializeStates(aomsState);
        }
        break;
        case Truck::Emptying_truck:
        {
            Emptying_truck_serializeStates(aomsState);
        }
        break;
        case Truck::OutFuelTruck:
        {
            OutFuelTruck_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedTruck::OutFuelTruck_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.OutFuelTruck");
}

void OMAnimatedTruck::NotFullTruck_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NotFullTruck");
}

void OMAnimatedTruck::FullTruck_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.FullTruck");
}

void OMAnimatedTruck::Emptying_truck_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Emptying_truck");
}
//#]

IMPLEMENT_REACTIVE_META_P(Truck, BDD, BDD, false, OMAnimatedTruck)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Truck.cpp
*********************************************************************/
