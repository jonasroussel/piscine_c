#!/bin/sh
cat $1 | tr '[:upper:]' '[:lower:]' | tr '\t' ' ' | grep -E "nicolas bauer|bauer nicolas" | cut -d ' ' -f 3 | grep -v '^[a-z]'
