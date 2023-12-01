#!/bin/sh
var=$(ifconfig | grep "inet" | grep -v "inet6" | tr '\t' ' ' | cut -d ' ' -f 3)
if test -z "$var"
then
	echo "Je suis perdu!"
else
	echo $var | tr ' ' '\n'
fi
