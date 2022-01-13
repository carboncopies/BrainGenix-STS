//=================================================================//
// This file is part of the BrainGenix-STS Scan Translation System //
//=================================================================//

#include <STS_FUNCTION_GetNumCPUs.h>


// Get Number CPUS, Wraps std::thread::hardware_concurrency
int STS_FUNCTION_GetNumberCPUs() {

    // Get Number
    int NumCPUS = std::thread::hardware_concurrency();

    // Return 
    return NumCPUS;

}