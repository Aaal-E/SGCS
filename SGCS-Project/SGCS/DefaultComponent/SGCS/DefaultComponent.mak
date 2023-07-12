
SHELL=cmd
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug=-g
CPPCompileRelease=-O
LinkDebug=-g
LinkRelease=-O

ConfigurationCPPCompileSwitches=   $(INCLUDE_QUALIFIER). $(INCLUDE_QUALIFIER)$(OMROOT) $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/oxf $(DEFINE_QUALIFIER)MINGW $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES)  $(CPPCompileDebug) -c

#########################################
###### Predefined macros ################

INCLUDE_QUALIFIER=-I
DEFINE_QUALIFIER=-D
CC=g++
LIB_CMD=ar
LINK_CMD=g++
LIB_FLAGS=rvu
LINK_FLAGS= $(LinkDebug)   

#########################################
####### Context macros ##################

FLAGSFILE=
RULESFILE=
OMROOT="C:\Program Files (x86)\IBM\Rhapsody\9.0\Share"
RHPROOT="C:\Program Files (x86)\IBM\Rhapsody\9.0"
FRAMEWORK_LIB_ROOT="C:\ProgramData\IBM\Rhapsody\9.0\UserShare"

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.o
EXE_EXT=.exe
LIB_EXT=.a

INSTRUMENTATION=None

TIME_MODEL=RealTime

TARGET_TYPE=Executable

TARGET_NAME=DefaultComponent

all : $(TARGET_NAME)$(EXE_EXT) DefaultComponent.mak

TARGET_MAIN=MainDefaultComponent

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/MinGW

ADDITIONAL_OBJS=

OBJS= \
  part_0.o \
  Garbage_Bin.o \
  Communication_System.o \
  Dispatch.o \
  Truck.o \
  Weight_sensor.o \
  Volume_sensor.o \
  Data_Storage.o \
  Analyzer.o \
  GPS.o \
  Main_Server.o \
  Temperature_sensor.o \
  Web_Dashboard.o \
  SGCS.o \
  Garbage_Disposal_Sites.o \
  Truck_refuel_stations.o \
  Users.o \
  Electricity_provider.o \
  block_39.o \
  Recycling_center.o \
  UC_Collect_garbage.o \
  UC_Plan_route.o \
  UC_System_overview.o \
  UC_Citizen_check_fill_level.o \
  UC_Citizen_deposit_garbage.o \
  Citizen.o \
  Admin.o \
  Driver.o \
  BDD.o \
  UCs_Implementations.o




#########################################
####### Predefined macros ###############
$(OBJS) :  $(INST_LIBS) $(OXF_LIBS)

ifeq ($(INSTRUMENTATION),Animation)

INST_FLAGS=$(DEFINE_QUALIFIER)OMANIMATOR $(DEFINE_QUALIFIER)__USE_W32_SOCKETS 
INST_INCLUDES=$(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/aom $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/tom
INST_LIBS=$(FRAMEWORK_LIB_ROOT)/LangCpp/lib/mingwaomanimx86$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)/LangCpp/lib/mingwoxsiminstx86$(LIB_EXT)
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)/LangCpp/lib/mingwoxfinstx86$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)/LangCpp/lib/mingwomcomapplx86$(LIB_EXT)
SOCK_LIB=-lws2_32

else
ifeq ($(INSTRUMENTATION),Tracing)

INST_FLAGS=$(DEFINE_QUALIFIER)OMTRACER 
INST_INCLUDES=$(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/aom $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/tom
INST_LIBS=$(FRAMEWORK_LIB_ROOT)/LangCpp/lib/mingwtomtracex86$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)/LangCpp/lib/mingwaomtracex86$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)/LangCpp/lib/mingwoxsiminstx86$(LIB_EXT)
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)/LangCpp/lib/mingwoxfinstx86$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)/LangCpp/lib/mingwomcomapplx86$(LIB_EXT)
SOCK_LIB=-lws2_32

else
ifeq ($(INSTRUMENTATION),None)

INST_FLAGS= 
INST_INCLUDES=
INST_LIBS=$(FRAMEWORK_LIB_ROOT)/LangCpp/lib/mingwoxsimx86$(LIB_EXT)
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)/LangCpp/lib/mingwoxfx86$(LIB_EXT)
SOCK_LIB=-lws2_32

else
	@echo An invalid Instrumentation $(INSTRUMENTATION) is specified.
	exit
endif
endif
endif

.SUFFIXES: $(CPP_EXT)

#####################################################################
##################### Context dependencies and commands #############






part_0.o : part_0.cpp part_0.h    BDD.h 
	@echo Compiling part_0.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o part_0.o part_0.cpp




