#!/bin/sh
gcc -c ft_*.c
ar rc libft.a *.o
rm -rf ft_*.o
ranlib libft.a
