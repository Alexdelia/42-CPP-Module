#!/bin/bash

if [[ $# == 1 ]]
then
	e=$1
else
	e=10
fi

make re

echo ;

i=1

while [[ $i -le $e ]]
do
	./a.out
	sleep 1
	echo ;
	i=$(( i + 1 ))
done
