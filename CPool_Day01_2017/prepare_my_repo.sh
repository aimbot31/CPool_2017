#!/bin/bash
blih -u florian.davasse@epitech.eu repository create $1
blih -u florian.davasse@epitech.eu repository setacl $1 ramassage-tek r
blih -u florian.davasse@epitech.eu repository getacl $1
