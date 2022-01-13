//=================================================================//
// This file is part of the BrainGenix-STS Scan Translation System //
//=================================================================//

#include <STS_FUNCTION_CalculateLineDistance.h>

// Get Line Distance
double STS_FUNCTION_CalculateLineDistance(STS_STRUCT_Vertex V1, STS_STRUCT_Vertex V2) {

    // Calculate Components
    double XComp = (V1.X - V2.X) * (V1.X - V2.X);
    double YComp = (V1.X - V2.X) * (V1.X - V2.X);
    double ZComp = (V1.Z - V2.Z) * (V1.Z - V2.Z);

    // Sum Components, Take Sqrt
    return sqrt((XComp + YComp + ZComp));



    // double XY =  ((V1.X, V2.X) * (V1.X, V2.X) + (V1.Y - V2.Y) * (V1.Y - V2.Y));
    // double Length = sqrt( XY + ((V1.X - V2.Z) * V1.Z - V2.Z));


    // return Length;
}


/*
    def find_line_length(X1, Y1, Z1, X2, Y2, Z2):

        XY = (math.sqrt((abs(X1 - X2) * abs(X1 - X2)) + (abs(Y1 - Y2) * abs(Y1 - Y2))))
    
        Length = (math.sqrt((XY * XY) + (abs(Z1 - Z2) * abs(Z1 - Z2))))

        return Length 
 */

