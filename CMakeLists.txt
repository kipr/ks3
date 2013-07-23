project(ks3)
cmake_minimum_required(VERSION 2.8)

enable_testing()

set(SOURCE_DIR ${CMAKE_SOURCE_DIR}/src)
set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
set(UI_DIR ${CMAKE_SOURCE_DIR}/ui)
set(QRC_DIR ${CMAKE_SOURCE_DIR}/rc)

################
# Gather files #
################

file(GLOB SIM_SOURCES ${SOURCE_DIR}/sim/*.cpp)
file(GLOB GUI_SOURCES ${SOURCE_DIR}/gui/*.cpp)
file(GLOB OTHER_SOURCES ${SOURCE_DIR}/*.cpp)
set(SOURCES ${SIM_SOURCES} ${GUI_SOURCES} ${OTHER_SOURCES})

file(GLOB UIS ${UI_DIR}/*.ui)
file(GLOB QRCS ${RC_DIR}/*.qrc)

######
# Qt #
######

set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt5Widgets REQUIRED)

file(GLOB MOC_INCLUDES ${INCLUDE_DIR}/ks3/gui/*.hpp)

qt5_wrap_ui(SOURCES ${UIS})
qt5_wrap_cpp(SOURCES ${MOC_INCLUDES})

###########
# Project #
###########

add_definitions(-O3)

include_directories(${INCLUDE_DIR})

add_library(ks3 SHARED ${SOURCES})
qt5_use_modules(ks3 Widgets)

##############
# Executable #
##############

add_executable(ks ${SOURCE_DIR}/main.cpp)
target_link_libraries(ks ks3)

add_subdirectory(test)