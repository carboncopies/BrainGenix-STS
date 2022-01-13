//=================================================================//
// This file is part of the BrainGenix-STS Scan Translation System //
//=================================================================//

/*
    Description: This is the main file of the system.
    Additional Notes: None
    Date Created: 2022-01-11
*/

#include <STS_FUNCTION_CalculateLineDistance.h>
#include <STS_FUNCTION_TriangleArea.h>

int main() {

    STS_STRUCT_Vertex V1;
    STS_STRUCT_Vertex V2;
    STS_STRUCT_Vertex V3;
    
    V1.X = 1;
    V1.Y = 1;
    V1.Z = 4;

    V2.X = -2;
    V2.Y = 4;
    V2.Z = 0;

    V3.X = -2;
    V3.Y = -2;
    V3.Z = 0;

    STS_STRUCT_Triangle Tri;
    Tri.V1 = V1;
    Tri.V2 = V2;
    Tri.V3 = V3; 

    for (long i = 0; i < 10000000; i++) {
        STS_FUNCTION_CalculateTriangleArea(Tri);
    }
    
}