//=================================================================//
// This file is part of the BrainGenix-STS Scan Translation System //
//=================================================================//

/*
    Description: This is the main file of the system.
    Additional Notes: None
    Date Created: 2022-01-11
*/

#include <STS_FUNCTION_CalculateLineDistance.h>

int main() {

    STS_STRUCT_Vertex V1;
    STS_STRUCT_Vertex V2;
    
    V1.X = 3;
    V1.Y = 3;
    V1.Z = 3;

    V2.X = 0;
    V2.Y = 0;
    V2.Z = 0;

    std::cout<<STS_FUNCTION_CalculateLineDistance(V1, V2)<<std::endl;
    
}