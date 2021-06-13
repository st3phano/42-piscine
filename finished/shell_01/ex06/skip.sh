#!/bin/sh
# NR starts at 1, not 0
ls -l | awk 'NR % 2 == 1 {print}'
