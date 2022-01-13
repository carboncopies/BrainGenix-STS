//=================================================================//
// This file is part of the BrainGenix-STS Scan Translation System //
//=================================================================//

#pragma once

// Standard Libraries
#include <iostream>
#include <memory>

// Third-Party Libraries

// Internal Libraries
#include <STS_STRUCT_Vertex.h>


/**
 * @brief This structure stores a triangle with x,y,z for all three vertices.
 * 
 */
struct STS_STRUCT_Triangle {

    // Vertexes
    STS_STRUCT_Vertex V1;
    STS_STRUCT_Vertex V2;
    STS_STRUCT_Vertex V3;

};