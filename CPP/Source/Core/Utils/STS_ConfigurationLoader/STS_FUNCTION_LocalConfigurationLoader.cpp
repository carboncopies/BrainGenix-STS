//=================================================================//
// This file is part of the BrainGenix-STS Scan Translation System //
//=================================================================//


#include <STS_FUNCTION_LocalConfigurationLoader.h>

// Define Load Config Function
static YAML::Node STS_FUNCTION_LoadLocalConfig(const char* ConfigurationPath) {

    // Read Configuration //
    YAML::Node ConfigurationDictionary = YAML::LoadFile(ConfigurationPath);

    // Return Dictionary //
    return ConfigurationDictionary;

}