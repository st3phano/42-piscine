#!/bin/sh
# groups $FT_USER | tr ' ' ',' | tr -d '\n'
groups $FT_USER | awk '{gsub(" ", ","); printf "%s", $0}'
