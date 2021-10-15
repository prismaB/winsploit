#!/bin/bash

[ $UID = 0 ] || { echo "please run it as root privalages this script." ; exit 1 ; }

[ $(command -v gcc) ] || { echo "please install the package: 'gcc'" ; exit 1 ; }

gcc dedect.c -o dedect && ./dedect
