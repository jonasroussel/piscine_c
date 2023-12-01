#!/bin/sh
mv president.txt president.save
trap "mv president.save president.txt" EXIT
rm -f president.txt
