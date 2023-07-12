/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: Garbage_Bin_Simulation
	Model Element	: Volume_sensor
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Volume_sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Volume_sensor.h"
//## link itsSGCS
#include "SGCS.h"
//#[ ignore
#define BDD_Volume_sensor_Volume_sensor_SERIALIZE OM_NO_OP
//#]

//## package BDD

//## class Volume_sensor
Volume_sensor::Volume_sensor(void) : itsSGCS(NULL) {
    NOTIFY_CONSTRUCTOR(Volume_sensor, Volume_sensor(), 0, BDD_Volume_sensor_Volume_sensor_SERIALIZE);
}

Volume_sensor::~Volume_sensor(void) {
    NOTIFY_DESTRUCTOR(~Volume_sensor, true);
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
            NOTIFY_RELATION_CLEARED("itsSGCS");
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
    if(p_SGCS != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSGCS", p_SGCS, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSGCS");
        }
}

void Volume_sensor::_setItsSGCS(SGCS* const p_SGCS) {
    if(itsSGCS != NULL)
        {
            itsSGCS->__setItsVolume_sensor(NULL);
        }
    __setItsSGCS(p_SGCS);
}

void Volume_sensor::_clearItsSGCS(void) {
    NOTIFY_RELATION_CLEARED("itsSGCS");
    itsSGCS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedVolume_sensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSGCS", false, true);
    if(myReal->itsSGCS)
        {
            aomsRelations->ADD_ITEM(myReal->itsSGCS);
        }
}
//#]

IMPLEMENT_META_P(Volume_sensor, BDD, BDD, false, OMAnimatedVolume_sensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Volume_sensor.cpp
*********************************************************************/
