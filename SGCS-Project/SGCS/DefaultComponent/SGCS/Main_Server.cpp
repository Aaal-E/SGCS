/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: SGCS
	Model Element	: Main_Server
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\SGCS\Main_Server.cpp
*********************************************************************/

//## auto_generated
#include "Main_Server.h"
//## link itsAnalyzer
#include "Analyzer.h"
//## link itsCommunication_System
#include "Communication_System.h"
//## link itsData_Storage
#include "Data_Storage.h"
//## link itsDispatch
#include "Dispatch.h"
//## link itsSGCS
#include "SGCS.h"
//## link itsWeb_Dashboard
#include "Web_Dashboard.h"
//## package BDD

//## class Main_Server
Main_Server::Main_Server(void) : itsAnalyzer(NULL), itsCommunication_System(NULL), itsData_Storage(NULL), itsDispatch(NULL), itsSGCS(NULL), itsWeb_Dashboard(NULL) {
}

Main_Server::~Main_Server(void) {
    cleanUpRelations();
}

const Analyzer* Main_Server::getItsAnalyzer(void) const {
    return itsAnalyzer;
}

void Main_Server::setItsAnalyzer(Analyzer* const p_Analyzer) {
    if(p_Analyzer != NULL)
        {
            p_Analyzer->_setItsMain_Server(this);
        }
    _setItsAnalyzer(p_Analyzer);
}

const Communication_System* Main_Server::getItsCommunication_System(void) const {
    return itsCommunication_System;
}

void Main_Server::setItsCommunication_System(Communication_System* const p_Communication_System) {
    if(p_Communication_System != NULL)
        {
            p_Communication_System->_setItsMain_Server(this);
        }
    _setItsCommunication_System(p_Communication_System);
}

const Data_Storage* Main_Server::getItsData_Storage(void) const {
    return itsData_Storage;
}

void Main_Server::setItsData_Storage(Data_Storage* const p_Data_Storage) {
    if(p_Data_Storage != NULL)
        {
            p_Data_Storage->_setItsMain_Server(this);
        }
    _setItsData_Storage(p_Data_Storage);
}

const Dispatch* Main_Server::getItsDispatch(void) const {
    return itsDispatch;
}

void Main_Server::setItsDispatch(Dispatch* const p_Dispatch) {
    if(p_Dispatch != NULL)
        {
            p_Dispatch->_setItsMain_Server(this);
        }
    _setItsDispatch(p_Dispatch);
}

const SGCS* Main_Server::getItsSGCS(void) const {
    return itsSGCS;
}

void Main_Server::setItsSGCS(SGCS* const p_SGCS) {
    if(p_SGCS != NULL)
        {
            p_SGCS->_setItsMain_Server(this);
        }
    _setItsSGCS(p_SGCS);
}

const Web_Dashboard* Main_Server::getItsWeb_Dashboard(void) const {
    return itsWeb_Dashboard;
}

void Main_Server::setItsWeb_Dashboard(Web_Dashboard* const p_Web_Dashboard) {
    if(p_Web_Dashboard != NULL)
        {
            p_Web_Dashboard->_setItsMain_Server(this);
        }
    _setItsWeb_Dashboard(p_Web_Dashboard);
}

