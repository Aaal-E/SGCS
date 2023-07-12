/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Users
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Users.cpp
*********************************************************************/

//## auto_generated
#include "Users.h"
//## link itsSGCS
#include "SGCS.h"
//## package BDD

//## class Users
Users::Users(void) : itsSGCS(NULL) {
}

Users::~Users(void) {
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
}

void Users::_setItsSGCS(SGCS* const p_SGCS) {
    if(itsSGCS != NULL)
        {
            itsSGCS->__setItsUsers(NULL);
        }
    __setItsSGCS(p_SGCS);
}

void Users::_clearItsSGCS(void) {
    itsSGCS = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Users.cpp
*********************************************************************/
