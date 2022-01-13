###################################################################
# This file is part of the BrainGenix-STS Scan Translation System #
###################################################################


# Create Library (Name Should Be Parent Dir Name)
add_library(STS_NeuronCapacitanceExtraction 

            # Add Source Files (.cpp)
            "STS_CLASS_NeuronCapacitanceExtraction.cpp"
            "STS_FUNCTION_CalculateLinceDistance.cpp"
            "STS_FUNCTION_TriangleArea.cpp"

            # Add Header Files (.h)
            "STS_CLASS_NeuronCapacitanceExtraction.h"
            "STS_FUNCTION_CalculateLinceDistance.h"
            "STS_FUNCTION_TriangleArea.h"

            ${BACKWARD_ENABLE}
            )

# Link 3rd Party Libs
target_link_libraries(STS_NeuronCapacitanceExtraction
    )

# Link Internal Libs
target_link_libraries(STS_NeuronCapacitanceExtraction
    
    STS_STRUCT_Triangle
    STS_STRUCT_Vertex

    )

target_include_directories(STS_NeuronCapacitanceExtraction PUBLIC ./)