void Main_Server::cleanUpRelations(void) {
    if(itsAnalyzer != NULL)
        {
            const Main_Server* p_Main_Server = itsAnalyzer->getItsMain_Server();
            if(p_Main_Server != NULL)
                {
                    itsAnalyzer->__setItsMain_Server(NULL);
                }
            itsAnalyzer = NULL;
        }
    if(itsCommunication_System != NULL)
        {
            const Main_Server* p_Main_Server = itsCommunication_System->getItsMain_Server();
            if(p_Main_Server != NULL)
                {
                    itsCommunication_System->__setItsMain_Server(NULL);
                }
            itsCommunication_System = NULL;
        }
    if(itsData_Storage != NULL)
        {
            const Main_Server* p_Main_Server = itsData_Storage->getItsMain_Server();
            if(p_Main_Server != NULL)
                {
                    itsData_Storage->__setItsMain_Server(NULL);
                }
            itsData_Storage = NULL;
        }
    if(itsDispatch != NULL)
        {
            const Main_Server* p_Main_Server = itsDispatch->getItsMain_Server();
            if(p_Main_Server != NULL)
                {
                    itsDispatch->__setItsMain_Server(NULL);
                }
            itsDispatch = NULL;
        }
    if(itsSGCS != NULL)
        {
            const Main_Server* p_Main_Server = itsSGCS->getItsMain_Server();
            if(p_Main_Server != NULL)
                {
                    itsSGCS->__setItsMain_Server(NULL);
                }
            itsSGCS = NULL;
        }
    if(itsWeb_Dashboard != NULL)
        {
            const Main_Server* p_Main_Server = itsWeb_Dashboard->getItsMain_Server();
            if(p_Main_Server != NULL)
                {
                    itsWeb_Dashboard->__setItsMain_Server(NULL);
                }
            itsWeb_Dashboard = NULL;
        }
}

void Main_Server::__setItsAnalyzer(Analyzer* const p_Analyzer) {
    itsAnalyzer = p_Analyzer;
}

void Main_Server::_setItsAnalyzer(Analyzer* const p_Analyzer) {
    if(itsAnalyzer != NULL)
        {
            itsAnalyzer->__setItsMain_Server(NULL);
        }
    __setItsAnalyzer(p_Analyzer);
}

void Main_Server::_clearItsAnalyzer(void) {
    itsAnalyzer = NULL;
}

void Main_Server::__setItsCommunication_System(Communication_System* const p_Communication_System) {
    itsCommunication_System = p_Communication_System;
}

void Main_Server::_setItsCommunication_System(Communication_System* const p_Communication_System) {
    if(itsCommunication_System != NULL)
        {
            itsCommunication_System->__setItsMain_Server(NULL);
        }
    __setItsCommunication_System(p_Communication_System);
}

void Main_Server::_clearItsCommunication_System(void) {
    itsCommunication_System = NULL;
}

void Main_Server::__setItsData_Storage(Data_Storage* const p_Data_Storage) {
    itsData_Storage = p_Data_Storage;
}

void Main_Server::_setItsData_Storage(Data_Storage* const p_Data_Storage) {
    if(itsData_Storage != NULL)
        {
            itsData_Storage->__setItsMain_Server(NULL);
        }
    __setItsData_Storage(p_Data_Storage);
}

void Main_Server::_clearItsData_Storage(void) {
    itsData_Storage = NULL;
}

void Main_Server::__setItsDispatch(Dispatch* const p_Dispatch) {
    itsDispatch = p_Dispatch;
}

void Main_Server::_setItsDispatch(Dispatch* const p_Dispatch) {
    if(itsDispatch != NULL)
        {
            itsDispatch->__setItsMain_Server(NULL);
        }
    __setItsDispatch(p_Dispatch);
}

void Main_Server::_clearItsDispatch(void) {
    itsDispatch = NULL;
}

void Main_Server::__setItsSGCS(SGCS* const p_SGCS) {
    itsSGCS = p_SGCS;
}

void Main_Server::_setItsSGCS(SGCS* const p_SGCS) {
    if(itsSGCS != NULL)
        {
            itsSGCS->__setItsMain_Server(NULL);
        }
    __setItsSGCS(p_SGCS);
}

void Main_Server::_clearItsSGCS(void) {
    itsSGCS = NULL;
}

void Main_Server::__setItsWeb_Dashboard(Web_Dashboard* const p_Web_Dashboard) {
    itsWeb_Dashboard = p_Web_Dashboard;
}

void Main_Server::_setItsWeb_Dashboard(Web_Dashboard* const p_Web_Dashboard) {
    if(itsWeb_Dashboard != NULL)
        {
            itsWeb_Dashboard->__setItsMain_Server(NULL);
        }
    __setItsWeb_Dashboard(p_Web_Dashboard);
}

void Main_Server::_clearItsWeb_Dashboard(void) {
    itsWeb_Dashboard = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\SGCS\Main_Server.cpp
*********************************************************************/
