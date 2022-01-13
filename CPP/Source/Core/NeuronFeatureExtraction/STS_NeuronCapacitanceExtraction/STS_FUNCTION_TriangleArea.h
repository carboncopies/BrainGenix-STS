//=================================================================//
// This file is part of the BrainGenix-STS Scan Translation System //
//=================================================================//

#pragma once

// Standard Libraries
#include <iostream>
#include <memory>
#include <cmath>

// Third-Party Libraries

// Internal Libraries
#include <STS_STRUCT_Triangle.h>
#include <STS_STRUCT_Vertex.h>

#include <STS_FUNCTION_CalculateLineDistance.h>


/**
 * @brief This function is used to calculate the area of a triangle in xyz space.
 * 
 */
double STS_FUNCTION_CalculateTriangleArea(STS_STRUCT_Triangle Triangle);