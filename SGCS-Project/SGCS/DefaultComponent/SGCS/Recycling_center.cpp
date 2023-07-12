/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: SGCS
	Model Element	: Recycling_center
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\SGCS\Recycling_center.cpp
*********************************************************************/

//## auto_generated
#include "Recycling_center.h"
//## link itsSGCS
#include "SGCS.h"
//## package BDD

//## class Recycling_center
Recycling_center::Recycling_center(void) : itsSGCS(NULL) {
}

Recycling_center::~Recycling_center(void) {
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
}

void Recycling_center::_setItsSGCS(SGCS* const p_SGCS) {
    if(itsSGCS != NULL)
        {
            itsSGCS->__setItsRecycling_center(NULL);
        }
    __setItsSGCS(p_SGCS);
}

void Recycling_center::_clearItsSGCS(void) {
    itsSGCS = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\SGCS\Recycling_center.cpp
*********************************************************************/
