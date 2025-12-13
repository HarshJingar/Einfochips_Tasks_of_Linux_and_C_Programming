#!/bin/bash

#shell script for making a calculator

function addition {
	echo "You Select Addition"
	read -p "Enter the First number: " num1
	read -p "Enter the Second number: " num2
	echo "The Sum is: $( echo "$num1 + $num2" | bc )"
}

function subtraction {
	echo "You Select Subtraction"
	read -p "Enter the First number: " num1
	read -p "Enter the Second number: " num2
	echo "The Subtraction is: $( echo "$num1 - $num2" | bc )"
}

function multiplication {
	echo "You Select Multiplication"
	read -p "Enter the First number: " num1
	read -p "Enter the Second number: " num2
	echo "The Multiplication is: $( echo "$num1 * $num2" | bc )"
}

function division {
	echo "You Select Division"
	read -p "Enter the First number: " num1
	read -p "Enter the Second number: " num2
	if [ $num2 -eq 0 ]
	then
		echo "can not divide by zero"
		return 1
	fi
	echo "The Division is: $( echo "scale=2;  $num1 / $num2" | bc )"
}

echo "Welcome to our Menu Driven Calculator"
echo -e "1. Addition\t2. Subtraction\t3. Multiplication\t4. Divison\t5. Exit"
read -p "Please Select Operation which you want to perform: " op

case $op in
	1)
		addition;;
	2)
		subtraction;;
	3)
		multiplication;;
	4)
		division;;
	5)
		echo "Thank you! for using our calculator"
		$( exit );;
	*)
		echo "invalid input!!"
esac

