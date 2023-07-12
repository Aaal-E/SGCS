/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Web_Dashboard
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Web_Dashboard.cpp
*********************************************************************/

//## auto_generated
#include "Web_Dashboard.h"
//## link itsData_Storage
#include "Data_Storage.h"
//## link itsMain_Server
#include "Main_Server.h"
//## package BDD

//## class Web_Dashboard
Web_Dashboard::Web_Dashboard(void) : itsData_Storage(NULL), itsMain_Server(NULL) {
}

Web_Dashboard::~Web_Dashboard(void) {
    cleanUpRelations();
}

const Data_Storage* Web_Dashboard::getItsData_Storage(void) const {
    return itsData_Storage;
}

void Web_Dashboard::setItsData_Storage(Data_Storage* const p_Data_Storage) {
    if(p_Data_Storage != NULL)
        {
            p_Data_Storage->_setItsWeb_Dashboard(this);
        }
    _setItsData_Storage(p_Data_Storage);
}

const Main_Server* Web_Dashboard::getItsMain_Server(void) const {
    return itsMain_Server;
}

void Web_Dashboard::setItsMain_Server(Main_Server* const p_Main_Server) {
    if(p_Main_Server != NULL)
        {
            p_Main_Server->_setItsWeb_Dashboard(this);
        }
    _setItsMain_Server(p_Main_Server);
}

void Web_Dashboard::cleanUpRelations(void) {
    if(itsData_Storage != NULL)
        {
            const Web_Dashboard* p_Web_Dashboard = itsData_Storage->getItsWeb_Dashboard();
            if(p_Web_Dashboard != NULL)
                {
                    itsData_Storage->__setItsWeb_Dashboard(NULL);
                }
            itsData_Storage = NULL;
        }
    if(itsMain_Server != NULL)
        {
            const Web_Dashboard* p_Web_Dashboard = itsMain_Server->getItsWeb_Dashboard();
            if(p_Web_Dashboard != NULL)
                {
                    itsMain_Server->__setItsWeb_Dashboard(NULL);
                }
            itsMain_Server = NULL;
        }
}

void Web_Dashboard::__setItsData_Storage(Data_Storage* const p_Data_Storage) {
    itsData_Storage = p_Data_Storage;
}

void Web_Dashboard::_setItsData_Storage(Data_Storage* const p_Data_Storage) {
    if(itsData_Storage != NULL)
        {
            itsData_Storage->__setItsWeb_Dashboard(NULL);
        }
    __setItsData_Storage(p_Data_Storage);
}

void Web_Dashboard::_clearItsData_Storage(void) {
    itsData_Storage = NULL;
}

void Web_Dashboard::__setItsMain_Server(Main_Server* const p_Main_Server) {
    itsMain_Server = p_Main_Server;
}

void Web_Dashboard::_setItsMain_Server(Main_Server* const p_Main_Server) {
    if(itsMain_Server != NULL)
        {
            itsMain_Server->__setItsWeb_Dashboard(NULL);
        }
    __setItsMain_Server(p_Main_Server);
}

void Web_Dashboard::_clearItsMain_Server(void) {
    itsMain_Server = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Web_Dashboard.cpp
*********************************************************************/
