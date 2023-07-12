/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Volume_sensor
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Volume_sensor.cpp
*********************************************************************/

//## auto_generated
#include "Volume_sensor.h"
//## link itsSGCS
#include "SGCS.h"
//## package BDD

//## class Volume_sensor
Volume_sensor::Volume_sensor(void) : itsSGCS(NULL) {
}

Volume_sensor::~Volume_sensor(void) {
    cleanUpRelations();
}

const SGCS* Volume_sensor::getItsSGCS(void) const {
    return itsSGCS;
}

void Volume_sensor::setItsSGCS(SGCS* const p_SGCS) {
    if(p_SGCS != NULL)
        {
            p_SGCS->_setItsVolume_sensor(this);
        }
    _setItsSGCS(p_SGCS);
}

void Volume_sensor::cleanUpRelations(void) {
    if(itsSGCS != NULL)
        {
            const Volume_sensor* p_Volume_sensor = itsSGCS->getItsVolume_sensor();
            if(p_Volume_sensor != NULL)
                {
                    itsSGCS->__setItsVolume_sensor(NULL);
                }
            itsSGCS = NULL;
        }
}

void Volume_sensor::__setItsSGCS(SGCS* const p_SGCS) {
    itsSGCS = p_SGCS;
}

void Volume_sensor::_setItsSGCS(SGCS* const p_SGCS) {
    if(itsSGCS != NULL)
        {
            itsSGCS->__setItsVolume_sensor(NULL);
        }
    __setItsSGCS(p_SGCS);
}

void Volume_sensor::_clearItsSGCS(void) {
    itsSGCS = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Volume_sensor.cpp
*********************************************************************/
