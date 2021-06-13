# COMANDOS PARA TESTE:
# env FT_LINE1=7 FT_LINE2=15 ./r_dwssap.sh

cat /etc/passwd |		# pega o conteudo /etc/passwd
grep -v "^#" |			# remove comentarios (qulaquer linha que comece com #) 
awk -F: '{
	if (NR%2==0)
		print $1 
}' |					# divide campos entre ':' e escreve apenas linhas pares 
rev |					# inverte as palavras
sort -r |				# organiza por ordem alfabetica inversa
awk -v firstLine=$FT_LINE1 -v lastLine=$FT_LINE2 '{
	if (NR>=firstLine && NR<=lastLine)
		print
}' |					# le variaveis e escreve apenas linhas nesse intervalo 
sed 's/$/, /' |			# acrescenta ', ' ao final de cada linha
tr --d '\n' |			# deleta todas as quebras de linha
sed 's/, $/./'			# substitui o ultimo ', ' por '.'
