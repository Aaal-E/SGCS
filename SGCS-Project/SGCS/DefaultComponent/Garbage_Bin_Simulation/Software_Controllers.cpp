/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: Garbage_Bin_Simulation
	Model Element	: Software_Controllers
//!	Generated Date	: Thu, 13, Jul 2023  
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Software_Controllers.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Software_Controllers.h"
//#[ ignore
#define BDD_Software_Controllers_Software_Controllers_SERIALIZE OM_NO_OP
//#]

//## package BDD

//## class Software_Controllers
Software_Controllers::Software_Controllers(void) {
    NOTIFY_CONSTRUCTOR(Software_Controllers, Software_Controllers(), 0, BDD_Software_Controllers_Software_Controllers_SERIALIZE);
}

Software_Controllers::~Software_Controllers(void) {
    NOTIFY_DESTRUCTOR(~Software_Controllers, true);
}

const UC_Citizen_check_fill_level* Software_Controllers::getItsUC_Citizen_check_fill_level(void) const {
    return &itsUC_Citizen_check_fill_level;
}

const UC_Citizen_deposit_garbage* Software_Controllers::getItsUC_Citizen_deposit_garbage(void) const {
    return &itsUC_Citizen_deposit_garbage;
}

const UC_Collect_garbage* Software_Controllers::getItsUC_Collect_garbage(void) const {
    return &itsUC_Collect_garbage;
}

const UC_Plan_route* Software_Controllers::getItsUC_Plan_route(void) const {
    return &itsUC_Plan_route;
}

const UC_System_overview* Software_Controllers::getItsUC_System_overview(void) const {
    return &itsUC_System_overview;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSoftware_Controllers::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsUC_Plan_route", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsUC_Plan_route);
    aomsRelations->addRelation("itsUC_Citizen_deposit_garbage", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsUC_Citizen_deposit_garbage);
    aomsRelations->addRelation("itsUC_Citizen_check_fill_level", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsUC_Citizen_check_fill_level);
    aomsRelations->addRelation("itsUC_System_overview", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsUC_System_overview);
    aomsRelations->addRelation("itsUC_Collect_garbage", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsUC_Collect_garbage);
}
//#]

IMPLEMENT_META_P(Software_Controllers, BDD, BDD, false, OMAnimatedSoftware_Controllers)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Software_Controllers.cpp
*********************************************************************/
