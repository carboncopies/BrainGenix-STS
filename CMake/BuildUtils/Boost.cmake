##########################
# Builds Library For STS #
##########################

STSBuildLogger(${Green} "Configuring Boost Library")
set(FETCHCONTENT_SOURCE_DIR_BOOST "${LIB_DIR}/boost")
add_subdirectory("${LIB_DIR}/boost-cmake")
STSBuildLogger(${BoldGreen} "Finished Configuring Boost Library")