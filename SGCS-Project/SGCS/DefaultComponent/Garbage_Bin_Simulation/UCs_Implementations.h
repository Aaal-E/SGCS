/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: Garbage_Bin_Simulation
	Model Element	: UCs_Implementations
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\Garbage_Bin_Simulation\UCs_Implementations.h
*********************************************************************/

#ifndef UCs_Implementations_H
#define UCs_Implementations_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include <event.h>
//## package UCs_Implementations



//## event Receive_route()
class Receive_route : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedReceive_route;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Receive_route(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedReceive_route : virtual public AOMEvent {
    DECLARE_META_EVENT(Receive_route)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID Receive_route_UCs_Implementations_id;
//#]

//## event Request_route()
class Request_route : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedRequest_route;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Request_route(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedRequest_route : virtual public AOMEvent {
    DECLARE_META_EVENT(Request_route)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID Request_route_UCs_Implementations_id;
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\Garbage_Bin_Simulation\UCs_Implementations.h
*********************************************************************/
