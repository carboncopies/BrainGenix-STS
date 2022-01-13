//=================================================================//
// This file is part of the BrainGenix-STS Scan Translation System //
//=================================================================//


#pragma once

// Standard Libraries (BG convention: use <> instead of "")
#include <string>

// Third-Party Libraries (BG convention: use <> instead of "")
#include <yaml-cpp/yaml.h>


/**
 * @brief Load and parse configuration file from disk
 * 
 * @param ConfigurationPath 
 * @return YAML::Node 
 */
YAML::Node STS_FUNCTION_LoadLocalConfig(const char* ConfigurationPath);