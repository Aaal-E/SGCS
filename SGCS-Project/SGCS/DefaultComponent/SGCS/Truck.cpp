/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: SGCS
	Model Element	: Truck
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\SGCS\Truck.cpp
*********************************************************************/

//## auto_generated
#include "Truck.h"
//## link itsDispatch
#include "Dispatch.h"
//## link itsSGCS
#include "SGCS.h"
//## package BDD

//## class Truck
Truck::Truck(void) : Fill_level(0), Fuel_level(100), Garbage_type("General"), itsDispatch(NULL), itsDispatch_1(NULL), itsSGCS(NULL) {
}

Truck::~Truck(void) {
    cleanUpRelations();
}

const float Truck::getFill_level(void) const {
    return Fill_level;
}

void Truck::setFill_level(const float p_Fill_level) {
    Fill_level = p_Fill_level;
}

const float Truck::getFuel_level(void) const {
    return Fuel_level;
}

void Truck::setFuel_level(const float p_Fuel_level) {
    Fuel_level = p_Fuel_level;
}

const OMString Truck::getGarbage_type(void) const {
    return Garbage_type;
}

void Truck::setGarbage_type(const OMString p_Garbage_type) {
    Garbage_type = p_Garbage_type;
}

const Dispatch* Truck::getItsDispatch(void) const {
    return itsDispatch;
}

void Truck::setItsDispatch(Dispatch* const p_Dispatch) {
    if(p_Dispatch != NULL)
        {
            p_Dispatch->_addItsTruck(this);
        }
    _setItsDispatch(p_Dispatch);
}

const Dispatch* Truck::getItsDispatch_1(void) const {
    return itsDispatch_1;
}

void Truck::setItsDispatch_1(Dispatch* const p_Dispatch) {
    if(p_Dispatch != NULL)
        {
            p_Dispatch->_addItsTruck_1(this);
        }
    _setItsDispatch_1(p_Dispatch);
}

const GPS* Truck::getItsGPS(void) const {
    return &itsGPS;
}

const GPS* Truck::getItsGPS_1(void) const {
    return &itsGPS_1;
}

const SGCS* Truck::getItsSGCS(void) const {
    return itsSGCS;
}

void Truck::setItsSGCS(SGCS* const p_SGCS) {
    if(p_SGCS != NULL)
        {
            p_SGCS->_setItsTruck(this);
        }
    _setItsSGCS(p_SGCS);
}

void Truck::cleanUpRelations(void) {
    if(itsDispatch != NULL)
        {
            Dispatch* current = itsDispatch;
            if(current != NULL)
                {
                    current->_removeItsTruck(this);
                }
            itsDispatch = NULL;
        }
    if(itsDispatch_1 != NULL)
        {
            Dispatch* current = itsDispatch_1;
            if(current != NULL)
                {
                    current->_removeItsTruck_1(this);
                }
            itsDispatch_1 = NULL;
        }
    if(itsSGCS != NULL)
        {
            const Truck* p_Truck = itsSGCS->getItsTruck();
            if(p_Truck != NULL)
                {
                    itsSGCS->__setItsTruck(NULL);
                }
            itsSGCS = NULL;
        }
}

void Truck::__setItsDispatch(Dispatch* const p_Dispatch) {
    itsDispatch = p_Dispatch;
}

void Truck::_setItsDispatch(Dispatch* p_Dispatch) {
    if(itsDispatch != NULL)
        {
            itsDispatch->_removeItsTruck(this);
        }
    __setItsDispatch(p_Dispatch);
}

void Truck::_clearItsDispatch(void) {
    itsDispatch = NULL;
}

void Truck::__setItsDispatch_1(Dispatch* const p_Dispatch) {
    itsDispatch_1 = p_Dispatch;
}

void Truck::_setItsDispatch_1(Dispatch* p_Dispatch) {
    if(itsDispatch_1 != NULL)
        {
            itsDispatch_1->_removeItsTruck_1(this);
        }
    __setItsDispatch_1(p_Dispatch);
}

void Truck::_clearItsDispatch_1(void) {
    itsDispatch_1 = NULL;
}

void Truck::__setItsSGCS(SGCS* const p_SGCS) {
    itsSGCS = p_SGCS;
}

void Truck::_setItsSGCS(SGCS* const p_SGCS) {
    if(itsSGCS != NULL)
        {
            itsSGCS->__setItsTruck(NULL);
        }
    __setItsSGCS(p_SGCS);
}

void Truck::_clearItsSGCS(void) {
    itsSGCS = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\SGCS\Truck.cpp
*********************************************************************/
