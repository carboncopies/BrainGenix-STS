###################################################################
# This file is part of the BrainGenix-STS Scan Translation System #
###################################################################


# Create Library (Name Should Be Parent Dir Name)
add_library(STS_ModelLoader

            # Add Source Files (.cpp)
            "STS_CLASS_ModelLoader.cpp"

            # Add Header Files (.h)
            "STS_CLASS_ModelLoader.h"
            
            ${BACKWARD_ENABLE}
            )

# Link 3rd Party Libs
target_link_libraries(STS_ModelLoader
    yaml-cpp
    glm
    glad
    glfw
    assimp
    FreeImage
    )

# Link Internal Libs
target_link_libraries(STS_ModelLoader
    Meshes
    Model
    Textures
    TextureLoader
    STS_STRUCT_SystemUtils
    )


target_include_directories(STS_ModelLoader PUBLIC ./)
