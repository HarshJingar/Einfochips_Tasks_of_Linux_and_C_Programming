#!/bin/bash

ls *.txt > /dev/null 2>&1
if [ $? -ne 0 ]
then
	echo "there are 0 files ending in .txt"
else
	let i=0
	for file in *.txt
	do
		let i++
	done
	echo "there are $i files ending in .txt"
fi
