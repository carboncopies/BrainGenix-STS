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

}

// Destructor
STS_CLASS_TriangleAreaThreadingEngine::~STS_CLASS_TriangleAreaThreadingEngine() {

    // Log Destructor Call
    SystemUtils_->Logger_->Log("Triangle Area Threading Engine Destructor Called", 6);

}