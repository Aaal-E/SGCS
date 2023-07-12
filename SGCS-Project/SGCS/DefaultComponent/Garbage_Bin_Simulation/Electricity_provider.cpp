/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: Garbage_Bin_Simulation
	Model Element	: Electricity_provider
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Electricity_provider.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Electricity_provider.h"
//## link itsSGCS
#include "SGCS.h"
//#[ ignore
#define BDD_Electricity_provider_Electricity_provider_SERIALIZE OM_NO_OP
//#]

//## package BDD

//## class Electricity_provider
Electricity_provider::Electricity_provider(void) : itsSGCS(NULL) {
    NOTIFY_CONSTRUCTOR(Electricity_provider, Electricity_provider(), 0, BDD_Electricity_provider_Electricity_provider_SERIALIZE);
}

Electricity_provider::~Electricity_provider(void) {
    NOTIFY_DESTRUCTOR(~Electricity_provider, true);
    cleanUpRelations();
}

const SGCS* Electricity_provider::getItsSGCS(void) const {
    return itsSGCS;
}

void Electricity_provider::setItsSGCS(SGCS* const p_SGCS) {
    if(p_SGCS != NULL)
        {
            p_SGCS->_setItsElectricity_provider(this);
        }
    _setItsSGCS(p_SGCS);
}

void Electricity_provider::cleanUpRelations(void) {
    if(itsSGCS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSGCS");
            const Electricity_provider* p_Electricity_provider = itsSGCS->getItsElectricity_provider();
            if(p_Electricity_provider != NULL)
                {
                    itsSGCS->__setItsElectricity_provider(NULL);
                }
            itsSGCS = NULL;
        }
}

void Electricity_provider::__setItsSGCS(SGCS* const p_SGCS) {
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

void Electricity_provider::_setItsSGCS(SGCS* const p_SGCS) {
    if(itsSGCS != NULL)
        {
            itsSGCS->__setItsElectricity_provider(NULL);
        }
    __setItsSGCS(p_SGCS);
}

void Electricity_provider::_clearItsSGCS(void) {
    NOTIFY_RELATION_CLEARED("itsSGCS");
    itsSGCS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedElectricity_provider::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSGCS", false, true);
    if(myReal->itsSGCS)
        {
            aomsRelations->ADD_ITEM(myReal->itsSGCS);
        }
}
//#]

IMPLEMENT_META_P(Electricity_provider, BDD, BDD, false, OMAnimatedElectricity_provider)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Electricity_provider.cpp
*********************************************************************/
