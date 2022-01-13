###################################################################
# This file is part of the BrainGenix-STS Scan Translation System #
###################################################################


# Create Library (Name Should Be Parent Dir Name)
add_library(STS_STRUCT_SystemUtils 

            # Add Source Files (.cpp)
            "STS_STRUCT_SystemUtils.cpp"

            # Add Header Files (.h)
            "STS_STRUCT_SystemUtils.h"
            
            ${BACKWARD_ENABLE}
            )

# Link 3rd Party Libs
target_link_libraries(STS_STRUCT_SystemUtils
    )

# Link Internal Libs
target_link_libraries(STS_STRUCT_SystemUtils
    STS_LoggingSystem
    )

target_include_directories(STS_STRUCT_SystemUtils PUBLIC ./)