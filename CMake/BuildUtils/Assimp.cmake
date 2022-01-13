##########################
# Builds Library For STS #
##########################

STSBuildLogger(${Green} "Configuring Assimp Library")
add_subdirectory(${LIB_DIR}/assimp)
disable_target_warnings(assimp)
STSBuildLogger(${BoldGreen} "Finished Configuring Assimp Library")