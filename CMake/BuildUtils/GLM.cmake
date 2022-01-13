##########################
# Builds Library For STS #
##########################

STSBuildLogger(${Green} "Configuring GLM Library")
set(GLM_STATIC_LIBRARY_ENABLE ON)
add_subdirectory(${LIB_DIR}/glm)
include_directories(${LIB_DIR}/glm)
STSBuildLogger(${BoldGreen} "Finished Configuring GLM Library")