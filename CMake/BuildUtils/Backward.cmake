##########################
# Builds Library For STS #
##########################

STSBuildLogger(${Green} "Configuring Backward Library")
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
add_subdirectory(${LIB_DIR}/backward)
STSBuildLogger(${BoldGreen} "Finished Configuring Backward Library")