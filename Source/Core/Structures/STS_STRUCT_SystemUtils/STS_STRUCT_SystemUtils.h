//=================================================================//
// This file is part of the BrainGenix-STS Scan Translation System //
//=================================================================//

#pragma once

// Standard Libraries
#include <iostream>
#include <memory>

// Third-Party Libraries

// Internal Libraries
#include <STS_CLASS_LoggingSystem.h>


/**
 * @brief This structure stores system utility classes frequently used to minimize imports.
 * 
 */
struct STS_STRUCT_SystemUtils {

    std::shared_ptr<STS_CLASS_LoggingSystem> Logger_; /**Logging System Pointer*/
    YAML::Node LocalSystemConfig; /**Local Configuration File From Config.yaml On Disk*/

};