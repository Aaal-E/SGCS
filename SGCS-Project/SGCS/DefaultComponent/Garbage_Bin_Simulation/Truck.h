/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: Garbage_Bin_Simulation
	Model Element	: Truck
//!	Generated Date	: Thu, 13, Jul 2023  
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Truck.h
*********************************************************************/

#ifndef Truck_H
#define Truck_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "BDD.h"
//## auto_generated
#include <omthread.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## classInstance itsGPS
#include "GPS.h"
//## link itsDispatch
class Dispatch;

//## link itsSGCS
class SGCS;

//## package BDD

//## class Truck
class Truck : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTruck;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit Truck(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~Truck(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const int getCapacity(void) const;
    
    //## auto_generated
    void setCapacity(const int p_Capacity);
    
    //## auto_generated
    const float getFill_level(void) const;
    
    //## auto_generated
    void setFill_level(const float p_Fill_level);
    
    //## auto_generated
    const float getFuel_level(void) const;
    
    //## auto_generated
    void setFuel_level(const float p_Fuel_level);
    
    //## auto_generated
    const OMString getGarbage_type(void) const;
    
    //## auto_generated
    void setGarbage_type(const OMString p_Garbage_type);
    
    //## auto_generated
    const Dispatch* getItsDispatch(void) const;
    
    //## auto_generated
    void setItsDispatch(Dispatch* const p_Dispatch);
    
    //## auto_generated
    const Dispatch* getItsDispatch_1(void) const;
    
    //## auto_generated
    void setItsDispatch_1(Dispatch* const p_Dispatch);
    
    //## auto_generated
    const GPS* getItsGPS(void) const;
    
    //## auto_generated
    const GPS* getItsGPS_1(void) const;
    
    //## auto_generated
    const SGCS* getItsSGCS(void) const;
    
    //## auto_generated
    void setItsSGCS(SGCS* const p_SGCS);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    int Capacity;		//## attribute Capacity
    
    float Fill_level;		//## attribute Fill_level
    
    float Fuel_level;		//## attribute Fuel_level
    
    OMString Garbage_type;		//## attribute Garbage_type
    
    ////    Relations and components    ////
    
    Dispatch* itsDispatch;		//## link itsDispatch
    
    Dispatch* itsDispatch_1;		//## link itsDispatch_1
    
    GPS itsGPS;		//## classInstance itsGPS
    
    GPS itsGPS_1;		//## classInstance itsGPS_1
    
    SGCS* itsSGCS;		//## link itsSGCS
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsDispatch(Dispatch* const p_Dispatch);
    
    //## auto_generated
    void _setItsDispatch(Dispatch* p_Dispatch);
    
    //## auto_generated
    void _clearItsDispatch(void);
    
    //## auto_generated
    void __setItsDispatch_1(Dispatch* const p_Dispatch);
    
    //## auto_generated
    void _setItsDispatch_1(Dispatch* p_Dispatch);
    
    //## auto_generated
    void _clearItsDispatch_1(void);
    
    //## auto_generated
    void __setItsSGCS(SGCS* const p_SGCS);
    
    //## auto_generated
    void _setItsSGCS(SGCS* const p_SGCS);
    
    //## auto_generated
    void _clearItsSGCS(void);
    
    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // OutFuelTruck:
    //## statechart_method
    inline RhpBoolean OutFuelTruck_IN(void) const;
    
    // NotFullTruck:
    //## statechart_method
    inline RhpBoolean NotFullTruck_IN(void) const;
    
    // FullTruck:
    //## statechart_method
    inline RhpBoolean FullTruck_IN(void) const;
    
    // Emptying_truck:
    //## statechart_method
    inline RhpBoolean Emptying_truck_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum Truck_Enum {
        OMNonState = 0,
        OutFuelTruck = 1,
        NotFullTruck = 2,
        FullTruck = 3,
        Emptying_truck = 4
    };
//#]

private :

//#[ ignore
    Truck_Enum rootState_subState;
    
    Truck_Enum rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTruck : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Truck, OMAnimatedTruck)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void OutFuelTruck_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void NotFullTruck_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void FullTruck_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Emptying_truck_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean Truck::rootState_IN(void) const {
    return true;
}

inline RhpBoolean Truck::OutFuelTruck_IN(void) const {
    return rootState_subState == OutFuelTruck;
}

inline RhpBoolean Truck::NotFullTruck_IN(void) const {
    return rootState_subState == NotFullTruck;
}

inline RhpBoolean Truck::FullTruck_IN(void) const {
    return rootState_subState == FullTruck;
}

inline RhpBoolean Truck::Emptying_truck_IN(void) const {
    return rootState_subState == Emptying_truck;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Truck.h
*********************************************************************/
