import math

AX = input("Point_A X_axis: ")
AY = input("Point_A Y_axis: ")
AZ = input("Point_A Z_axis: ")

AX = int(AX)
AY = int(AY)
AZ = int(AZ)

A = []
A.append(AX)
A.append(AY)
A.append(AZ)

BX = input("Point_B X_axis: ")
BY = input("Point_B Y_axis: ")
BZ = input("Point_B Z_axis: ")

BX = int(BX)
BY = int(BY)
BZ = int(BZ)

B = []
B.append(BX)
B.append(BY)
B.append(BZ)

CX = input("Point_C X_axis: ")
CY = input("Point_C Y_axis: ")
CZ = input("Point_C Z_axis: ")

CX = int(CX)
CY = int(CY)
CZ = int(CZ)

C = []
C.append(CX)
C.append(CY)
C.append(CZ)


def find_triangle_area(Point_A, Point_B, Point_C):

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

    LineAB_Length = find_line_length(PointAX, PointAY, PointAZ, PointBX, PointBY, PointBZ)
    LineAC_Length = find_line_length(PointAX, PointAY, PointAZ, PointCX, PointCY, PointCZ)
    LineBC_Length = find_line_length(PointBX, PointBY, PointBZ, PointCX, PointCY, PointCZ)

    S = (LineAB_Length + LineAC_Length + LineBC_Length) / 2

    Area = math.sqrt(S * (S - LineAB_Length) * (S - LineAC_Length) * (S - LineBC_Length))

    return str(Area)


def find_line_length(X1, Y1, Z1, X2, Y2, Z2):

    XY = (math.sqrt((abs(X1 - X2) * abs(X1 - X2)) + (abs(Y1 - Y2) * abs(Y1 - Y2))))
    
    Length = (math.sqrt((XY * XY) + (abs(Z1 - Z2) * abs(Z1 - Z2))))

    return Length

for x in range(10000000):
    find_triangle_area(A,B,C)
