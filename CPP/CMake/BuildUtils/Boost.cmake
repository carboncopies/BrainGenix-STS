##########################
# Builds Library For STS #
##########################

ERSBuildLogger(${Green} "Configuring Boost Library")
add_subdirectory("${LIB_DIR}/boost")
disable_target_warnings(yaml-cpp)
ERSBuildLogger(${BoldGreen} "Finished Configuring Boost Library")