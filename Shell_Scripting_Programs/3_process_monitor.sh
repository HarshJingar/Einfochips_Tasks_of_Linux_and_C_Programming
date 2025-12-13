#!/bin/bash

#shell script for monitor process

read -p "Enter the Process Name: " processName

if [ $(pgrep -x $processName) ]
then
	echo "$processName is running."
else
	echo "$processName is stopped."
fi

