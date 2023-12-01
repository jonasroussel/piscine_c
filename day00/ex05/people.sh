ldapsearch -xLLL "(uid=Z*)" | grep cn: | cut -c 5- | sort -r
