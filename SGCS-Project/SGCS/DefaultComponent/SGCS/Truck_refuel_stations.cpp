/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: SGCS
	Model Element	: Truck_refuel_stations
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\SGCS\Truck_refuel_stations.cpp
*********************************************************************/

//## auto_generated
#include "Truck_refuel_stations.h"
//## link itsSGCS
#include "SGCS.h"
//## package BDD

//## class Truck_refuel_stations
Truck_refuel_stations::Truck_refuel_stations(void) : itsSGCS(NULL) {
}

Truck_refuel_stations::~Truck_refuel_stations(void) {
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
}

void Truck_refuel_stations::_setItsSGCS(SGCS* const p_SGCS) {
    if(itsSGCS != NULL)
        {
            itsSGCS->__setItsTruck_refuel_stations(NULL);
        }
    __setItsSGCS(p_SGCS);
}

void Truck_refuel_stations::_clearItsSGCS(void) {
    itsSGCS = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\SGCS\Truck_refuel_stations.cpp
*********************************************************************/
