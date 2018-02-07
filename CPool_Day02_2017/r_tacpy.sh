#!/bin/bash

cut -d: -f 1 | rev | sed -n '0~2p' | sort -r | sed -ne "$MY_LINE1 , $MY_LINE2 p" | sed -z 's/\n/, /g' | sed 's/, $/.\n/g'
