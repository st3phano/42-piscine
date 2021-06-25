#!/bin/sh
# Show all the files within any directory of the repository
# But lists file's path instead of basename
git status --short --ignored | grep '^!!' | cut -c 4-
# OR
git status --short --ignored | awk '/^!!/ {print $2}'

# Show files only from the current directory forward
# But lists file's basename instead of path
git ls-files --others --ignored --exclude-standard