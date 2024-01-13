#!/bin/bash

dividend=$1
divisor=$1

while true; do
  echo "Menu:"
  echo "1. Quotient"
  echo "2. Remainder"

  read p "Enter Your Choice (1 or 2): " choice

  case $choice in
    1)
      result=$((dividend / divisor))
      echo "Quotient: $result"
      break
      ;;
    2)
      result=$((dividend % divisor))
      echo "Remainder: $result"
      break
      ;;
    3)
      echo "Invalid choice. Please choose 1 or 2"
      ;;
  esac
done


