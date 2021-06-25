#!/bin/sh

# Exiba a saída de um cat /etc/passwd
cat /etc/passwd |
# retirando os comentários
cut --delimiter=':' --fields=1 |
# uma linha a cada duas começando pela segunda
awk 'NR % 2 == 0 {print}' |
# invertendo cada login
rev |
# ordenando em ordem alfabética inversa
sort --reverse |
# mantendo apenas os logins compreendidos entre FT_LINE1 e FT_LINE2 inclusos
awk "(NR >= $FT_LINE1 && NR <= $FT_LINE2) || (NR >= $FT_LINE2 && NR <= $FT_LINE1) {print}" |
# separados por ", "(sem aspas)
awk '{printf "%s, ", $0}' |
# terminando com ".".
awk '{sub(", $", ".") ; printf "%s", $0}'
