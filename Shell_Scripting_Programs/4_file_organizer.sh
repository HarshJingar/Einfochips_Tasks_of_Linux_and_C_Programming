#!/bin/bash

#shell script for make a file organizer

read -p "Enter the full path of Directory to organize: " dir

if [ -d $dir ]
then
	echo "File Organizing is started...please wait for some time."
	
	cd "$dir" || exit

	for file in *.* 
	do
		ext="${file##*.}"
		ext=$( echo $ext | tr 'A-Z' 'a-z' )
		mkdir -p "$ext"
		mv "$file" "$ext/"
	done
	echo "Files organized by extension inside $dir."
else
	echo "directory is not exist."
fi



