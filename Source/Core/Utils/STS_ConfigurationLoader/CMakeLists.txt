###################################################################
# This file is part of the BrainGenix-STS Scan Translation System #
###################################################################


# Create Library (Name Should Be Parent Dir Name)
add_library(STS_LocalConfigurationLoader 

            # Add Source Files (.cpp)
            "STS_FUNCTION_LocalConfigurationLoader.cpp"

            # Add Header Files (.h)
            "STS_FUNCTION_LocalConfigurationLoader.h"
            
            )

# Link 3rd Party Libs
target_link_libraries(STS_LocalConfigurationLoader
    yaml-cpp
    )

# Link Internal Libs
target_link_libraries(STS_LocalConfigurationLoader
    )

target_include_directories(STS_LocalConfigurationLoader PUBLIC ./)