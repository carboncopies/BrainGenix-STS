##########################
# Builds Library For STS #
##########################

STSBuildLogger(${Green} "Configuring Boost Library")
set(BOOST_SOURCE "${LIB_DIR}/boost")
add_subdirectory("${LIB_DIR}/boost-cmake")
STSBuildLogger(${BoldGreen} "Finished Configuring Boost Library")