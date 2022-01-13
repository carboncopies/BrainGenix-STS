import math

def find_traingle_area(Point_A, Point_B, Point_C):

    # Extract Points
    PointAX = Point_A[0]
    PointAY = Point_A[1]
    PointAZ = Point_A[2]

    PointBX = Point_B[0]
    PointBY = Point_B[1]
    PointBZ = Point_B[2]

    PointCX = Point_C[0]
    PointCY = Point_C[1]
    PointCZ = Point_C[2]
    

    # find line length

    LineAB_Length = 


def find_line_length(X1, Y1, Z1, X2, Y2, Z2):

    XY = (math.sqrt((math.abs(X1 - X2) * math.abs(X1 - X2)) + (math.abs(Y1 - Y2) * math.abs(Y1 - Y2))))
    
    Length = (math.sqrt((XY * XY) + (math.abs(Z1 - Z2) * math.abs(Z1 - Z2))))

    return Length