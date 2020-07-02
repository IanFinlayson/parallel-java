#!/bin/bash

FILES=testprograms/*.java

echo "testing..."

for file in $FILES
	do 
	echo "****************************************************"
	echo $file
	./parser < $file
done
