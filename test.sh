#!/bin/bash

FILES=testprograms/*.java

echo "testing..."

for file in $FILES
	do 
	echo $file
	./parser < $file
done
