//=================================================================//
// This file is part of the BrainGenix-STS Scan Translation System //
//=================================================================//


#include <STS_FUNCTION_TriangleArea.h>


double STS_FUNCTION_CalculateTriangleArea(STS_STRUCT_Triangle Triangle) {

    // Calculate Distances
    double DistanceAB = STS_FUNCTION_CalculateLineDistance(Triangle.V1, Triangle.V2);
    double DistanceBC = STS_FUNCTION_CalculateLineDistance(Triangle.V2, Triangle.V3);
    double DistanceCA = STS_FUNCTION_CalculateLineDistance(Triangle.V3, Triangle.V1);

    // Calculate Area
    double Temp = (DistanceAB + DistanceBC + DistanceCA) / 2;
    double Area = pow((Temp * (Temp - DistanceAB) * (Temp - DistanceBC) * (Temp - DistanceCA)), 0.5);

    // Return Area
    return Area;

}