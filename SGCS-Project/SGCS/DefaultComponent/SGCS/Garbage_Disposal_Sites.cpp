/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: SGCS
	Model Element	: Garbage_Disposal_Sites
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\SGCS\Garbage_Disposal_Sites.cpp
*********************************************************************/

//## auto_generated
#include "Garbage_Disposal_Sites.h"
//## link itsSGCS
#include "SGCS.h"
//## package BDD

//## class Garbage_Disposal_Sites
//## class Garbage_Disposal_Sites::Software_Controllers
Garbage_Disposal_Sites::Software_Controllers::Software_Controllers(void) {
}

Garbage_Disposal_Sites::Software_Controllers::~Software_Controllers(void) {
}

const UC_Citizen_check_fill_level* Garbage_Disposal_Sites::Software_Controllers::getItsUC_Citizen_check_fill_level(void) const {
    return &itsUC_Citizen_check_fill_level;
}

const UC_Citizen_deposit_garbage* Garbage_Disposal_Sites::Software_Controllers::getItsUC_Citizen_deposit_garbage(void) const {
    return &itsUC_Citizen_deposit_garbage;
}

const UC_Collect_garbage* Garbage_Disposal_Sites::Software_Controllers::getItsUC_Collect_garbage(void) const {
    return &itsUC_Collect_garbage;
}

const UC_Plan_route* Garbage_Disposal_Sites::Software_Controllers::getItsUC_Plan_route(void) const {
    return &itsUC_Plan_route;
}

const UC_System_overview* Garbage_Disposal_Sites::Software_Controllers::getItsUC_System_overview(void) const {
    return &itsUC_System_overview;
}

Garbage_Disposal_Sites::Garbage_Disposal_Sites(void) : itsSGCS(NULL) {
}

Garbage_Disposal_Sites::~Garbage_Disposal_Sites(void) {
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
}

void Garbage_Disposal_Sites::_setItsSGCS(SGCS* const p_SGCS) {
    if(itsSGCS != NULL)
        {
            itsSGCS->__setItsGarbage_Disposal_Sites(NULL);
        }
    __setItsSGCS(p_SGCS);
}

void Garbage_Disposal_Sites::_clearItsSGCS(void) {
    itsSGCS = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\SGCS\Garbage_Disposal_Sites.cpp
*********************************************************************/
