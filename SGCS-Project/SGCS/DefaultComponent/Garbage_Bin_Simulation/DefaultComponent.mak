
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug= /Zi /Od /D "_DEBUG" $(LIBCRT_FLAG)d  /Fd"$(TARGET_NAME)" 
CPPCompileRelease= /Ox /D"NDEBUG" $(LIBCRT_FLAG) /Fd"$(TARGET_NAME)" 
LinkDebug=
LinkRelease=
BuildSet=Debug
SUBSYSTEM=/SUBSYSTEM:console
RPFrameWorkDll=False
SimulinkLibName=

ConfigurationCPPCompileSwitches=   /I . /I . /I $(OMROOT)\LangCpp /I $(OMROOT)\LangCpp\oxf /nologo /W3 $(ENABLE_EH) $(CRT_FLAGS) $(CPPCompileDebug) /D "_AFXDLL" /D "WIN32" /D "_CONSOLE" /D "_MBCS" /D "_WINDOWS" $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES) /c   

SIMULINK_CONFIG=False
!IF "$(SIMULINK_CONFIG)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "OM_WITH_CLEANUP"
!ENDIF


!IF "$(RPFrameWorkDll)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "FRAMEWORK_DLL"
!ENDIF

################### Compilation flags ######################
############################################################
INCLUDE_QUALIFIER=/I
DEFINE_QUALIFIER=/D

!IF "False" == "True"
MT_PREFIX=MT
LIBCRT_FLAG=/MT
!ELSE
MT_PREFIX=
LIBCRT_FLAG=/MD
!ENDIF

LIB_PREFIX=MSVC15x86$(MT_PREFIX)

CRT_FLAGS=$(DEFINE_QUALIFIER)_CRT_SECURE_NO_DEPRECATE $(DEFINE_QUALIFIER)_CRT_SECURE_NO_WARNINGS
ENABLE_EH=/EHa

WINMM_LIB=winmm.lib

################### Commands definition #########################
#################################################################
RMDIR = rmdir
LIB_CMD=link.exe -lib
LINK_CMD=link.exe
LIB_FLAGS=$(LinkDebug)  /NOLOGO   
LINK_FLAGS=$(LinkDebug)  /NOLOGO    $(SUBSYSTEM) /MACHINE:x86 

############### Generated macros #################
##################################################

FLAGSFILE=
RULESFILE=
OMROOT="C:\Program Files (x86)\IBM\Rhapsody\9.0\Share"
RHPROOT="C:\Program Files (x86)\IBM\Rhapsody\9.0"
FRAMEWORK_LIB_ROOT="C:\ProgramData\IBM\Rhapsody\9.0\UserShare"

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.obj
EXE_EXT=.exe
LIB_EXT=.lib

INSTRUMENTATION=Animation

TIME_MODEL=RealTime

TARGET_TYPE=Executable

TARGET_NAME=DefaultComponent

all : $(TARGET_NAME)$(EXE_EXT) DefaultComponent.mak

TARGET_MAIN=MainDefaultComponent

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/WIN32

ADDITIONAL_OBJS=

OBJS= \
  Garbage_Bin.obj \
  Truck.obj \
  Communication_System.obj \
  Dispatch.obj \
  GPS.obj \
  SGCS.obj \
  Recycling_center.obj \
  Driver.obj \
  Garbage_Disposal_Sites.obj \
  Truck_refuel_stations.obj \
  Electricity_provider.obj \
  Users.obj \
  Main_Server.obj \
  Data_Storage.obj \
  Analyzer.obj \
  Web_Dashboard.obj \
  Temperature_sensor.obj \
  Weight_sensor.obj \
  Volume_sensor.obj \
  Software_Controllers.obj \
  UC_Plan_route.obj \
  UC_Citizen_deposit_garbage.obj \
  UC_Citizen_check_fill_level.obj \
  UC_System_overview.obj \
  UC_Collect_garbage.obj \
  BDD.obj \
  UCs.obj \
  UCs_Implementations.obj




OBJ_DIR=

!IF "$(OBJ_DIR)"!=""
CREATE_OBJ_DIR=if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
CLEAN_OBJ_DIR= if exist $(OBJ_DIR) $(RMDIR) $(OBJ_DIR)
!ELSE
CREATE_OBJ_DIR=
CLEAN_OBJ_DIR=
!ENDIF

######################## Predefined macros ############################
#######################################################################
!IF "$(OBJS)" != ""
$(OBJS) : $(INST_LIBS) $(OXF_LIBS)
!ENDIF

LIB_POSTFIX=
!IF "$(BuildSet)"=="Release"
LIB_POSTFIX=R
!ENDIF

!IF "$(TARGET_TYPE)" == "Executable"
LinkDebug=$(LinkDebug) /DEBUG
LinkRelease=$(LinkRelease) /OPT:NOREF
!ELSEIF "$(TARGET_TYPE)" == "Library"
LinkDebug=$(LinkDebug)
!ENDIF


