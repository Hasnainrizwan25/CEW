#!/bin/bash

month_number=$1

case $month_number in
    1) echo "January";;
    2) echo "Febrauary";;
    3) echo "March";;
    *) echo "Please enter from 1 to 3";;
esac
