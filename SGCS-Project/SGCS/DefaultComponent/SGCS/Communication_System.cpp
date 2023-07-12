/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: SGCS
	Model Element	: Communication_System
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\SGCS\Communication_System.cpp
*********************************************************************/

//## auto_generated
#include "Communication_System.h"
//## link itsData_Storage
#include "Data_Storage.h"
//## link itsDispatch
#include "Dispatch.h"
//## link itsGarbage_Bin
#include "Garbage_Bin.h"
//## link itsMain_Server
#include "Main_Server.h"
//## link itsSGCS
#include "SGCS.h"
//## package BDD

//## class Communication_System
Communication_System::Communication_System(void) : itsData_Storage(NULL), itsDispatch(NULL), itsGarbage_Bin(NULL), itsMain_Server(NULL), itsSGCS(NULL) {
}

Communication_System::~Communication_System(void) {
    cleanUpRelations();
}

const Data_Storage* Communication_System::getItsData_Storage(void) const {
    return itsData_Storage;
}

void Communication_System::setItsData_Storage(Data_Storage* const p_Data_Storage) {
    if(p_Data_Storage != NULL)
        {
            p_Data_Storage->_setItsCommunication_System(this);
        }
    _setItsData_Storage(p_Data_Storage);
}

const Dispatch* Communication_System::getItsDispatch(void) const {
    return itsDispatch;
}

void Communication_System::setItsDispatch(Dispatch* const p_Dispatch) {
    if(p_Dispatch != NULL)
        {
            p_Dispatch->_setItsCommunication_System(this);
        }
    _setItsDispatch(p_Dispatch);
}

const Garbage_Bin* Communication_System::getItsGarbage_Bin(void) const {
    return itsGarbage_Bin;
}

void Communication_System::setItsGarbage_Bin(Garbage_Bin* const p_Garbage_Bin) {
    if(p_Garbage_Bin != NULL)
        {
            p_Garbage_Bin->_setItsCommunication_System(this);
        }
    _setItsGarbage_Bin(p_Garbage_Bin);
}

OMIterator<Garbage_Bin*> Communication_System::getItsGarbage_Bin_1(void) const {
    OMIterator<Garbage_Bin*> iter(itsGarbage_Bin_1);
    return iter;
}

void Communication_System::addItsGarbage_Bin_1(Garbage_Bin* const p_Garbage_Bin) {
    if(p_Garbage_Bin != NULL)
        {
            p_Garbage_Bin->_setItsCommunication_System_1(this);
        }
    _addItsGarbage_Bin_1(p_Garbage_Bin);
}

void Communication_System::removeItsGarbage_Bin_1(Garbage_Bin* p_Garbage_Bin) {
    if(p_Garbage_Bin != NULL)
        {
            p_Garbage_Bin->__setItsCommunication_System_1(NULL);
        }
    _removeItsGarbage_Bin_1(p_Garbage_Bin);
}

void Communication_System::clearItsGarbage_Bin_1(void) {
    OMIterator<Garbage_Bin*> iter(itsGarbage_Bin_1);
    while (*iter){
        (*iter)->_clearItsCommunication_System_1();
        iter++;
    }
    _clearItsGarbage_Bin_1();
}

OMIterator<Garbage_Bin*> Communication_System::getItsGarbage_Bin_2(void) const {
    OMIterator<Garbage_Bin*> iter(itsGarbage_Bin_2);
    return iter;
}

void Communication_System::addItsGarbage_Bin_2(Garbage_Bin* const p_Garbage_Bin) {
    if(p_Garbage_Bin != NULL)
        {
            p_Garbage_Bin->_setItsCommunication_System_2(this);
        }
    _addItsGarbage_Bin_2(p_Garbage_Bin);
}

void Communication_System::removeItsGarbage_Bin_2(Garbage_Bin* p_Garbage_Bin) {
    if(p_Garbage_Bin != NULL)
        {
            p_Garbage_Bin->__setItsCommunication_System_2(NULL);
        }
    _removeItsGarbage_Bin_2(p_Garbage_Bin);
}

void Communication_System::clearItsGarbage_Bin_2(void) {
    OMIterator<Garbage_Bin*> iter(itsGarbage_Bin_2);
    while (*iter){
        (*iter)->_clearItsCommunication_System_2();
        iter++;
    }
    _clearItsGarbage_Bin_2();
}

const Main_Server* Communication_System::getItsMain_Server(void) const {
    return itsMain_Server;
}

void Communication_System::setItsMain_Server(Main_Server* const p_Main_Server) {
    if(p_Main_Server != NULL)
        {
            p_Main_Server->_setItsCommunication_System(this);
        }
    _setItsMain_Server(p_Main_Server);
}

const SGCS* Communication_System::getItsSGCS(void) const {
    return itsSGCS;
}

void Communication_System::setItsSGCS(SGCS* const p_SGCS) {
    if(p_SGCS != NULL)
        {
            p_SGCS->_setItsCommunication_System(this);
        }
    _setItsSGCS(p_SGCS);
}