!IF "$(INSTRUMENTATION)" == "Animation"
INST_FLAGS=/D "OMANIMATOR"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS= 
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfanimdll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)aomanim$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "Tracing"
INST_FLAGS=/D "OMTRACER"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS=
OXF_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxftracedll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)tomtrace$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)aomtrace$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "None" 
INST_FLAGS=
INST_INCLUDES=
INST_LIBS=
!IF "$(RPFrameWorkDll)" == "True"
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfdll$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ELSE
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxf$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ENDIF
SOCK_LIB=

!ELSE
!ERROR An invalid Instrumentation $(INSTRUMENTATION) is specified.
!ENDIF



################## Generated dependencies ########################
##################################################################






Garbage_Bin.obj : Garbage_Bin.cpp Garbage_Bin.h    BDD.h Communication_System.h Weight_sensor.h Volume_sensor.h Temperature_sensor.h SGCS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Garbage_Bin.obj" "Garbage_Bin.cpp" 



Truck.obj : Truck.cpp Truck.h    BDD.h Dispatch.h GPS.h SGCS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Truck.obj" "Truck.cpp" 



Communication_System.obj : Communication_System.cpp Communication_System.h    BDD.h Dispatch.h Garbage_Bin.h Data_Storage.h Main_Server.h SGCS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Communication_System.obj" "Communication_System.cpp" 



Dispatch.obj : Dispatch.cpp Dispatch.h    BDD.h Truck.h Communication_System.h Main_Server.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Dispatch.obj" "Dispatch.cpp" 



GPS.obj : GPS.cpp GPS.h    BDD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"GPS.obj" "GPS.cpp" 



SGCS.obj : SGCS.cpp SGCS.h    BDD.h Recycling_center.h Garbage_Disposal_Sites.h Truck_refuel_stations.h Electricity_provider.h Users.h Main_Server.h Truck.h Temperature_sensor.h Weight_sensor.h Volume_sensor.h Garbage_Bin.h Communication_System.h Software_Controllers.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SGCS.obj" "SGCS.cpp" 



Recycling_center.obj : Recycling_center.cpp Recycling_center.h    BDD.h SGCS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Recycling_center.obj" "Recycling_center.cpp" 



Driver.obj : Driver.cpp Driver.h    UCs.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Driver.obj" "Driver.cpp" 



Garbage_Disposal_Sites.obj : Garbage_Disposal_Sites.cpp Garbage_Disposal_Sites.h    BDD.h SGCS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Garbage_Disposal_Sites.obj" "Garbage_Disposal_Sites.cpp" 



Truck_refuel_stations.obj : Truck_refuel_stations.cpp Truck_refuel_stations.h    BDD.h SGCS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Truck_refuel_stations.obj" "Truck_refuel_stations.cpp" 



Electricity_provider.obj : Electricity_provider.cpp Electricity_provider.h    BDD.h SGCS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Electricity_provider.obj" "Electricity_provider.cpp" 



Users.obj : Users.cpp Users.h    BDD.h SGCS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Users.obj" "Users.cpp" 



Main_Server.obj : Main_Server.cpp Main_Server.h    BDD.h Communication_System.h Dispatch.h Data_Storage.h Web_Dashboard.h Analyzer.h SGCS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Main_Server.obj" "Main_Server.cpp" 



Data_Storage.obj : Data_Storage.cpp Data_Storage.h    BDD.h Communication_System.h Analyzer.h Main_Server.h Web_Dashboard.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Data_Storage.obj" "Data_Storage.cpp" 



Analyzer.obj : Analyzer.cpp Analyzer.h    BDD.h Data_Storage.h Main_Server.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Analyzer.obj" "Analyzer.cpp" 



Web_Dashboard.obj : Web_Dashboard.cpp Web_Dashboard.h    BDD.h Main_Server.h Data_Storage.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Web_Dashboard.obj" "Web_Dashboard.cpp" 



Temperature_sensor.obj : Temperature_sensor.cpp Temperature_sensor.h    BDD.h SGCS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Temperature_sensor.obj" "Temperature_sensor.cpp" 



Weight_sensor.obj : Weight_sensor.cpp Weight_sensor.h    BDD.h SGCS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Weight_sensor.obj" "Weight_sensor.cpp" 



Volume_sensor.obj : Volume_sensor.cpp Volume_sensor.h    BDD.h SGCS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Volume_sensor.obj" "Volume_sensor.cpp" 



Software_Controllers.obj : Software_Controllers.cpp Software_Controllers.h    BDD.h UC_Plan_route.h UC_Citizen_deposit_garbage.h UC_Citizen_check_fill_level.h UC_System_overview.h UC_Collect_garbage.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Software_Controllers.obj" "Software_Controllers.cpp" 



UC_Plan_route.obj : UC_Plan_route.cpp UC_Plan_route.h    BDD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UC_Plan_route.obj" "UC_Plan_route.cpp" 



