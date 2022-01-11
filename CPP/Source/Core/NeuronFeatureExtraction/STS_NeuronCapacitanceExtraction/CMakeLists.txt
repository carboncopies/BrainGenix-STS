########################################################################
# This file is part of the BrainGenix-ERS Environment Rendering System #
########################################################################


# Create Library (Name Should Be Parent Dir Name)
add_library(STS_NeuronFeatureExtraction 

            # Add Source Files (.cpp)
            "STS_CLASS_NeuronFeatureExtraction.cpp"

            # Add Header Files (.h)
            "STS_CLASS_NeuronFeatureExtraction.h"
            
            ${BACKWARD_ENABLE}
            )

# Link 3rd Party Libs
target_link_libraries(STS_NeuronFeatureExtraction
    )

# Link Internal Libs
target_link_libraries(STS_NeuronFeatureExtraction
    )

target_include_directories(STS_NeuronFeatureExtraction PUBLIC ./)