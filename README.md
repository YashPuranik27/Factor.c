# Factor.c

Write a program that takes a single integer nas a command-line argument and finds
its prime factors, excluding 1. The output should consist of a single line listing each
prime factor in non-decreasing order, separated by a space. If nis prime, just print
nitself. If there are repeat factors, print the factor as many times as it divides n.
You can assume that 2 ≤n≤231 −1 (i.e., nwill fit in a signed 32-bit integer).
./factor 247 ->
13 19 | 
./factor 7 ->
7  |
./factor 32 ->
2 2 2 2 2 
