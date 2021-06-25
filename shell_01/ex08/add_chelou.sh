#!/bin/sh
echo $FT_NBR1 + $FT_NBR2 |
tr \' '0' | tr '\\' '1' | tr '"?!' '234' | tr 'mrdoc' '01234' |
xargs echo 'obase=13; ibase=5;' | bc |
tr '0123456789ABC' 'gtaio luSnemf'

# OR

echo "obase=13; ibase=5; $(echo $FT_NBR1 + $FT_NBR2 |
tr \' '0' | tr '\\' '1' | tr '"?!' '234' | tr 'mrdoc' '01234')" |
bc |
tr '0123456789ABC' 'gtaio luSnemf'