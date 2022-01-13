//=================================================================//
// This file is part of the BrainGenix-STS Scan Translation System //
//=================================================================//

#pragma once

// Standard Libraries
#include <iostream>
#include <memory>
#include <thread>

// Third-Party Libraries

// Internal Libraries


/**
 * @brief Return the number of total cpu cores across all physical processors in the system.
 * 
 * @return int 
 */
int STS_FUNCTION_GetNumberCPUs();