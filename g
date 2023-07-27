#!/bin/bash

# Set default Git user name and email
git config --global user.name "Your Git Username"
git config --global user.email "your.email@example.com"

# Function to display a prompt and read the commit message
get_commit_message() {
    read -p "Enter the commit message: " commit_message
    echo "$commit_message"
}

# Main script starts here

# Check if there are any changes to commit
if git status --porcelain | grep -q "^.M"; then
    echo "Changes detected. Proceeding with commit and push."
else
    echo "No changes to commit. Exiting."
    exit 0
fi

# Prompt for the commit message
commit_msg=$(get_commit_message)

# Perform git add, commit, and push
git add --all
git commit -m "$commit_msg"
git push origin main

echo "Changes committed and pushed successfully."

