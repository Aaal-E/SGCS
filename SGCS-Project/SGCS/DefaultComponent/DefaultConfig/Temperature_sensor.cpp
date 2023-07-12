/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Temperature_sensor
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Temperature_sensor.cpp
*********************************************************************/

//## auto_generated
#include "Temperature_sensor.h"
//## link itsSGCS
#include "SGCS.h"
//## package BDD

//## class Temperature_sensor
Temperature_sensor::Temperature_sensor(void) : itsSGCS(NULL), itsTemperature_sensor(NULL), itsTemperature_sensor_1(NULL) {
}

Temperature_sensor::~Temperature_sensor(void) {
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
            const Temperature_sensor* p_Temperature_sensor = itsSGCS->getItsTemperature_sensor();
            if(p_Temperature_sensor != NULL)
                {
                    itsSGCS->__setItsTemperature_sensor(NULL);
                }
            itsSGCS = NULL;
        }
    if(itsTemperature_sensor != NULL)
        {
            const Temperature_sensor* p_Temperature_sensor = itsTemperature_sensor->getItsTemperature_sensor_1();
            if(p_Temperature_sensor != NULL)
                {
                    itsTemperature_sensor->__setItsTemperature_sensor_1(NULL);
                }
            itsTemperature_sensor = NULL;
        }
    if(itsTemperature_sensor_1 != NULL)
        {
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
}

void Temperature_sensor::_setItsSGCS(SGCS* const p_SGCS) {
    if(itsSGCS != NULL)
        {
            itsSGCS->__setItsTemperature_sensor(NULL);
        }
    __setItsSGCS(p_SGCS);
}

void Temperature_sensor::_clearItsSGCS(void) {
    itsSGCS = NULL;
}

void Temperature_sensor::__setItsTemperature_sensor(Temperature_sensor* const p_Temperature_sensor) {
    itsTemperature_sensor = p_Temperature_sensor;
}

void Temperature_sensor::_setItsTemperature_sensor(Temperature_sensor* const p_Temperature_sensor) {
    if(itsTemperature_sensor != NULL)
        {
            itsTemperature_sensor->__setItsTemperature_sensor_1(NULL);
        }
    __setItsTemperature_sensor(p_Temperature_sensor);
}

void Temperature_sensor::_clearItsTemperature_sensor(void) {
    itsTemperature_sensor = NULL;
}

void Temperature_sensor::__setItsTemperature_sensor_1(Temperature_sensor* const p_Temperature_sensor) {
    itsTemperature_sensor_1 = p_Temperature_sensor;
}

void Temperature_sensor::_setItsTemperature_sensor_1(Temperature_sensor* const p_Temperature_sensor) {
    if(itsTemperature_sensor_1 != NULL)
        {
            itsTemperature_sensor_1->__setItsTemperature_sensor(NULL);
        }
    __setItsTemperature_sensor_1(p_Temperature_sensor);
}

void Temperature_sensor::_clearItsTemperature_sensor_1(void) {
    itsTemperature_sensor_1 = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Temperature_sensor.cpp
*********************************************************************/