void Communication_System::cleanUpRelations(void) {
    if(itsData_Storage != NULL)
        {
            const Communication_System* p_Communication_System = itsData_Storage->getItsCommunication_System();
            if(p_Communication_System != NULL)
                {
                    itsData_Storage->__setItsCommunication_System(NULL);
                }
            itsData_Storage = NULL;
        }
    if(itsDispatch != NULL)
        {
            const Communication_System* p_Communication_System = itsDispatch->getItsCommunication_System();
            if(p_Communication_System != NULL)
                {
                    itsDispatch->__setItsCommunication_System(NULL);
                }
            itsDispatch = NULL;
        }
    if(itsGarbage_Bin != NULL)
        {
            const Communication_System* p_Communication_System = itsGarbage_Bin->getItsCommunication_System();
            if(p_Communication_System != NULL)
                {
                    itsGarbage_Bin->__setItsCommunication_System(NULL);
                }
            itsGarbage_Bin = NULL;
        }
    {
        OMIterator<Garbage_Bin*> iter(itsGarbage_Bin_1);
        while (*iter){
            const Communication_System* p_Communication_System = (*iter)->getItsCommunication_System_1();
            if(p_Communication_System != NULL)
                {
                    (*iter)->__setItsCommunication_System_1(NULL);
                }
            iter++;
        }
        itsGarbage_Bin_1.removeAll();
    }
    {
        OMIterator<Garbage_Bin*> iter(itsGarbage_Bin_2);
        while (*iter){
            const Communication_System* p_Communication_System = (*iter)->getItsCommunication_System_2();
            if(p_Communication_System != NULL)
                {
                    (*iter)->__setItsCommunication_System_2(NULL);
                }
            iter++;
        }
        itsGarbage_Bin_2.removeAll();
    }
    if(itsMain_Server != NULL)
        {
            const Communication_System* p_Communication_System = itsMain_Server->getItsCommunication_System();
            if(p_Communication_System != NULL)
                {
                    itsMain_Server->__setItsCommunication_System(NULL);
                }
            itsMain_Server = NULL;
        }
    if(itsSGCS != NULL)
        {
            const Communication_System* p_Communication_System = itsSGCS->getItsCommunication_System();
            if(p_Communication_System != NULL)
                {
                    itsSGCS->__setItsCommunication_System(NULL);
                }
            itsSGCS = NULL;
        }
}

void Communication_System::__setItsData_Storage(Data_Storage* const p_Data_Storage) {
    itsData_Storage = p_Data_Storage;
}

void Communication_System::_setItsData_Storage(Data_Storage* const p_Data_Storage) {
    if(itsData_Storage != NULL)
        {
            itsData_Storage->__setItsCommunication_System(NULL);
        }
    __setItsData_Storage(p_Data_Storage);
}

void Communication_System::_clearItsData_Storage(void) {
    itsData_Storage = NULL;
}

void Communication_System::__setItsDispatch(Dispatch* const p_Dispatch) {
    itsDispatch = p_Dispatch;
}

void Communication_System::_setItsDispatch(Dispatch* const p_Dispatch) {
    if(itsDispatch != NULL)
        {
            itsDispatch->__setItsCommunication_System(NULL);
        }
    __setItsDispatch(p_Dispatch);
}

void Communication_System::_clearItsDispatch(void) {
    itsDispatch = NULL;
}

void Communication_System::__setItsGarbage_Bin(Garbage_Bin* const p_Garbage_Bin) {
    itsGarbage_Bin = p_Garbage_Bin;
}

void Communication_System::_setItsGarbage_Bin(Garbage_Bin* const p_Garbage_Bin) {
    if(itsGarbage_Bin != NULL)
        {
            itsGarbage_Bin->__setItsCommunication_System(NULL);
        }
    __setItsGarbage_Bin(p_Garbage_Bin);
}

void Communication_System::_clearItsGarbage_Bin(void) {
    itsGarbage_Bin = NULL;
}

void Communication_System::_addItsGarbage_Bin_1(Garbage_Bin* const p_Garbage_Bin) {
    itsGarbage_Bin_1.add(p_Garbage_Bin);
}

void Communication_System::_removeItsGarbage_Bin_1(Garbage_Bin* const p_Garbage_Bin) {
    itsGarbage_Bin_1.remove(p_Garbage_Bin);
}

void Communication_System::_clearItsGarbage_Bin_1(void) {
    itsGarbage_Bin_1.removeAll();
}

void Communication_System::_addItsGarbage_Bin_2(Garbage_Bin* const p_Garbage_Bin) {
    itsGarbage_Bin_2.add(p_Garbage_Bin);
}

void Communication_System::_removeItsGarbage_Bin_2(Garbage_Bin* const p_Garbage_Bin) {
    itsGarbage_Bin_2.remove(p_Garbage_Bin);
}

void Communication_System::_clearItsGarbage_Bin_2(void) {
    itsGarbage_Bin_2.removeAll();
}

void Communication_System::__setItsMain_Server(Main_Server* const p_Main_Server) {
    itsMain_Server = p_Main_Server;
}

void Communication_System::_setItsMain_Server(Main_Server* const p_Main_Server) {
    if(itsMain_Server != NULL)
        {
            itsMain_Server->__setItsCommunication_System(NULL);
        }
    __setItsMain_Server(p_Main_Server);
}

void Communication_System::_clearItsMain_Server(void) {
    itsMain_Server = NULL;
}

void Communication_System::__setItsSGCS(SGCS* const p_SGCS) {
    itsSGCS = p_SGCS;
}

void Communication_System::_setItsSGCS(SGCS* const p_SGCS) {
    if(itsSGCS != NULL)
        {
            itsSGCS->__setItsCommunication_System(NULL);
        }
    __setItsSGCS(p_SGCS);
}

void Communication_System::_clearItsSGCS(void) {
    itsSGCS = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\SGCS\Communication_System.cpp
*********************************************************************/
