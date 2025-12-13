#!/bin/bash

let i=10
until [ $i -lt 0 ] 
do
	echo $i
	let i--
done