Garbage_Bin.o : Garbage_Bin.cpp Garbage_Bin.h    BDD.h Communication_System.h Weight_sensor.h Volume_sensor.h Temperature_sensor.h SGCS.h 
	@echo Compiling Garbage_Bin.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Garbage_Bin.o Garbage_Bin.cpp




Communication_System.o : Communication_System.cpp Communication_System.h    BDD.h Dispatch.h Garbage_Bin.h Data_Storage.h Main_Server.h SGCS.h 
	@echo Compiling Communication_System.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Communication_System.o Communication_System.cpp




Dispatch.o : Dispatch.cpp Dispatch.h    BDD.h Truck.h Communication_System.h Main_Server.h 
	@echo Compiling Dispatch.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Dispatch.o Dispatch.cpp




Truck.o : Truck.cpp Truck.h    BDD.h Dispatch.h GPS.h SGCS.h 
	@echo Compiling Truck.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Truck.o Truck.cpp




Weight_sensor.o : Weight_sensor.cpp Weight_sensor.h    BDD.h SGCS.h 
	@echo Compiling Weight_sensor.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Weight_sensor.o Weight_sensor.cpp




Volume_sensor.o : Volume_sensor.cpp Volume_sensor.h    BDD.h SGCS.h 
	@echo Compiling Volume_sensor.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Volume_sensor.o Volume_sensor.cpp




Data_Storage.o : Data_Storage.cpp Data_Storage.h    BDD.h Communication_System.h Analyzer.h Main_Server.h Web_Dashboard.h 
	@echo Compiling Data_Storage.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Data_Storage.o Data_Storage.cpp




Analyzer.o : Analyzer.cpp Analyzer.h    BDD.h Data_Storage.h Main_Server.h 
	@echo Compiling Analyzer.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Analyzer.o Analyzer.cpp




GPS.o : GPS.cpp GPS.h    BDD.h 
	@echo Compiling GPS.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o GPS.o GPS.cpp




Main_Server.o : Main_Server.cpp Main_Server.h    BDD.h Communication_System.h Dispatch.h Data_Storage.h Web_Dashboard.h Analyzer.h SGCS.h 
	@echo Compiling Main_Server.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Main_Server.o Main_Server.cpp




Temperature_sensor.o : Temperature_sensor.cpp Temperature_sensor.h    BDD.h SGCS.h 
	@echo Compiling Temperature_sensor.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Temperature_sensor.o Temperature_sensor.cpp




Web_Dashboard.o : Web_Dashboard.cpp Web_Dashboard.h    BDD.h Main_Server.h Data_Storage.h 
	@echo Compiling Web_Dashboard.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Web_Dashboard.o Web_Dashboard.cpp




SGCS.o : SGCS.cpp SGCS.h    BDD.h Recycling_center.h Garbage_Disposal_Sites.h Truck_refuel_stations.h Electricity_provider.h Users.h Main_Server.h Truck.h Temperature_sensor.h Weight_sensor.h Volume_sensor.h Garbage_Bin.h Communication_System.h 
	@echo Compiling SGCS.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o SGCS.o SGCS.cpp




Garbage_Disposal_Sites.o : Garbage_Disposal_Sites.cpp Garbage_Disposal_Sites.h    BDD.h SGCS.h 
	@echo Compiling Garbage_Disposal_Sites.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Garbage_Disposal_Sites.o Garbage_Disposal_Sites.cpp




Truck_refuel_stations.o : Truck_refuel_stations.cpp Truck_refuel_stations.h    BDD.h SGCS.h 
	@echo Compiling Truck_refuel_stations.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Truck_refuel_stations.o Truck_refuel_stations.cpp




Users.o : Users.cpp Users.h    BDD.h SGCS.h 
	@echo Compiling Users.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Users.o Users.cpp




Electricity_provider.o : Electricity_provider.cpp Electricity_provider.h    BDD.h SGCS.h 
	@echo Compiling Electricity_provider.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Electricity_provider.o Electricity_provider.cpp




block_39.o : block_39.cpp block_39.h    BDD.h 
	@echo Compiling block_39.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o block_39.o block_39.cpp




Recycling_center.o : Recycling_center.cpp Recycling_center.h    BDD.h SGCS.h 
	@echo Compiling Recycling_center.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Recycling_center.o Recycling_center.cpp




UC_Collect_garbage.o : UC_Collect_garbage.cpp UC_Collect_garbage.h    BDD.h 
	@echo Compiling UC_Collect_garbage.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o UC_Collect_garbage.o UC_Collect_garbage.cpp




UC_Plan_route.o : UC_Plan_route.cpp UC_Plan_route.h    BDD.h 
	@echo Compiling UC_Plan_route.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o UC_Plan_route.o UC_Plan_route.cpp




UC_System_overview.o : UC_System_overview.cpp UC_System_overview.h    BDD.h 
	@echo Compiling UC_System_overview.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o UC_System_overview.o UC_System_overview.cpp




