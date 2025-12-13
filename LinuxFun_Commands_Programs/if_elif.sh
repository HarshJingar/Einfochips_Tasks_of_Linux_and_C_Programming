#!/bin/bash

age=21

if [ $age -ge 18 ]
then
	echo "you can drive!"
elif [ $age -le 15 ]
then
	echo "you can't drive!"
else
	echo "you can learn to drive!"
fi
