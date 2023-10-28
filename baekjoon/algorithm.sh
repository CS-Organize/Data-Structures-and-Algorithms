#!/bin/zsh

if [ $# -ne 1 ]; then
  echo "Usage: $0 <folder_name>"
  exit 1
fi

folder_name="$1"

# Create the directory
mkdir "$folder_name"

# Change to the directory
cd "$folder_name" || exit 1

# Create the cpp file
echo "#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

int\tmain() {
\tios::sync_with_stdio(false), cin.tie(nullptr);

\treturn (0);
}" > "$folder_name.cpp"

# Create the README file
echo "# $folder_name" > "README.md"

echo "Folder '$folder_name' has been created."
