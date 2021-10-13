#!/bin/bash

if [ $# -eq 1 ]
then
	rm -d "$1"
fi

if [ $# -eq 2 ]
then
	rm -d "$1" "$2"
fi

if [ $# -eq 3 ]
then
	rm -d "$1" "$2" "$3"
fi	
