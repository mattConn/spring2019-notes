#!/bin/bash

# execute command on file change
# arg 1: file path
# arg 2: command

cat $1 > /tmp/$1.tmp

while(true)
do
	if [[ $(diff $1 /tmp/$1.tmp) ]]
		then
			$2
			cat $1 > /tmp/$1.tmp
	fi
	sleep 2
done
