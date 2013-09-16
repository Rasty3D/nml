#!/bin/bash

#-------------------------------------------------------------------------------
#
# Script to setup terminal colors
#
# Author: Rasty3D
# email : Rasty3D@gmail.com
# Date  : 16-Sept-2013
#
#-------------------------------------------------------------------------------

# Function to reset the terminal colors
function color_reset
{
  echo -ne "\033[0m"
}

# List of usefull colors
COLOR_RESET="\033[0m"
COLOR_INFO="\033[0;32m"
COLOR_ITEM="\033[1;34m"
COLOR_QUES="\033[1;32m"
COLOR_WARN="\033[0;33m"
COLOR_CODE="\033[0m"
COLOR_BOLD="\033[1m"
COLOR_UNDE="\033[4m"

# To use the colors use the command "echo -e" or "echo -ne" (without newline)
# and put the label before the text in the way ${COLOR_XXXX}