UC_Citizen_check_fill_level.o : UC_Citizen_check_fill_level.cpp UC_Citizen_check_fill_level.h    BDD.h 
	@echo Compiling UC_Citizen_check_fill_level.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o UC_Citizen_check_fill_level.o UC_Citizen_check_fill_level.cpp




UC_Citizen_deposit_garbage.o : UC_Citizen_deposit_garbage.cpp UC_Citizen_deposit_garbage.h    BDD.h 
	@echo Compiling UC_Citizen_deposit_garbage.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o UC_Citizen_deposit_garbage.o UC_Citizen_deposit_garbage.cpp




Citizen.o : Citizen.cpp Citizen.h    
	@echo Compiling Citizen.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Citizen.o Citizen.cpp




Admin.o : Admin.cpp Admin.h    
	@echo Compiling Admin.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Admin.o Admin.cpp




Driver.o : Driver.cpp Driver.h    
	@echo Compiling Driver.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Driver.o Driver.cpp




BDD.o : BDD.cpp BDD.h    Garbage_Bin.h Communication_System.h Dispatch.h Truck.h Weight_sensor.h Volume_sensor.h Data_Storage.h Analyzer.h GPS.h Main_Server.h Temperature_sensor.h Web_Dashboard.h SGCS.h Garbage_Disposal_Sites.h Truck_refuel_stations.h Users.h Electricity_provider.h block_39.h Recycling_center.h UC_Collect_garbage.h UC_Plan_route.h UC_System_overview.h UC_Citizen_check_fill_level.h UC_Citizen_deposit_garbage.h part_0.h 
	@echo Compiling BDD.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o BDD.o BDD.cpp




UCs_Implementations.o : UCs_Implementations.cpp UCs_Implementations.h    
	@echo Compiling UCs_Implementations.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o UCs_Implementations.o UCs_Implementations.cpp







$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS)
	@echo Compiling $(TARGET_MAIN)$(CPP_EXT)
	@$(CC) $(ConfigurationCPPCompileSwitches) -o  $(TARGET_MAIN)$(OBJ_EXT) $(TARGET_MAIN)$(CPP_EXT)

####################################################################
############## Predefined Instructions #############################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) DefaultComponent.mak
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	@$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(OXF_LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(INST_LIBS) \
	$(SOCK_LIB) \
	$(LINK_FLAGS) -o $(TARGET_NAME)$(EXE_EXT)

$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) DefaultComponent.mak
	@echo Building library $@
	@$(LIB_CMD) $(LIB_FLAGS) $(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS)



clean:
	@echo Cleanup
	if exist part_0.o erase part_0.o
	if exist Garbage_Bin.o erase Garbage_Bin.o
	if exist Communication_System.o erase Communication_System.o
	if exist Dispatch.o erase Dispatch.o
	if exist Truck.o erase Truck.o
	if exist Weight_sensor.o erase Weight_sensor.o
	if exist Volume_sensor.o erase Volume_sensor.o
	if exist Data_Storage.o erase Data_Storage.o
	if exist Analyzer.o erase Analyzer.o
	if exist GPS.o erase GPS.o
	if exist Main_Server.o erase Main_Server.o
	if exist Temperature_sensor.o erase Temperature_sensor.o
	if exist Web_Dashboard.o erase Web_Dashboard.o
	if exist SGCS.o erase SGCS.o
	if exist Garbage_Disposal_Sites.o erase Garbage_Disposal_Sites.o
	if exist Truck_refuel_stations.o erase Truck_refuel_stations.o
	if exist Users.o erase Users.o
	if exist Electricity_provider.o erase Electricity_provider.o
	if exist block_39.o erase block_39.o
	if exist Recycling_center.o erase Recycling_center.o
	if exist UC_Collect_garbage.o erase UC_Collect_garbage.o
	if exist UC_Plan_route.o erase UC_Plan_route.o
	if exist UC_System_overview.o erase UC_System_overview.o
	if exist UC_Citizen_check_fill_level.o erase UC_Citizen_check_fill_level.o
	if exist UC_Citizen_deposit_garbage.o erase UC_Citizen_deposit_garbage.o
	if exist Citizen.o erase Citizen.o
	if exist Admin.o erase Admin.o
	if exist Driver.o erase Driver.o
	if exist BDD.o erase BDD.o
	if exist UCs_Implementations.o erase UCs_Implementations.o
	if exist $(TARGET_MAIN)$(OBJ_EXT) erase $(TARGET_MAIN)$(OBJ_EXT)
	if exist $(TARGET_NAME)$(LIB_EXT) erase $(TARGET_NAME)$(LIB_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT) erase $(TARGET_NAME)$(EXE_EXT)

