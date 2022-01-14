###################################################################
# This file is part of the BrainGenix-STS Scan Translation System #
###################################################################


# Create Library (Name Should Be Parent Dir Name)
add_library(STS_STRUCT_Triangle 

            # Add Source Files (.cpp)
            "STS_STRUCT_Triangle.cpp"

            # Add Header Files (.h)
            "STS_STRUCT_Triangle.h"
            
            )

# Link 3rd Party Libs
target_link_libraries(STS_STRUCT_Triangle
    )

# Link Internal Libs
target_link_libraries(STS_STRUCT_Triangle
    STS_STRUCT_Vertex
    )

target_include_directories(STS_STRUCT_Triangle PUBLIC ./)