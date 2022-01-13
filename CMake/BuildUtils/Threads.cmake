##########################
# Builds Library For STS #
##########################

STSBuildLogger(${Green} "Finding Threading Package")
find_package(Threads REQUIRED)
STSBuildLogger(${BoldGreen} "Found Threading Package")