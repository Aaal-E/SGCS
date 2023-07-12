/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: Garbage_Bin_Simulation
	Model Element	: Temperature_sensor
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Temperature_sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Temperature_sensor.h"
//## link itsSGCS
#include "SGCS.h"
//#[ ignore
#define BDD_Temperature_sensor_Temperature_sensor_SERIALIZE OM_NO_OP
//#]

//## package BDD

//## class Temperature_sensor
Temperature_sensor::Temperature_sensor(void) : itsSGCS(NULL), itsTemperature_sensor(NULL), itsTemperature_sensor_1(NULL) {
    NOTIFY_CONSTRUCTOR(Temperature_sensor, Temperature_sensor(), 0, BDD_Temperature_sensor_Temperature_sensor_SERIALIZE);
}

Temperature_sensor::~Temperature_sensor(void) {
    NOTIFY_DESTRUCTOR(~Temperature_sensor, true);
    cleanUpRelations();
}

const SGCS* Temperature_sensor::getItsSGCS(void) const {
    return itsSGCS;
}

void Temperature_sensor::setItsSGCS(SGCS* const p_SGCS) {
    if(p_SGCS != NULL)
        {
            p_SGCS->_setItsTemperature_sensor(this);
        }
    _setItsSGCS(p_SGCS);
}

const Temperature_sensor* Temperature_sensor::getItsTemperature_sensor(void) const {
    return itsTemperature_sensor;
}

void Temperature_sensor::setItsTemperature_sensor(Temperature_sensor* const p_Temperature_sensor) {
    if(p_Temperature_sensor != NULL)
        {
            p_Temperature_sensor->_setItsTemperature_sensor_1(this);
        }
    _setItsTemperature_sensor(p_Temperature_sensor);
}

const Temperature_sensor* Temperature_sensor::getItsTemperature_sensor_1(void) const {
    return itsTemperature_sensor_1;
}

void Temperature_sensor::setItsTemperature_sensor_1(Temperature_sensor* const p_Temperature_sensor) {
    if(p_Temperature_sensor != NULL)
        {
            p_Temperature_sensor->_setItsTemperature_sensor(this);
        }
    _setItsTemperature_sensor_1(p_Temperature_sensor);
}

void Temperature_sensor::cleanUpRelations(void) {
    if(itsSGCS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSGCS");
            const Temperature_sensor* p_Temperature_sensor = itsSGCS->getItsTemperature_sensor();
            if(p_Temperature_sensor != NULL)
                {
                    itsSGCS->__setItsTemperature_sensor(NULL);
                }
            itsSGCS = NULL;
        }
    if(itsTemperature_sensor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTemperature_sensor");
            const Temperature_sensor* p_Temperature_sensor = itsTemperature_sensor->getItsTemperature_sensor_1();
            if(p_Temperature_sensor != NULL)
                {
                    itsTemperature_sensor->__setItsTemperature_sensor_1(NULL);
                }
            itsTemperature_sensor = NULL;
        }
    if(itsTemperature_sensor_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTemperature_sensor_1");
            const Temperature_sensor* p_Temperature_sensor = itsTemperature_sensor_1->getItsTemperature_sensor();
            if(p_Temperature_sensor != NULL)
                {
                    itsTemperature_sensor_1->__setItsTemperature_sensor(NULL);
                }
            itsTemperature_sensor_1 = NULL;
        }
}

void Temperature_sensor::__setItsSGCS(SGCS* const p_SGCS) {
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

void Temperature_sensor::_setItsSGCS(SGCS* const p_SGCS) {
    if(itsSGCS != NULL)
        {
            itsSGCS->__setItsTemperature_sensor(NULL);
        }
    __setItsSGCS(p_SGCS);
}

void Temperature_sensor::_clearItsSGCS(void) {
    NOTIFY_RELATION_CLEARED("itsSGCS");
    itsSGCS = NULL;
}

void Temperature_sensor::__setItsTemperature_sensor(Temperature_sensor* const p_Temperature_sensor) {
    itsTemperature_sensor = p_Temperature_sensor;
    if(p_Temperature_sensor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTemperature_sensor", p_Temperature_sensor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTemperature_sensor");
        }
}

void Temperature_sensor::_setItsTemperature_sensor(Temperature_sensor* const p_Temperature_sensor) {
    if(itsTemperature_sensor != NULL)
        {
            itsTemperature_sensor->__setItsTemperature_sensor_1(NULL);
        }
    __setItsTemperature_sensor(p_Temperature_sensor);
}

void Temperature_sensor::_clearItsTemperature_sensor(void) {
    NOTIFY_RELATION_CLEARED("itsTemperature_sensor");
    itsTemperature_sensor = NULL;
}

void Temperature_sensor::__setItsTemperature_sensor_1(Temperature_sensor* const p_Temperature_sensor) {
    itsTemperature_sensor_1 = p_Temperature_sensor;
    if(p_Temperature_sensor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTemperature_sensor_1", p_Temperature_sensor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTemperature_sensor_1");
        }
}

void Temperature_sensor::_setItsTemperature_sensor_1(Temperature_sensor* const p_Temperature_sensor) {
    if(itsTemperature_sensor_1 != NULL)
        {
            itsTemperature_sensor_1->__setItsTemperature_sensor(NULL);
        }
    __setItsTemperature_sensor_1(p_Temperature_sensor);
}

void Temperature_sensor::_clearItsTemperature_sensor_1(void) {
    NOTIFY_RELATION_CLEARED("itsTemperature_sensor_1");
    itsTemperature_sensor_1 = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTemperature_sensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTemperature_sensor", false, true);
    if(myReal->itsTemperature_sensor)
        {
            aomsRelations->ADD_ITEM(myReal->itsTemperature_sensor);
        }
    aomsRelations->addRelation("itsTemperature_sensor_1", false, true);
    if(myReal->itsTemperature_sensor_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsTemperature_sensor_1);
        }
    aomsRelations->addRelation("itsSGCS", false, true);
    if(myReal->itsSGCS)
        {
            aomsRelations->ADD_ITEM(myReal->itsSGCS);
        }
}
//#]

IMPLEMENT_META_P(Temperature_sensor, BDD, BDD, false, OMAnimatedTemperature_sensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Temperature_sensor.cpp
*********************************************************************/
