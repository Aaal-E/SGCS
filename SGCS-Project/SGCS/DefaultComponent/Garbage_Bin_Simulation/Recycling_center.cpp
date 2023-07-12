/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: Garbage_Bin_Simulation
	Model Element	: Recycling_center
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Recycling_center.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Recycling_center.h"
//## link itsSGCS
#include "SGCS.h"
//#[ ignore
#define BDD_Recycling_center_Recycling_center_SERIALIZE OM_NO_OP
//#]

//## package BDD

//## class Recycling_center
Recycling_center::Recycling_center(void) : itsSGCS(NULL) {
    NOTIFY_CONSTRUCTOR(Recycling_center, Recycling_center(), 0, BDD_Recycling_center_Recycling_center_SERIALIZE);
}

Recycling_center::~Recycling_center(void) {
    NOTIFY_DESTRUCTOR(~Recycling_center, true);
    cleanUpRelations();
}

const SGCS* Recycling_center::getItsSGCS(void) const {
    return itsSGCS;
}

void Recycling_center::setItsSGCS(SGCS* const p_SGCS) {
    if(p_SGCS != NULL)
        {
            p_SGCS->_setItsRecycling_center(this);
        }
    _setItsSGCS(p_SGCS);
}

void Recycling_center::cleanUpRelations(void) {
    if(itsSGCS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSGCS");
            const Recycling_center* p_Recycling_center = itsSGCS->getItsRecycling_center();
            if(p_Recycling_center != NULL)
                {
                    itsSGCS->__setItsRecycling_center(NULL);
                }
            itsSGCS = NULL;
        }
}

void Recycling_center::__setItsSGCS(SGCS* const p_SGCS) {
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

void Recycling_center::_setItsSGCS(SGCS* const p_SGCS) {
    if(itsSGCS != NULL)
        {
            itsSGCS->__setItsRecycling_center(NULL);
        }
    __setItsSGCS(p_SGCS);
}

void Recycling_center::_clearItsSGCS(void) {
    NOTIFY_RELATION_CLEARED("itsSGCS");
    itsSGCS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedRecycling_center::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSGCS", false, true);
    if(myReal->itsSGCS)
        {
            aomsRelations->ADD_ITEM(myReal->itsSGCS);
        }
}
//#]

IMPLEMENT_META_P(Recycling_center, BDD, BDD, false, OMAnimatedRecycling_center)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Recycling_center.cpp
*********************************************************************/
