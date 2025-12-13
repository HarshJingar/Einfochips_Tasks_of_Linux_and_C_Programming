#!/bin/bash
#script for finding the prime number between given range

for (( i=2;i<=100;i++ )) #loop between 1 to 100
do
	isPrime="true" #flag for status
	for (( j=2;j*j<=i;j++ ))  #loop between 2 to sqrt(i)
	do
		if (( $i%$j == 0 ))
		then
			isPrime="false"
			break
		fi
	done
	
	if [ $isPrime == "true" ]
	then
		echo -n "$i "
	fi
done
echo
