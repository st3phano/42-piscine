# COMANDOS PARA TESTE:
#
# env FT_NBR1="\\'?\"\\\"'\\" FT_NBR2=rcrdmddd ./add_chelou.sh
# │   │                       │                │ 
# │   │                       │                └[4] executa o arquivo 
# │   │                       │                      dentro do ambiente
# │   │                       │                      criado
# │   │                       │
# │   │                       └[3] define a segunda variavel
# │   │
# │   └[2] define a primeira variavel
# │         (caracteres 'escapados')
# │
# └[1] comando que cria
#       ambiente com as
#       seguintes variaveis
#
# env FT_NBR1='\\"\\"!\\"\\"!\\"\\"!\\"\\"!\\"\\"!\\"\\"' FT_NBR2=dcrcmcmooododmrrrmorcmcrmomo ./add_chelou.sh 
#     └──┬──┘                                             └──┬──┘
#        │        ┌────────────────────────────────┐         │
#        │        │  mesmo comando, novos valores  │         │
#        └────────┤      para das variáveis        ├─────────┘
#                 │   (caracteres 'escapados')     │
#                 └────────────────────────────────┘


echo $FT_NBR1 + $FT_NBR2 |			# escreve "{primeira variavel} + {segunda variavel}"
tr "mrdoc" "01234" | 				# troca cada 'm' por 0, 'r' por 1, 'd' por 2, 'o' por 3 e 'c' por 4
sed "s/'/0/g" |						# seq. de "sed" troca cada "'" por 0,
sed 's/\\/1/g' |					#   '\' por 1,
sed 's/"/2/g' |						#   '"' por 2,
sed 's/?/3/g' |						#   '?' por 3,
sed 's/!/4/g' |						#   e '!' por 4
xargs echo "ibase=5;" |         	# executa comando: escreve "ibase=5;" mais o que veio do último sed
bc |								# calculadora realiza a soma na base recebida (5)  
xargs echo "ibase=10; obase=13;" |	# executa comando: escreve "ibase=10; obase=13" mais a saída do cmd. bc 
bc |								# calculadora, converte número de base 10 para base 13
tr "0123456789ABC" "gtaio luSnemf"	# troca cada caractere da primeira palavra pelo correspondente na segunda
									#  '0 > g', '1 > t', '2 > a'...
