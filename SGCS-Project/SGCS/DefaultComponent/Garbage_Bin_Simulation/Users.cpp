/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: Garbage_Bin_Simulation
	Model Element	: Users
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Users.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Users.h"
//## link itsSGCS
#include "SGCS.h"
//#[ ignore
#define BDD_Users_Users_SERIALIZE OM_NO_OP
//#]

//## package BDD

//## class Users
Users::Users(void) : itsSGCS(NULL) {
    NOTIFY_CONSTRUCTOR(Users, Users(), 0, BDD_Users_Users_SERIALIZE);
}

Users::~Users(void) {
    NOTIFY_DESTRUCTOR(~Users, true);
    cleanUpRelations();
}

const SGCS* Users::getItsSGCS(void) const {
    return itsSGCS;
}

void Users::setItsSGCS(SGCS* const p_SGCS) {
    if(p_SGCS != NULL)
        {
            p_SGCS->_setItsUsers(this);
        }
    _setItsSGCS(p_SGCS);
}

void Users::cleanUpRelations(void) {
    if(itsSGCS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSGCS");
            const Users* p_Users = itsSGCS->getItsUsers();
            if(p_Users != NULL)
                {
                    itsSGCS->__setItsUsers(NULL);
                }
            itsSGCS = NULL;
        }
}

void Users::__setItsSGCS(SGCS* const p_SGCS) {
    itsSGCS = p_SGCS;
    if(p_SGCS != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSGCS", p_SGCS, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSGCS");
        }
}

void Users::_setItsSGCS(SGCS* const p_SGCS) {
    if(itsSGCS != NULL)
        {
            itsSGCS->__setItsUsers(NULL);
        }
    __setItsSGCS(p_SGCS);
}

void Users::_clearItsSGCS(void) {
    NOTIFY_RELATION_CLEARED("itsSGCS");
    itsSGCS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUsers::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSGCS", false, true);
    if(myReal->itsSGCS)
        {
            aomsRelations->ADD_ITEM(myReal->itsSGCS);
        }
}
//#]

IMPLEMENT_META_P(Users, BDD, BDD, false, OMAnimatedUsers)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Users.cpp
*********************************************************************/
