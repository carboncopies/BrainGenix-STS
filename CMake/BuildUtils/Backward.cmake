##########################
# Builds Library For STS #
##########################

STSBuildLogger(${Green} "Configuring Backward Library")
add_subdirectory(${LIB_DIR}/backward-cpp)
STSBuildLogger(${BoldGreen} "Finished Configuring Backward Library")