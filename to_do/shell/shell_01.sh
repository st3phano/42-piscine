head -c -1
# remove last byte from the file

sed 's/t.*$//g'
# o que o "." significa?

sed 1,2d
# começando na primeira linha, pegue de duas em duas???

sed -n 'n;p'
# "-n" não imprima o que está sendo tratado???
# n=next, pula linha ???
# p=print, imprima a linha ???

awk 'NR >= ENVIRON["FT_LINE1"]'
# qual o motivo do "ENVIRON"???

echo " ibase=5; obase=D; $(echo "$FT_NBR1 + $FT_NBR2") " | bc
# porque funciona com "obase=D" após ter mudado "ibase"???