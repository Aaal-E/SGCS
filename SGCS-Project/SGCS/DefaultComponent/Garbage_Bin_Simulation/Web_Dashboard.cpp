/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: Garbage_Bin_Simulation
	Model Element	: Web_Dashboard
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Web_Dashboard.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Web_Dashboard.h"
//## link itsData_Storage
#include "Data_Storage.h"
//## link itsMain_Server
#include "Main_Server.h"
//#[ ignore
#define BDD_Web_Dashboard_Web_Dashboard_SERIALIZE OM_NO_OP
//#]

//## package BDD

//## class Web_Dashboard
Web_Dashboard::Web_Dashboard(void) : itsData_Storage(NULL), itsMain_Server(NULL) {
    NOTIFY_CONSTRUCTOR(Web_Dashboard, Web_Dashboard(), 0, BDD_Web_Dashboard_Web_Dashboard_SERIALIZE);
}

Web_Dashboard::~Web_Dashboard(void) {
    NOTIFY_DESTRUCTOR(~Web_Dashboard, true);
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
            NOTIFY_RELATION_CLEARED("itsData_Storage");
            const Web_Dashboard* p_Web_Dashboard = itsData_Storage->getItsWeb_Dashboard();
            if(p_Web_Dashboard != NULL)
                {
                    itsData_Storage->__setItsWeb_Dashboard(NULL);
                }
            itsData_Storage = NULL;
        }
    if(itsMain_Server != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsMain_Server");
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
    if(p_Data_Storage != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsData_Storage", p_Data_Storage, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsData_Storage");
        }
}

void Web_Dashboard::_setItsData_Storage(Data_Storage* const p_Data_Storage) {
    if(itsData_Storage != NULL)
        {
            itsData_Storage->__setItsWeb_Dashboard(NULL);
        }
    __setItsData_Storage(p_Data_Storage);
}

void Web_Dashboard::_clearItsData_Storage(void) {
    NOTIFY_RELATION_CLEARED("itsData_Storage");
    itsData_Storage = NULL;
}

void Web_Dashboard::__setItsMain_Server(Main_Server* const p_Main_Server) {
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

void Web_Dashboard::_setItsMain_Server(Main_Server* const p_Main_Server) {
    if(itsMain_Server != NULL)
        {
            itsMain_Server->__setItsWeb_Dashboard(NULL);
        }
    __setItsMain_Server(p_Main_Server);
}

void Web_Dashboard::_clearItsMain_Server(void) {
    NOTIFY_RELATION_CLEARED("itsMain_Server");
    itsMain_Server = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedWeb_Dashboard::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsMain_Server", false, true);
    if(myReal->itsMain_Server)
        {
            aomsRelations->ADD_ITEM(myReal->itsMain_Server);
        }
    aomsRelations->addRelation("itsData_Storage", false, true);
    if(myReal->itsData_Storage)
        {
            aomsRelations->ADD_ITEM(myReal->itsData_Storage);
        }
}
//#]

IMPLEMENT_META_P(Web_Dashboard, BDD, BDD, false, OMAnimatedWeb_Dashboard)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Web_Dashboard.cpp
*********************************************************************/
