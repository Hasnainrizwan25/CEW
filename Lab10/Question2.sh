#!/bin/bash

string1=$1
string2=$2

if [ "$string1" = "$string2" ]; then
  echo "Strings are equal:" $string1 = $string2
elif [ "$string1" \> "$string2" ]; then
    echo "String 1 is greater:" $string1 > $string2
else
    echo "String 2 is greater:" $string1 < $string2
fi
