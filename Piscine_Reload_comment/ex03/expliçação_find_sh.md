# Pede-se que:
Entregue dentro do arquivo uma linha de comando que mostre todos os arquivos que tenham a extensão .sh, na pasta atual e nas subpastas, e exiba-os em lista, mas sem o .sh

### O COMANDO:

find . -type f -name "*.sh" -exec basename {} .sh \;

### A EXPLICAÇÃO:
\
o `find` vai fazer a busca \
o `find .` entra na pasta e nas subpastas\
o `-type f` especifica que são apenas arquivos (files)\
`-name “   “` diz pra procurar por arquivos com esse nome \
`\*.sh` diz que quer qualquer nome (*), mas que termine com .sh\
`exec command {}` executa o comando "basemane" nos arquivos selecionados\
`basename` retira o diretório e o sulfixo do nome dos arquivos\
`;` é um argumento que pode ser usado com o exec para encerrar o loop de busca