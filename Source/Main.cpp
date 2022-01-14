//=================================================================//
// This file is part of the BrainGenix-STS Scan Translation System //
//=================================================================//

/*
    Description: This is the main file of the system.
    Additional Notes: None
    Date Created: 2022-01-11
*/

#include <STS_STRUCT_SystemUtils.h>

#include <STS_FUNCTION_LocalConfigurationLoader.h>

#include <STS_CLASS_LoggingSystem.h>


#include <STS_CLASS_TriangleAreaThreadingEngine.h>


int main() {

    // Create System Utils System
    std::shared_ptr<STS_STRUCT_SystemUtils> SystemUtils = std::make_shared<STS_STRUCT_SystemUtils>();

    // Load Local Configuration
    SystemUtils->LocalSystemConfig = STS_FUNCTION_LoadLocalConfig("Config.yaml");

    // Setup Logging System
    SystemUtils->Logger_ = std::make_shared<STS_CLASS_LoggingSystem>(SystemUtils->LocalSystemConfig);
    SystemUtils->Logger_->Log("Setting Up Logging System", 5);


    // STS_CLASS_TriangleAreaThreadingEngine Test(SystemUtils);

    
}