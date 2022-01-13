# Set CMAKE Version, Define Project
cmake_minimum_required (VERSION 3.1...3.21)
project(
	"BrainGenix-STS"
	VERSION "0.0.1"
	LANGUAGES CXX
	)

# Set Dirs
set(LIB_DIR "${CMAKE_CURRENT_SOURCE_DIR}/Third-Party")
set(SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/Source")
set(BIN_DIR "${CMAKE_CURRENT_SOURCE_DIR}/Binaries")
set(CMAKE_UTIL_DIR "${CMAKE_CURRENT_SOURCE_DIR}/CMake/Utils")
set(CMAKE_BUILD_UTILS_DIR "${CMAKE_CURRENT_SOURCE_DIR}/CMake/BuildUtils")
set(PROJECT_BUILD_DIR ${CMAKE_CURRENT_BINARY_DIR})

# Include Util CMake Scripts
include(${CMAKE_UTIL_DIR}/ColorizeMessages.cmake)
include(${CMAKE_UTIL_DIR}/SetBinaryDir.cmake)
include(${CMAKE_UTIL_DIR}/DisableTargetWarnings.cmake)


# Include Package Addition Scripts
include(${CMAKE_BUILD_UTILS_DIR}/Threads.cmake)
include(${CMAKE_BUILD_UTILS_DIR}/YAML-CPP.cmake)
include(${CMAKE_BUILD_UTILS_DIR}/Backward.cmake)
include(${CMAKE_BUILD_UTILS_DIR}/Assimp.cmake)
include(${CMAKE_BUILD_UTILS_DIR}/GLM.cmake)
include(${CMAKE_BUILD_UTILS_DIR}/FreeImage.cmake)
#include(${CMAKE_BUILD_UTILS_DIR}/Boost.cmake)



# Add Main.cpp
add_executable(${PROJECT_NAME} ${SRC_DIR}/Main.cpp  ${BACKWARD_ENABLE})
target_link_libraries(${PROJECT_NAME}

  # Third Party Libs
  yaml-cpp

  # Internal Libs
  STS_STRUCT_SystemUtils

  STS_LocalConfigurationLoader
  STS_LoggingSystem

  STS_NeuronCapacitanceExtraction
  )



# Add Internal Libs
add_subdirectory(${SRC_DIR}/Core/Structures/STS_STRUCT_SystemUtils)
add_subdirectory(${SRC_DIR}/Core/Structures/STS_STRUCT_Vertex)
add_subdirectory(${SRC_DIR}/Core/Structures/STS_STRUCT_Triangle)


add_subdirectory(${SRC_DIR}/Core/NeuronFeatureExtraction/STS_NeuronCapacitanceExtraction)

add_subdirectory(${SRC_DIR}/Core/Loader/STS_ModelLoader)


add_subdirectory(${SRC_DIR}/Core/Utils/STS_LoggingSystem)
add_subdirectory(${SRC_DIR}/Core/Utils/STS_ConfigurationLoader)


# Copy Files To Bin Dir
configure_file("${SRC_DIR}/Config.yaml" "${BIN_DIR}/Config.yaml" COPYONLY)