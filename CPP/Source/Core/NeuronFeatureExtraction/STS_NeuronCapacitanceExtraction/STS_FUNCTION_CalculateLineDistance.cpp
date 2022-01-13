//=================================================================//
// This file is part of the BrainGenix-STS Scan Translation System //
//=================================================================//

#include <STS_FUNCTION_CalculateLineDistance.h>

// Get Line Distance
double STS_FUNCTION_CalculateLineDistance(STS_STRUCT_Vertex V1, STS_STRUCT_Vertex V2) {

    // Calculate Components
    double XComp = pow((V1.X - V2.X), 2);
    double YComp = pow((V1.Y - V2.Y), 2);
    double ZComp = pow((V1.Z - V2.Z), 2);

    // Sum Components, Take Sqrt
    double Distance = pow((XComp + YComp + ZComp), 0.5);

    // Return Value
    return Distance;

}