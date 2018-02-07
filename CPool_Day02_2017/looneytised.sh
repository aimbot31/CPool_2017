#!/bin/bash

egrep "theo1|steven1|arnaud1|pierre-jean" | sed -r s/"theo1"/"Wile E. Coyote"/g | sed -r s/"steven1"/"Daffy Duck"/g | sed -r s/"arnaud1"/"Porky Pig"/g | sed -r s/"pierre-jean"/"Marvin the Martian"/g
