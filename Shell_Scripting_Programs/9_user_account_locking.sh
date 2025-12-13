#!/bin/bash

#shell script that checks for user who haven't logged in for the last 30 days and lock thier accounts.

echo " Checking for inactive user "
inactive_user=$(lastlog -b 30 | awk 'NR>1 {print $1}')

for user in $inactive_user
do
	if [[ "$user" != "**Never" && "$user" != "Username" ]]
	then 
		echo "Locking account: $user"
		sudo usermod -L "$user"
	fi
done

