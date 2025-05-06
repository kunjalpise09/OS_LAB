#!/bin/bash

# === Basic if-else Shell Script ===

echo "Enter your age:"
read age

if [ $age -ge 18 ]; then
  echo "You are an adult."
else
  echo "You are a minor."
fi

#to run this script
# Save the script
nano check_age.sh  # or use any text editor

# Make it executable
chmod +x check_age.sh

# Run the script
./check_age.sh
