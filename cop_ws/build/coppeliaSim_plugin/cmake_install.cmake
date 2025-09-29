# Install script for directory: /cop_ws/src/robomaster_sim/coppeliaSim_plugin

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/CoppeliaSim_Pro_V4_9_0_rev6_Ubuntu22_04/lua/simRobomaster-typecheck.lua")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/CoppeliaSim_Pro_V4_9_0_rev6_Ubuntu22_04/lua" TYPE FILE RENAME "simRobomaster-typecheck.lua" FILES "/cop_ws/build/coppeliaSim_plugin/generated/typecheck.lua")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/CoppeliaSim_Pro_V4_9_0_rev6_Ubuntu22_04/lua/simRobomaster.lua")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/CoppeliaSim_Pro_V4_9_0_rev6_Ubuntu22_04/lua" TYPE FILE RENAME "simRobomaster.lua" FILES "/cop_ws/src/robomaster_sim/coppeliaSim_plugin/simRobomaster.lua")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/CoppeliaSim_Pro_V4_9_0_rev6_Ubuntu22_04/manual/en/simRobomaster.htm")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/CoppeliaSim_Pro_V4_9_0_rev6_Ubuntu22_04/manual/en" TYPE FILE RENAME "simRobomaster.htm" FILES "/cop_ws/build/coppeliaSim_plugin/generated/reference.html")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/CoppeliaSim_Pro_V4_9_0_rev6_Ubuntu22_04/manual/index/simRobomaster.json")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/CoppeliaSim_Pro_V4_9_0_rev6_Ubuntu22_04/manual/index" TYPE FILE RENAME "simRobomaster.json" FILES "/cop_ws/build/coppeliaSim_plugin/generated/index.json")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/CoppeliaSim_Pro_V4_9_0_rev6_Ubuntu22_04/lua/simRobomaster-ce.lua")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/CoppeliaSim_Pro_V4_9_0_rev6_Ubuntu22_04/lua" TYPE FILE RENAME "simRobomaster-ce.lua" FILES "/cop_ws/build/coppeliaSim_plugin/generated/ce.lua")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/CoppeliaSim_Pro_V4_9_0_rev6_Ubuntu22_04/libsimRobomaster.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/CoppeliaSim_Pro_V4_9_0_rev6_Ubuntu22_04/libsimRobomaster.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/CoppeliaSim_Pro_V4_9_0_rev6_Ubuntu22_04/libsimRobomaster.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/CoppeliaSim_Pro_V4_9_0_rev6_Ubuntu22_04/libsimRobomaster.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/CoppeliaSim_Pro_V4_9_0_rev6_Ubuntu22_04" TYPE SHARED_LIBRARY FILES "/cop_ws/build/coppeliaSim_plugin/libsimRobomaster.so")
  if(EXISTS "$ENV{DESTDIR}/CoppeliaSim_Pro_V4_9_0_rev6_Ubuntu22_04/libsimRobomaster.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/CoppeliaSim_Pro_V4_9_0_rev6_Ubuntu22_04/libsimRobomaster.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/CoppeliaSim_Pro_V4_9_0_rev6_Ubuntu22_04/libsimRobomaster.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/CoppeliaSim_Pro_V4_9_0_rev6_Ubuntu22_04/models/robots/mobile/RoboMasterEP.ttm;/CoppeliaSim_Pro_V4_9_0_rev6_Ubuntu22_04/models/robots/mobile/RoboMasterS1.ttm")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/CoppeliaSim_Pro_V4_9_0_rev6_Ubuntu22_04/models/robots/mobile" TYPE FILE FILES
    "/cop_ws/src/robomaster_sim/coppeliaSim_plugin/../models/v2/RoboMasterEP.ttm"
    "/cop_ws/src/robomaster_sim/coppeliaSim_plugin/../models/v2/RoboMasterS1.ttm"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/CoppeliaSim_Pro_V4_9_0_rev6_Ubuntu22_04/models/components/sensors/RoboMasterDistanceSensor.ttm")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/CoppeliaSim_Pro_V4_9_0_rev6_Ubuntu22_04/models/components/sensors" TYPE FILE FILES "/cop_ws/src/robomaster_sim/coppeliaSim_plugin/../models/v2/RoboMasterDistanceSensor.ttm")
endif()

