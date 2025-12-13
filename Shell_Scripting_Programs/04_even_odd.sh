#!/bin/bash

#script for check whether given number is even or odd

read -p "Enter the number: " num

if (( $num%2 == 0 ))
then
	echo "$num is even"
else
	echo "$num is odd"
fi

