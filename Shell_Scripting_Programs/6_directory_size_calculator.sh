#!/bin/bash

#shell script for calculate directory size including subdirectories

read -p "Enter the Directory Path: " directory

echo "The Size of the $directory is: $(du -sh $directory | cut -f1)"
