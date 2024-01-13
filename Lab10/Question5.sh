

#!/bin/bash

day=$1

case $month_number in
    1) echo "Monday";;
    2) echo "Tuesday";;
    3) echo "Wednesday";;
    4) echo "Thursday";;
    5) echo "Friday";;
    6) echo "Satuarday";;
    7) echo "Sunday";;
    *) echo "Please enter from 1 to 7";;
esac
