#########################################
## This file is part of BrainGenix-STS ##
#########################################

'''
Name: Main
Description: This file is the main system file for STS.
Date-Created: 2021-08-24
'''

from Core.Initialization.LoadConfig import LoadLocalConfig


##############################################################################
## NOTE: A Lowercase "m" Preceeding A Class Means It's a Main System        ##
## NOTE: A Lowercase "s" Preceeding A Class Means It's a Subsystem          ##
##############################################################################


# Load Config #
SystemConfiguration = LoadLocalConfig(ConfigFilePath = 'Config.yaml')


# Initialize Logger #
mLogger = InstantiateLogger(SystemConfiguration)