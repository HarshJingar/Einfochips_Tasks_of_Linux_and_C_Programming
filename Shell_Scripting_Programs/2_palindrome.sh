#!/bin/bash

#script for checkinh whether given string is palindrome or not

read -p "Enter your string/number: " str
len=${#str}
i=0
j=$len-1
isPalindrome="true"

while (( i<j && isPalindrome == "true" ))
do
	ch1="${str:i:1}"
	ch2="${str:j:1}"
	if [ $ch1 != $ch2 ]
	then
		isPalindrome="false"
		break
	fi
	let i++
	let j--
done

if [ $isPalindrome == "true" ] 
then
	echo "$str is  a palindrome"
else
	echo "$str is not a palindrome"
fi

