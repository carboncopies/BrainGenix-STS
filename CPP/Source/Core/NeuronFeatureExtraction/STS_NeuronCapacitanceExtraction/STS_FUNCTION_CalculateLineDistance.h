//=================================================================//
// This file is part of the BrainGenix-STS Scan Translation System //
//=================================================================//

#pragma once

// Standard Libraries
#include <iostream>
#include <memory>

#include <cmath>
#include <math.h>

// Third-Party Libraries

// Internal Libraries
#include <STS_STRUCT_Vertex.h>


/**
 * @brief Calculate Distance Between Two 3D Vertices
 * 
 * @param V1 
 * @param V2 
 * @return double 
 */
double STS_FUNCTION_CalculateLineDistance(STS_STRUCT_Vertex V1, STS_STRUCT_Vertex V2);