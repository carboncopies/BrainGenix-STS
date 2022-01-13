//=================================================================//
// This file is part of the BrainGenix-STS Scan Translation System //
//=================================================================//

#include <STS_FUNCTION_CalculateLineDistance.h>

// Get Line Distance
double STS_FUNCTION_CalculateLineDistance(STS_STRUCT_Vertex V1, STS_STRUCT_Vertex V2) {


    // Calculate Distance, Return. Is The Same As More Readable Version Below
    return sqrt(((V1.X - V2.X) * (V1.X - V2.X) + (V1.X - V2.X) * (V1.X - V2.X) + (V1.Z - V2.Z) * (V1.Z - V2.Z)));


    // // Calculate Components
    // double XComp = (V1.X - V2.X) * (V1.X - V2.X);
    // double YComp = (V1.X - V2.X) * (V1.X - V2.X);
    // double ZComp = (V1.Z - V2.Z) * (V1.Z - V2.Z);

    // // Sum Components, Take Sqrt
    // return sqrt((XComp + YComp + ZComp));



}
