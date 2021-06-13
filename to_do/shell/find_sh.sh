# COMANDOS PARA TESTE:
# ./find_sh.sh

find . -type f -name "*.sh"  |	# lista todos os arquivos a partir do diretorio atual que atendam '{qualquer coisa}.sh' no nome
awk -F\/ '{print $NF}' |		# separa cada linha no caractere '/' e escreve apenas o ultimo	
sed 's/\.sh//'					# substitui todos os '.sh' por nada (apaga)