UC_Citizen_deposit_garbage.obj : UC_Citizen_deposit_garbage.cpp UC_Citizen_deposit_garbage.h    BDD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UC_Citizen_deposit_garbage.obj" "UC_Citizen_deposit_garbage.cpp" 



UC_Citizen_check_fill_level.obj : UC_Citizen_check_fill_level.cpp UC_Citizen_check_fill_level.h    BDD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UC_Citizen_check_fill_level.obj" "UC_Citizen_check_fill_level.cpp" 



UC_System_overview.obj : UC_System_overview.cpp UC_System_overview.h    BDD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UC_System_overview.obj" "UC_System_overview.cpp" 



UC_Collect_garbage.obj : UC_Collect_garbage.cpp UC_Collect_garbage.h    BDD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UC_Collect_garbage.obj" "UC_Collect_garbage.cpp" 



BDD.obj : BDD.cpp BDD.h    Garbage_Bin.h Communication_System.h Dispatch.h Truck.h Weight_sensor.h Volume_sensor.h Data_Storage.h Analyzer.h GPS.h Main_Server.h Temperature_sensor.h Web_Dashboard.h SGCS.h Garbage_Disposal_Sites.h Truck_refuel_stations.h Users.h Electricity_provider.h Recycling_center.h Software_Controllers.h UC_Collect_garbage.h UC_Plan_route.h UC_System_overview.h UC_Citizen_check_fill_level.h UC_Citizen_deposit_garbage.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"BDD.obj" "BDD.cpp" 



UCs.obj : UCs.cpp UCs.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UCs.obj" "UCs.cpp" 



UCs_Implementations.obj : UCs_Implementations.cpp UCs_Implementations.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UCs_Implementations.obj" "UCs_Implementations.cpp" 






$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS) 
	$(CPP) $(ConfigurationCPPCompileSwitches) /Fo"$(TARGET_MAIN)$(OBJ_EXT)" $(TARGET_MAIN)$(CPP_EXT)

########################## Linking instructions ###############################
###############################################################################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) DefaultComponent.mak 
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(SOCK_LIB) \
	$(WINMM_LIB) \
	$(LINK_FLAGS) /out:$(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest mt.exe -manifest $@.manifest -outputresource:$(TARGET_NAME)$(EXE_EXT);1



$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) DefaultComponent.mak
	@echo Building library $@
	$(LIB_CMD) $(LIB_FLAGS) /out:$(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS) $(LIBS)

clean:
	@echo Cleanup
	if exist Garbage_Bin.obj erase Garbage_Bin.obj
	if exist Truck.obj erase Truck.obj
	if exist Communication_System.obj erase Communication_System.obj
	if exist Dispatch.obj erase Dispatch.obj
	if exist GPS.obj erase GPS.obj
	if exist SGCS.obj erase SGCS.obj
	if exist Recycling_center.obj erase Recycling_center.obj
	if exist Driver.obj erase Driver.obj
	if exist Garbage_Disposal_Sites.obj erase Garbage_Disposal_Sites.obj
	if exist Truck_refuel_stations.obj erase Truck_refuel_stations.obj
	if exist Electricity_provider.obj erase Electricity_provider.obj
	if exist Users.obj erase Users.obj
	if exist Main_Server.obj erase Main_Server.obj
	if exist Data_Storage.obj erase Data_Storage.obj
	if exist Analyzer.obj erase Analyzer.obj
	if exist Web_Dashboard.obj erase Web_Dashboard.obj
	if exist Temperature_sensor.obj erase Temperature_sensor.obj
	if exist Weight_sensor.obj erase Weight_sensor.obj
	if exist Volume_sensor.obj erase Volume_sensor.obj
	if exist Software_Controllers.obj erase Software_Controllers.obj
	if exist UC_Plan_route.obj erase UC_Plan_route.obj
	if exist UC_Citizen_deposit_garbage.obj erase UC_Citizen_deposit_garbage.obj
	if exist UC_Citizen_check_fill_level.obj erase UC_Citizen_check_fill_level.obj
	if exist UC_System_overview.obj erase UC_System_overview.obj
	if exist UC_Collect_garbage.obj erase UC_Collect_garbage.obj
	if exist BDD.obj erase BDD.obj
	if exist UCs.obj erase UCs.obj
	if exist UCs_Implementations.obj erase UCs_Implementations.obj
	if exist $(TARGET_MAIN)$(OBJ_EXT) erase $(TARGET_MAIN)$(OBJ_EXT)
	if exist *$(OBJ_EXT) erase *$(OBJ_EXT)
	if exist $(TARGET_NAME).pdb erase $(TARGET_NAME).pdb
	if exist $(TARGET_NAME)$(LIB_EXT) erase $(TARGET_NAME)$(LIB_EXT)
	if exist $(TARGET_NAME).ilk erase $(TARGET_NAME).ilk
	if exist $(TARGET_NAME)$(EXE_EXT) erase $(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest erase $(TARGET_NAME)$(EXE_EXT).manifest
	$(CLEAN_OBJ_DIR)
	
