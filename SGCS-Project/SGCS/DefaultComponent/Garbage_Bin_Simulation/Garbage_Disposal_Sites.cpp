/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: Garbage_Bin_Simulation
	Model Element	: Garbage_Disposal_Sites
//!	Generated Date	: Thu, 13, Jul 2023  
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Garbage_Disposal_Sites.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Garbage_Disposal_Sites.h"
//## link itsSGCS
#include "SGCS.h"
//#[ ignore
#define BDD_Garbage_Disposal_Sites_Garbage_Disposal_Sites_SERIALIZE OM_NO_OP
//#]

//## package BDD

//## class Garbage_Disposal_Sites
Garbage_Disposal_Sites::Garbage_Disposal_Sites(void) : itsSGCS(NULL) {
    NOTIFY_CONSTRUCTOR(Garbage_Disposal_Sites, Garbage_Disposal_Sites(), 0, BDD_Garbage_Disposal_Sites_Garbage_Disposal_Sites_SERIALIZE);
}

Garbage_Disposal_Sites::~Garbage_Disposal_Sites(void) {
    NOTIFY_DESTRUCTOR(~Garbage_Disposal_Sites, true);
    cleanUpRelations();
}

const SGCS* Garbage_Disposal_Sites::getItsSGCS(void) const {
    return itsSGCS;
}

void Garbage_Disposal_Sites::setItsSGCS(SGCS* const p_SGCS) {
    if(p_SGCS != NULL)
        {
            p_SGCS->_setItsGarbage_Disposal_Sites(this);
        }
    _setItsSGCS(p_SGCS);
}

void Garbage_Disposal_Sites::cleanUpRelations(void) {
    if(itsSGCS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSGCS");
            const Garbage_Disposal_Sites* p_Garbage_Disposal_Sites = itsSGCS->getItsGarbage_Disposal_Sites();
            if(p_Garbage_Disposal_Sites != NULL)
                {
                    itsSGCS->__setItsGarbage_Disposal_Sites(NULL);
                }
            itsSGCS = NULL;
        }
}

void Garbage_Disposal_Sites::__setItsSGCS(SGCS* const p_SGCS) {
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

void Garbage_Disposal_Sites::_setItsSGCS(SGCS* const p_SGCS) {
    if(itsSGCS != NULL)
        {
            itsSGCS->__setItsGarbage_Disposal_Sites(NULL);
        }
    __setItsSGCS(p_SGCS);
}

void Garbage_Disposal_Sites::_clearItsSGCS(void) {
    NOTIFY_RELATION_CLEARED("itsSGCS");
    itsSGCS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedGarbage_Disposal_Sites::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSGCS", false, true);
    if(myReal->itsSGCS)
        {
            aomsRelations->ADD_ITEM(myReal->itsSGCS);
        }
}
//#]

IMPLEMENT_META_P(Garbage_Disposal_Sites, BDD, BDD, false, OMAnimatedGarbage_Disposal_Sites)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Garbage_Disposal_Sites.cpp
*********************************************************************/
