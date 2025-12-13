#!/bin/bash

#shell script for analyse log file

read -p "Enter the log file path: " path

echo "Top 5 IP address"
awk '{print $1}' "$path" | sort | uniq -c | sort -nr | head -5

echo "Number of failed Login Attempts"
grep -i "Failed" "$path" | wc -l
