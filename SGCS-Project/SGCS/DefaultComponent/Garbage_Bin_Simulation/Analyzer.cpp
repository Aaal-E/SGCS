/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: Garbage_Bin_Simulation
	Model Element	: Analyzer
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Analyzer.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Analyzer.h"
//## link itsData_Storage
#include "Data_Storage.h"
//## link itsMain_Server
#include "Main_Server.h"
//#[ ignore
#define BDD_Analyzer_Analyzer_SERIALIZE OM_NO_OP
//#]

//## package BDD

//## class Analyzer
Analyzer::Analyzer(void) : itsData_Storage(NULL), itsMain_Server(NULL) {
    NOTIFY_CONSTRUCTOR(Analyzer, Analyzer(), 0, BDD_Analyzer_Analyzer_SERIALIZE);
}

Analyzer::~Analyzer(void) {
    NOTIFY_DESTRUCTOR(~Analyzer, true);
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
            NOTIFY_RELATION_CLEARED("itsData_Storage");
            const Analyzer* p_Analyzer = itsData_Storage->getItsAnalyzer();
            if(p_Analyzer != NULL)
                {
                    itsData_Storage->__setItsAnalyzer(NULL);
                }
            itsData_Storage = NULL;
        }
    if(itsMain_Server != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsMain_Server");
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
    if(p_Data_Storage != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsData_Storage", p_Data_Storage, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsData_Storage");
        }
}

void Analyzer::_setItsData_Storage(Data_Storage* const p_Data_Storage) {
    if(itsData_Storage != NULL)
        {
            itsData_Storage->__setItsAnalyzer(NULL);
        }
    __setItsData_Storage(p_Data_Storage);
}

void Analyzer::_clearItsData_Storage(void) {
    NOTIFY_RELATION_CLEARED("itsData_Storage");
    itsData_Storage = NULL;
}

void Analyzer::__setItsMain_Server(Main_Server* const p_Main_Server) {
    itsMain_Server = p_Main_Server;
    if(p_Main_Server != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsMain_Server", p_Main_Server, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsMain_Server");
        }
}

void Analyzer::_setItsMain_Server(Main_Server* const p_Main_Server) {
    if(itsMain_Server != NULL)
        {
            itsMain_Server->__setItsAnalyzer(NULL);
        }
    __setItsMain_Server(p_Main_Server);
}

void Analyzer::_clearItsMain_Server(void) {
    NOTIFY_RELATION_CLEARED("itsMain_Server");
    itsMain_Server = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedAnalyzer::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsData_Storage", false, true);
    if(myReal->itsData_Storage)
        {
            aomsRelations->ADD_ITEM(myReal->itsData_Storage);
        }
    aomsRelations->addRelation("itsMain_Server", false, true);
    if(myReal->itsMain_Server)
        {
            aomsRelations->ADD_ITEM(myReal->itsMain_Server);
        }
}
//#]

IMPLEMENT_META_P(Analyzer, BDD, BDD, false, OMAnimatedAnalyzer)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Analyzer.cpp
*********************************************************************/
