#!/bin/bash

a=5.4
b=4.0

echo "Addition = $(echo "$a + $b" | bc)"
echo "Multiplication = $(echo "$a * $b" | bc)"

