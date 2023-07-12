/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20192435
	Component	: DefaultComponent 
	Configuration 	: Garbage_Bin_Simulation
	Model Element	: Garbage_Bin
//!	Generated Date	: Thu, 13, Jul 2023  
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Garbage_Bin.h
*********************************************************************/

#ifndef Garbage_Bin_H
#define Garbage_Bin_H

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
//## classInstance itsTemperature_sensor
#include "Temperature_sensor.h"
//## classInstance itsVolume_sensor
#include "Volume_sensor.h"
//## classInstance itsWeight_sensor
#include "Weight_sensor.h"
//## link itsCommunication_System
class Communication_System;

//## link itsSGCS
class SGCS;

//## package BDD

//## class Garbage_Bin
class Garbage_Bin : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedGarbage_Bin;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit Garbage_Bin(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~Garbage_Bin(void);
    
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
    const OMString getGarbage_type(void) const;
    
    //## auto_generated
    void setGarbage_type(const OMString p_Garbage_type);
    
    //## auto_generated
    const int getLocation(void) const;
    
    //## auto_generated
    void setLocation(const int p_Location);
    
    //## auto_generated
    const Communication_System* getItsCommunication_System(void) const;
    
    //## auto_generated
    void setItsCommunication_System(Communication_System* const p_Communication_System);
    
    //## auto_generated
    const Communication_System* getItsCommunication_System_1(void) const;
    
    //## auto_generated
    void setItsCommunication_System_1(Communication_System* const p_Communication_System);
    
    //## auto_generated
    const Communication_System* getItsCommunication_System_2(void) const;
    
    //## auto_generated
    void setItsCommunication_System_2(Communication_System* const p_Communication_System);
    
    //## auto_generated
    const SGCS* getItsSGCS(void) const;
    
    //## auto_generated
    void setItsSGCS(SGCS* const p_SGCS);
    
    //## auto_generated
    const Temperature_sensor* getItsTemperature_sensor(void) const;
    
    //## auto_generated
    const Volume_sensor* getItsVolume_sensor(void) const;
    
    //## auto_generated
    const Weight_sensor* getItsWeight_sensor(void) const;
    
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
    
    OMString Garbage_type;		//## attribute Garbage_type
    
    int Location;		//## attribute Location
    
    ////    Relations and components    ////
    
    Communication_System* itsCommunication_System;		//## link itsCommunication_System
    
    Communication_System* itsCommunication_System_1;		//## link itsCommunication_System_1
    
    Communication_System* itsCommunication_System_2;		//## link itsCommunication_System_2
    
    SGCS* itsSGCS;		//## link itsSGCS
    
    Temperature_sensor itsTemperature_sensor;		//## classInstance itsTemperature_sensor
    
    Volume_sensor itsVolume_sensor;		//## classInstance itsVolume_sensor
    
    Weight_sensor itsWeight_sensor;		//## classInstance itsWeight_sensor
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsCommunication_System(Communication_System* const p_Communication_System);
    
    //## auto_generated
    void _setItsCommunication_System(Communication_System* const p_Communication_System);
    
    //## auto_generated
    void _clearItsCommunication_System(void);
    
    //## auto_generated
    void __setItsCommunication_System_1(Communication_System* const p_Communication_System);
    
    //## auto_generated
    void _setItsCommunication_System_1(Communication_System* p_Communication_System);
    
    //## auto_generated
    void _clearItsCommunication_System_1(void);
    
    //## auto_generated
    void __setItsCommunication_System_2(Communication_System* const p_Communication_System);
    
    //## auto_generated
    void _setItsCommunication_System_2(Communication_System* p_Communication_System);
    
    //## auto_generated
    void _clearItsCommunication_System_2(void);
    
    //## auto_generated
    void __setItsSGCS(SGCS* const p_SGCS);
    
    //## auto_generated
    void _setItsSGCS(SGCS* p_SGCS);
    
    //## auto_generated
    void _clearItsSGCS(void);
    
    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    //## statechart_method
    inline bool rootState_isCompleted(void);
    
    // terminationstate_0:
    //## statechart_method
    inline RhpBoolean terminationstate_0_IN(void) const;
    
    // IsEpmptying:
    //## statechart_method
    inline RhpBoolean IsEpmptying_IN(void) const;
    
    // Fullbin:
    //## statechart_method
    inline RhpBoolean Fullbin_IN(void) const;
    
    // EmptyBin:
    //## statechart_method
    inline RhpBoolean EmptyBin_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum Garbage_Bin_Enum {
        OMNonState = 0,
        terminationstate_0 = 1,
        IsEpmptying = 2,
        Fullbin = 3,
        EmptyBin = 4
    };
//#]

private :

//#[ ignore
    Garbage_Bin_Enum rootState_subState;
    
    Garbage_Bin_Enum rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedGarbage_Bin : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Garbage_Bin, OMAnimatedGarbage_Bin)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void terminationstate_0_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void IsEpmptying_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Fullbin_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void EmptyBin_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean Garbage_Bin::rootState_IN(void) const {
    return true;
}

inline bool Garbage_Bin::rootState_isCompleted(void) {
    return ( IS_IN(terminationstate_0) == true );
}

inline RhpBoolean Garbage_Bin::terminationstate_0_IN(void) const {
    return rootState_subState == terminationstate_0;
}

inline RhpBoolean Garbage_Bin::IsEpmptying_IN(void) const {
    return rootState_subState == IsEpmptying;
}

inline RhpBoolean Garbage_Bin::Fullbin_IN(void) const {
    return rootState_subState == Fullbin;
}

inline RhpBoolean Garbage_Bin::EmptyBin_IN(void) const {
    return rootState_subState == EmptyBin;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\Garbage_Bin_Simulation\Garbage_Bin.h
*********************************************************************/
