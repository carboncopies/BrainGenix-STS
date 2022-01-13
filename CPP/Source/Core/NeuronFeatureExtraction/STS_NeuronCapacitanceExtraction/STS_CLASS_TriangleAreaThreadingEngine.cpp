//=================================================================//
// This file is part of the BrainGenix-STS Scan Translation System //
//=================================================================//

#include <STS_CLASS_TriangleAreaThreadingEngine.h>


// Constructor
STS_CLASS_TriangleAreaThreadingEngine::STS_CLASS_TriangleAreaThreadingEngine(std::shared_ptr<STS_STRUCT_SystemUtils> SystemUtils) {

    // Copy Pointers
    SystemUtils_ = SystemUtils;

    // Log Initialization
    SystemUtils_->Logger_->Log("Initializing Triangle Area Threading Engine", 5);

    // Detect Num Worker Threads
    SystemUtils_->Logger_->Log("Detecting Number Of Worker Threads", 4);
    NumWorkerThreads_ = STS_FUNCTION_GetNumberCPUs();
    std::string CPUMessage = std::string("Found ") + std::to_string(NumWorkerThreads_) + std::string(" CPU Cores In System");
    SystemUtils_->Logger_->Log(CPUMessage.c_str(), 3);

}

// Destructor
STS_CLASS_TriangleAreaThreadingEngine::~STS_CLASS_TriangleAreaThreadingEngine() {

    // Log Destructor Call
    SystemUtils_->Logger_->Log("Triangle Area Threading Engine Destructor Called", 6);

}

