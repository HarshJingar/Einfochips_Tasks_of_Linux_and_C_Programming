#!/bin/bash

#script for check whether file is exist or not

read -p "Enter the Filename: " filename

if [ -f $filename ]
then
	echo "$filename exist."
else
	echo "$filename not exist."
fi

