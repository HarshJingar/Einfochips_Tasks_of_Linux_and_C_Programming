#!/bin/bash

log(){
	echo "$(date '+%Y-%m-%d %H:%M:%S') - $1">>/tmp/script.txt
}

echo -n "Enter the Filename: "
read file

if [ -f $file ] && [ $(ls -l "$file" | cut -d " " -f3) == $USER ]
then
	echo "$file exists!"
	log "File $file exists"
	if [ -w "$file" ]
	then
		log "File $file is already writable"
		echo "$file is already writable"
	else
		log "File $file is not writable"
		chmod +w $file
		echo "$file is now writable"
		log "File $file is now writable"
	fi
fi
