/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Electricity_provider
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Electricity_provider.cpp
*********************************************************************/

//## auto_generated
#include "Electricity_provider.h"
//## link itsSGCS
#include "SGCS.h"
//## package BDD

//## class Electricity_provider
Electricity_provider::Electricity_provider(void) : itsSGCS(NULL) {
}

Electricity_provider::~Electricity_provider(void) {
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
}

void Electricity_provider::_setItsSGCS(SGCS* const p_SGCS) {
    if(itsSGCS != NULL)
        {
            itsSGCS->__setItsElectricity_provider(NULL);
        }
    __setItsSGCS(p_SGCS);
}

void Electricity_provider::_clearItsSGCS(void) {
    itsSGCS = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Electricity_provider.cpp
*********************************************************************/
