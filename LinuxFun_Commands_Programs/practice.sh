#!/bin/bash

for i in 3 4 5 6 7 
do
	echo $i
done

#!/bin/bash
for i in `seq 1 17000`
do
	echo $i
done

#!/bin/bash
i=3
while [ $i -le 7 ]
do
	echo $i
	let i++
done

#!/bin/bash
i=8
until [ $i -lt 4 ]
do
	echo $i
	let i--
done

