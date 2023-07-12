/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: Garbage_Bin_Simulation
	Model Element	: Weight_sensor
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Weight_sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Weight_sensor.h"
//## link itsSGCS
#include "SGCS.h"
//#[ ignore
#define BDD_Weight_sensor_Weight_sensor_SERIALIZE OM_NO_OP
//#]

//## package BDD

//## class Weight_sensor
Weight_sensor::Weight_sensor(void) : itsSGCS(NULL) {
    NOTIFY_CONSTRUCTOR(Weight_sensor, Weight_sensor(), 0, BDD_Weight_sensor_Weight_sensor_SERIALIZE);
}

Weight_sensor::~Weight_sensor(void) {
    NOTIFY_DESTRUCTOR(~Weight_sensor, true);
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
            NOTIFY_RELATION_CLEARED("itsSGCS");
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
    if(p_SGCS != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSGCS", p_SGCS, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSGCS");
        }
}

void Weight_sensor::_setItsSGCS(SGCS* const p_SGCS) {
    if(itsSGCS != NULL)
        {
            itsSGCS->__setItsWeight_sensor(NULL);
        }
    __setItsSGCS(p_SGCS);
}

void Weight_sensor::_clearItsSGCS(void) {
    NOTIFY_RELATION_CLEARED("itsSGCS");
    itsSGCS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedWeight_sensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSGCS", false, true);
    if(myReal->itsSGCS)
        {
            aomsRelations->ADD_ITEM(myReal->itsSGCS);
        }
}
//#]

IMPLEMENT_META_P(Weight_sensor, BDD, BDD, false, OMAnimatedWeight_sensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Weight_sensor.cpp
*********************************************************************/
