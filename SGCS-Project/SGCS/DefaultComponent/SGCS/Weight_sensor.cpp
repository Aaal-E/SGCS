/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: SGCS
	Model Element	: Weight_sensor
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\SGCS\Weight_sensor.cpp
*********************************************************************/

//## auto_generated
#include "Weight_sensor.h"
//## link itsSGCS
#include "SGCS.h"
//## package BDD

//## class Weight_sensor
Weight_sensor::Weight_sensor(void) : itsSGCS(NULL) {
}

Weight_sensor::~Weight_sensor(void) {
    cleanUpRelations();
}

const SGCS* Weight_sensor::getItsSGCS(void) const {
    return itsSGCS;
}

void Weight_sensor::setItsSGCS(SGCS* const p_SGCS) {
    if(p_SGCS != NULL)
        {
            p_SGCS->_setItsWeight_sensor(this);
        }
    _setItsSGCS(p_SGCS);
}

void Weight_sensor::cleanUpRelations(void) {
    if(itsSGCS != NULL)
        {
            const Weight_sensor* p_Weight_sensor = itsSGCS->getItsWeight_sensor();
            if(p_Weight_sensor != NULL)
                {
                    itsSGCS->__setItsWeight_sensor(NULL);
                }
            itsSGCS = NULL;
        }
}

void Weight_sensor::__setItsSGCS(SGCS* const p_SGCS) {
    itsSGCS = p_SGCS;
}

void Weight_sensor::_setItsSGCS(SGCS* const p_SGCS) {
    if(itsSGCS != NULL)
        {
            itsSGCS->__setItsWeight_sensor(NULL);
        }
    __setItsSGCS(p_SGCS);
}

void Weight_sensor::_clearItsSGCS(void) {
    itsSGCS = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\SGCS\Weight_sensor.cpp
*********************************************************************/
