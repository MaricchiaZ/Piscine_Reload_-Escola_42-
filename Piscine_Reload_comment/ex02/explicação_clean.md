
# Pede-se que:
Entregue dentro do arquivo uma linha de comando que mostre e apague os arquivos que tenham o nome começando por ~, e os aquivos que tenham nome começando e terminando por #.\
Exemplo:\
arquivo~\
#arquivo#

### O COMANDO:

find . -type f  -name '\*~' -print -delete -o -name '#*#' -print -delete

### A EXPLICAÇÃO:
\
o `find` vai fazer a busca \
o `find .` entra na pasta e nas subpastas\
o `-type f` especifica que são apenas arquivos (files)\
`-name “   “` diz pra procurar por arquivos com esse nome \
`*~` diz que quer qualquer início de nome (*), mas que termine com ~\
`-print` exibe os arquivos na tela\
`-delete` deleta esses arquivos \
`-o` é o mesmo que `or`, indica que deve repetir o find para os próximos parametros\
`-name "#*#"` diz pra procurar por arquivos por nome #.........#\
-print exibe os arquivos na tela\
-delete deleta esses arquivos\
