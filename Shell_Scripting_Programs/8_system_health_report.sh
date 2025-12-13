#!/bin/bash

#shell script for provide report of system health

date=$( date +"%d%m%Y" )
$( touch $date )
echo -e "The CPU Utilization is:\n$( top -bn1 | grep Cpu )\n" >> $date
echo -e "The Memory Utilization is:\n$( free -h )\n" >> $date
echo -e "The Disk Utilization is: \n$( df -h )\n" >> $date
echo "The Sytem Uptime is: $( uptime -p )" >> $date

echo "Your System Health Report is Generated!!"
echo "you can see output in $date file."
