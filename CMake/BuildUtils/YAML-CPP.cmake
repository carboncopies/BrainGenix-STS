##########################
# Builds Library For STS #
##########################

STSBuildLogger(${Green} "Configuring YAML-CPP Library")
add_subdirectory("${LIB_DIR}/yaml-cpp")
disable_target_warnings(yaml-cpp)
STSBuildLogger(${BoldGreen} "Finished Configuring YAML-CPP Library")