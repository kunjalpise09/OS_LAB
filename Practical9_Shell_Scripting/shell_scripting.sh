# === Script Declaration ===
#!/bin/bash                # Always start your script with this line

# === Print to Terminal ===
echo "Hello, World!"       # Display a message

# === Variables ===
name="Ubuntu"
echo "Welcome to $name"    # Access variables with $

# === Taking User Input ===
read -p "Enter your name: " username
echo "Hello, $username"

# === Conditional Statements ===
if [ $age -gt 18 ]; then
  echo "Adult"
else
  echo "Minor"
fi

# === Loops ===

# For Loop
for i in 1 2 3; do
  echo "Loop $i"
done

# While Loop
count=1
while [ $count -le 3 ]; do
  echo "Count is $count"
  ((count++))
done

# === Functions ===
greet() {
  echo "Hello $1"
}
greet "User"

# === Check if File Exists ===
if [ -f "file.txt" ]; then
  echo "File exists"
else
  echo "File not found"
fi

# === Arguments ===
echo "Script name: $0"
echo "First arg: $1"
echo "Total args: $#"

# === Exit Status ===
ls /notfound
echo $?                    # Shows exit code (0 = success)

# === Make Script Executable ===
chmod +x script.sh         # Make script executable
./script.sh                # Run the script

# === Comments ===
# This is a comment
