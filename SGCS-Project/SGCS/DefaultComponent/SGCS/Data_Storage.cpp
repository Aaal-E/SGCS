/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: SGCS
	Model Element	: Data_Storage
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\SGCS\Data_Storage.cpp
*********************************************************************/

//## auto_generated
#include "Data_Storage.h"
//## link itsAnalyzer
#include "Analyzer.h"
//## link itsCommunication_System
#include "Communication_System.h"
//## link itsMain_Server
#include "Main_Server.h"
//## link itsWeb_Dashboard
#include "Web_Dashboard.h"
//## package BDD

//## class Data_Storage
Data_Storage::Data_Storage(void) : itsAnalyzer(NULL), itsCommunication_System(NULL), itsMain_Server(NULL), itsWeb_Dashboard(NULL) {
}

Data_Storage::~Data_Storage(void) {
    cleanUpRelations();
}

const Analyzer* Data_Storage::getItsAnalyzer(void) const {
    return itsAnalyzer;
}

void Data_Storage::setItsAnalyzer(Analyzer* const p_Analyzer) {
    if(p_Analyzer != NULL)
        {
            p_Analyzer->_setItsData_Storage(this);
        }
    _setItsAnalyzer(p_Analyzer);
}

const Communication_System* Data_Storage::getItsCommunication_System(void) const {
    return itsCommunication_System;
}

void Data_Storage::setItsCommunication_System(Communication_System* const p_Communication_System) {
    if(p_Communication_System != NULL)
        {
            p_Communication_System->_setItsData_Storage(this);
        }
    _setItsCommunication_System(p_Communication_System);
}

const Main_Server* Data_Storage::getItsMain_Server(void) const {
    return itsMain_Server;
}

void Data_Storage::setItsMain_Server(Main_Server* const p_Main_Server) {
    if(p_Main_Server != NULL)
        {
            p_Main_Server->_setItsData_Storage(this);
        }
    _setItsMain_Server(p_Main_Server);
}

const Web_Dashboard* Data_Storage::getItsWeb_Dashboard(void) const {
    return itsWeb_Dashboard;
}

void Data_Storage::setItsWeb_Dashboard(Web_Dashboard* const p_Web_Dashboard) {
    if(p_Web_Dashboard != NULL)
        {
            p_Web_Dashboard->_setItsData_Storage(this);
        }
    _setItsWeb_Dashboard(p_Web_Dashboard);
}

void Data_Storage::cleanUpRelations(void) {
    if(itsAnalyzer != NULL)
        {
            const Data_Storage* p_Data_Storage = itsAnalyzer->getItsData_Storage();
            if(p_Data_Storage != NULL)
                {
                    itsAnalyzer->__setItsData_Storage(NULL);
                }
            itsAnalyzer = NULL;
        }
    if(itsCommunication_System != NULL)
        {
            const Data_Storage* p_Data_Storage = itsCommunication_System->getItsData_Storage();
            if(p_Data_Storage != NULL)
                {
                    itsCommunication_System->__setItsData_Storage(NULL);
                }
            itsCommunication_System = NULL;
        }
    if(itsMain_Server != NULL)
        {
            const Data_Storage* p_Data_Storage = itsMain_Server->getItsData_Storage();
            if(p_Data_Storage != NULL)
                {
                    itsMain_Server->__setItsData_Storage(NULL);
                }
            itsMain_Server = NULL;
        }
    if(itsWeb_Dashboard != NULL)
        {
            const Data_Storage* p_Data_Storage = itsWeb_Dashboard->getItsData_Storage();
            if(p_Data_Storage != NULL)
                {
                    itsWeb_Dashboard->__setItsData_Storage(NULL);
                }
            itsWeb_Dashboard = NULL;
        }
}

void Data_Storage::__setItsAnalyzer(Analyzer* const p_Analyzer) {
    itsAnalyzer = p_Analyzer;
}

void Data_Storage::_setItsAnalyzer(Analyzer* const p_Analyzer) {
    if(itsAnalyzer != NULL)
        {
            itsAnalyzer->__setItsData_Storage(NULL);
        }
    __setItsAnalyzer(p_Analyzer);
}

void Data_Storage::_clearItsAnalyzer(void) {
    itsAnalyzer = NULL;
}

void Data_Storage::__setItsCommunication_System(Communication_System* const p_Communication_System) {
    itsCommunication_System = p_Communication_System;
}

void Data_Storage::_setItsCommunication_System(Communication_System* const p_Communication_System) {
    if(itsCommunication_System != NULL)
        {
            itsCommunication_System->__setItsData_Storage(NULL);
        }
    __setItsCommunication_System(p_Communication_System);
}

void Data_Storage::_clearItsCommunication_System(void) {
    itsCommunication_System = NULL;
}

void Data_Storage::__setItsMain_Server(Main_Server* const p_Main_Server) {
    itsMain_Server = p_Main_Server;
}

void Data_Storage::_setItsMain_Server(Main_Server* const p_Main_Server) {
    if(itsMain_Server != NULL)
        {
            itsMain_Server->__setItsData_Storage(NULL);
        }
    __setItsMain_Server(p_Main_Server);
}

void Data_Storage::_clearItsMain_Server(void) {
    itsMain_Server = NULL;
}

void Data_Storage::__setItsWeb_Dashboard(Web_Dashboard* const p_Web_Dashboard) {
    itsWeb_Dashboard = p_Web_Dashboard;
}

void Data_Storage::_setItsWeb_Dashboard(Web_Dashboard* const p_Web_Dashboard) {
    if(itsWeb_Dashboard != NULL)
        {
            itsWeb_Dashboard->__setItsData_Storage(NULL);
        }
    __setItsWeb_Dashboard(p_Web_Dashboard);
}

void Data_Storage::_clearItsWeb_Dashboard(void) {
    itsWeb_Dashboard = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\SGCS\Data_Storage.cpp
*********************************************************************/
