###################################################################
# This file is part of the BrainGenix-STS Scan Translation System #
###################################################################


# Create Library (Name Should Be Parent Dir Name)
add_library(STS_CLASS_LoggingSystem 

            # Add Source Files (.cpp)
            "STS_CLASS_LoggingSystem.cpp"

            # Add Header Files (.h)
            "STS_CLASS_LoggingSystem.h"
            
            ${BACKWARD_ENABLE}
            )

# Link 3rd Party Libs
target_link_libraries(STS_CLASS_LoggingSystem
    yaml-cpp
    )

# Link Internal Libs
target_link_libraries(STS_CLASS_LoggingSystem
    )

target_include_directories(STS_CLASS_LoggingSystem PUBLIC ./)