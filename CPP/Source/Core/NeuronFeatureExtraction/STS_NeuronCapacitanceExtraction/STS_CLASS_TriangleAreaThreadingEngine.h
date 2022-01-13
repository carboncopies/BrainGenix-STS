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
#include <STS_STRUCT_SystemUtils.h>
#include <STS_FUNCTION_GetNumCPUs.h>



/**
 * @brief Multithreaded System For Finding Triangle Areas
 * 
 */
class STS_CLASS_TriangleAreaThreadingEngine {

private:

    std::shared_ptr<STS_STRUCT_SystemUtils> SystemUtils_; /**System Utils Struct*/
    int NumWorkerThreads_; /**Number of Worker Threads To Be Used*/

public:

    /**
     * @brief Construct a new sts class triangleareathreadingengine object
     * 
     * @param SystemUtils 
     */
    STS_CLASS_TriangleAreaThreadingEngine(std::shared_ptr<STS_STRUCT_SystemUtils> SystemUtils);

    /**
     * @brief Destroy the sts class triangleareathreadingengine object
     * 
     */
    ~STS_CLASS_TriangleAreaThreadingEngine();


};