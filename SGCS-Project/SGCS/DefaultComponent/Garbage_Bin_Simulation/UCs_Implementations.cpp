/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: Garbage_Bin_Simulation
	Model Element	: UCs_Implementations
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\Garbage_Bin_Simulation\UCs_Implementations.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "UCs_Implementations.h"
//#[ ignore
#define Receive_route_SERIALIZE OM_NO_OP

#define Receive_route_UNSERIALIZE OM_NO_OP

#define Receive_route_CONSTRUCTOR Receive_route()

#define Request_route_SERIALIZE OM_NO_OP

#define Request_route_UNSERIALIZE OM_NO_OP

#define Request_route_CONSTRUCTOR Request_route()
//#]

//## package UCs_Implementations


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(UCs_Implementations, UCs_Implementations)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event Receive_route()
Receive_route::Receive_route(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(Receive_route)
    setId(Receive_route_UCs_Implementations_id);
}

//#[ ignore
const IOxfEvent::ID Receive_route_UCs_Implementations_id(28801);
//#]

IMPLEMENT_META_EVENT_P(Receive_route, UCs_Implementations, UCs_Implementations, Receive_route())

//## event Request_route()
Request_route::Request_route(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(Request_route)
    setId(Request_route_UCs_Implementations_id);
}

//#[ ignore
const IOxfEvent::ID Request_route_UCs_Implementations_id(28802);
//#]

IMPLEMENT_META_EVENT_P(Request_route, UCs_Implementations, UCs_Implementations, Request_route())

/*********************************************************************
	File Path	: DefaultComponent\Garbage_Bin_Simulation\UCs_Implementations.cpp
*********************************************************************/
