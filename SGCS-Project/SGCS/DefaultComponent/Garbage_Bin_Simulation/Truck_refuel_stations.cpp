/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: Garbage_Bin_Simulation
	Model Element	: Truck_refuel_stations
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Truck_refuel_stations.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Truck_refuel_stations.h"
//## link itsSGCS
#include "SGCS.h"
//#[ ignore
#define BDD_Truck_refuel_stations_Truck_refuel_stations_SERIALIZE OM_NO_OP
//#]

//## package BDD

//## class Truck_refuel_stations
Truck_refuel_stations::Truck_refuel_stations(void) : itsSGCS(NULL) {
    NOTIFY_CONSTRUCTOR(Truck_refuel_stations, Truck_refuel_stations(), 0, BDD_Truck_refuel_stations_Truck_refuel_stations_SERIALIZE);
}

Truck_refuel_stations::~Truck_refuel_stations(void) {
    NOTIFY_DESTRUCTOR(~Truck_refuel_stations, true);
    cleanUpRelations();
}

const SGCS* Truck_refuel_stations::getItsSGCS(void) const {
    return itsSGCS;
}

void Truck_refuel_stations::setItsSGCS(SGCS* const p_SGCS) {
    if(p_SGCS != NULL)
        {
            p_SGCS->_setItsTruck_refuel_stations(this);
        }
    _setItsSGCS(p_SGCS);
}

void Truck_refuel_stations::cleanUpRelations(void) {
    if(itsSGCS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSGCS");
            const Truck_refuel_stations* p_Truck_refuel_stations = itsSGCS->getItsTruck_refuel_stations();
            if(p_Truck_refuel_stations != NULL)
                {
                    itsSGCS->__setItsTruck_refuel_stations(NULL);
                }
            itsSGCS = NULL;
        }
}

void Truck_refuel_stations::__setItsSGCS(SGCS* const p_SGCS) {
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

void Truck_refuel_stations::_setItsSGCS(SGCS* const p_SGCS) {
    if(itsSGCS != NULL)
        {
            itsSGCS->__setItsTruck_refuel_stations(NULL);
        }
    __setItsSGCS(p_SGCS);
}

void Truck_refuel_stations::_clearItsSGCS(void) {
    NOTIFY_RELATION_CLEARED("itsSGCS");
    itsSGCS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTruck_refuel_stations::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSGCS", false, true);
    if(myReal->itsSGCS)
        {
            aomsRelations->ADD_ITEM(myReal->itsSGCS);
        }
}
//#]

IMPLEMENT_META_P(Truck_refuel_stations, BDD, BDD, false, OMAnimatedTruck_refuel_stations)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Truck_refuel_stations.cpp
*********************************************************************/
