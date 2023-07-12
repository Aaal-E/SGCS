/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Analyzer
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Analyzer.cpp
*********************************************************************/

//## auto_generated
#include "Analyzer.h"
//## link itsData_Storage
#include "Data_Storage.h"
//## link itsMain_Server
#include "Main_Server.h"
//## package BDD

//## class Analyzer
Analyzer::Analyzer(void) : itsData_Storage(NULL), itsMain_Server(NULL) {
}

Analyzer::~Analyzer(void) {
    cleanUpRelations();
}

const Data_Storage* Analyzer::getItsData_Storage(void) const {
    return itsData_Storage;
}

void Analyzer::setItsData_Storage(Data_Storage* const p_Data_Storage) {
    if(p_Data_Storage != NULL)
        {
            p_Data_Storage->_setItsAnalyzer(this);
        }
    _setItsData_Storage(p_Data_Storage);
}

const Main_Server* Analyzer::getItsMain_Server(void) const {
    return itsMain_Server;
}

void Analyzer::setItsMain_Server(Main_Server* const p_Main_Server) {
    if(p_Main_Server != NULL)
        {
            p_Main_Server->_setItsAnalyzer(this);
        }
    _setItsMain_Server(p_Main_Server);
}

void Analyzer::cleanUpRelations(void) {
    if(itsData_Storage != NULL)
        {
            const Analyzer* p_Analyzer = itsData_Storage->getItsAnalyzer();
            if(p_Analyzer != NULL)
                {
                    itsData_Storage->__setItsAnalyzer(NULL);
                }
            itsData_Storage = NULL;
        }
    if(itsMain_Server != NULL)
        {
            const Analyzer* p_Analyzer = itsMain_Server->getItsAnalyzer();
            if(p_Analyzer != NULL)
                {
                    itsMain_Server->__setItsAnalyzer(NULL);
                }
            itsMain_Server = NULL;
        }
}

void Analyzer::__setItsData_Storage(Data_Storage* const p_Data_Storage) {
    itsData_Storage = p_Data_Storage;
}

void Analyzer::_setItsData_Storage(Data_Storage* const p_Data_Storage) {
    if(itsData_Storage != NULL)
        {
            itsData_Storage->__setItsAnalyzer(NULL);
        }
    __setItsData_Storage(p_Data_Storage);
}

void Analyzer::_clearItsData_Storage(void) {
    itsData_Storage = NULL;
}

void Analyzer::__setItsMain_Server(Main_Server* const p_Main_Server) {
    itsMain_Server = p_Main_Server;
}

void Analyzer::_setItsMain_Server(Main_Server* const p_Main_Server) {
    if(itsMain_Server != NULL)
        {
            itsMain_Server->__setItsAnalyzer(NULL);
        }
    __setItsMain_Server(p_Main_Server);
}

void Analyzer::_clearItsMain_Server(void) {
    itsMain_Server = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Analyzer.cpp
*********************************************************************/
