#!/bin/bash
roll_number=$!
sum=0
count=0

for ((i = 2; i <= roll_number; i += 2)); do
      sum=$((sum + i))
      count=$((count + 1))
done

avg=$((sum / count))
echo "Average: " $avg
