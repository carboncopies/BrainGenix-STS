##########################
# Builds Library For STS #
##########################

STSBuildLogger(${Green} "Configuring GLM Library")
add_subdirectory(${LIB_DIR}/glm)
include_directories(${LIB_DIR}/glm)
STSBuildLogger(${BoldGreen} "Finished Configuring GLM Library")