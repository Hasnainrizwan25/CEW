#!/bin/bash

roll_number=22096
last_digit=$(echo "roll_number" | sed 's/.*\([0-9]\)$/\1/')

if [ $# -ne "$last_digit" ]; then
    echo "Error: Number of parameters should be equal to the last digit of your roll number"
    exit 1
fi

echo "Number Of Parameters: $#"
echo "Script Numbers: $0"
echo "All Parameters: $*"
