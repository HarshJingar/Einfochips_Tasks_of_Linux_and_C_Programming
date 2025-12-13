#!/bin/bash

#shell script for making number guessing game 

orignalNum=$(( RANDOM % 50 + 1 ))

while [ true ]
do
	read -p "Guess the number: " guessedNum
	if [ $orignalNum -eq $guessedNum ]
	then
		echo "Congratulation! your guessing is right!"
		break
	elif [ $guessedNum -gt $orignalNum ]
	then
		echo "your guessing is too high!"
	else
		echo "your guessing is too low!"
	fi
done


