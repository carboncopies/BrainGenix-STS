##########################
# Builds Library For STS #
##########################

STSBuildLogger(${Green} "Configuring FreImage Library")
add_subdirectory(${LIB_DIR}/FreeImage/FreeImage)
disable_target_warnings(FreeImage)
STSBuildLogger(${BoldGreen} "Finished Configuring FreeImage Library")