
# Pede-se que:
Ao darmos o comando ls -l apareca no terminal:\
total XX \
drwx--xr-x 2 XX XX XX Jun 1 20:47 test0 \
-rwx--xr-- 1 XX XX 4 Jun 1 21:46 test1\
dr-x---r-- 2 XX XX XX Jun 1 22:45 test2\
-r-----r-- 2 XX XX 1 Jun 1 23:44 test3\
-rw-r----x 1 XX XX 2 Jun 1 23:43 test4\
-r-----r-- 2 XX XX 1 Jun 1 23:44 test5\
lXXXXXXXXX 1 XX XX 5 Jun 1 22:20 test6 -> test0

## Resumo do que se pede: 
Criar pastas, e arquivos. Criar um soft link. Criar um hardlink.\
Colocar algo dentro dos arquivos criados.\
Alterar as datas de modificação.\
Alterar as permissões.\
Compactar tudo no exo.tar

### INICIANDO:

`cd..` para ir para a #home e assim poder criar uma pasta

criar uma pasta:\
`mkdir ex02` (vai criar a pasta ex02, mas não executá-la)

`ls -l` (mostra as pasta que temos nesse setor)

`cd ex02` (para abrir a pasta ex02 e podermos executar comandos internos nela)

### CRIANDO AS PASTAS E ARQUIVOS
`mkdir test0` (para criar um diretório/pasta com o nome de test0)\
`touch test1` (para criar uma arquivo com o nome de test1)\
`mkdir test2` (para criar um diretório/pasta com o nome de test2)\
`touch test3` (para criar uma arquivo com o nome de test1)\
`touch test4` (para criar uma arquivo com o nome de test0)

### HARD LINK:
Para criar o hard link entre o test3 e o test5 vamos dar o comando:\
`ln test3 test5` (isso cria um hardlink entre o teste 3 e o teste 5) e já fica certo o exercíci

### SOFT LINK
para fazer o ultimo arquivo, tivemos que criar um soft link (link suave, que nao se 
conecta direto ao inode, mas a um arquivo), linkamos ele ao test 0, para isto usamos o 
seguinte comando:\
`ln -s test0 test6`

### VER AS CARACTERÍSTICAS DO QUE CRIAMOS:
`ls -l` (mostra as características do arquivo estamos trabalhando) \
(permissões de edição e data, além do número de caracteres dentro do arquivo)

### COLOCAR ALGUNS BYTES DE CONTEÚDO NOS ARQUIVOS CRIADOS
`echo “texto de interesse” >> nome_do_arquivo` (adiciona o “texto de interesse” 
dentro do arquivo selecionado)\
`echo “texto de interesse” > nome_do_arquivo` (substitui tudo que tiver dentro 
do arquivo selecionado pelo “texto de interesse”)

`echo "1234" >> test1` (devemos fazer com que o arquivo test1 tenha 4 bytes)\
`echo "12" >> test4` (devemos fazer com que o arquivo test4 tenha 2 bytes)

### ALTERAR HORA E DATA 
para isso usamos o comando `touch -t yyyymmddhhmm nome_do_arquivo` \
(explicando... touch -t -> muda o tempo/time do arquivo na sequência ano/mês/dia/hora/minuto)

`touch -t 202106012047 test0`\
`touch -t 202106012146 test1`\
`touch -t 202106012245 test2`\
`touch -t 202106012344 test3` (por ser um softlink, ao alterar do test3 altera sozinho o test5)\
`touch -t 202106012022 test4`\
`touch -mht 202106012343 test6` pra alterar a data do test6 sem estragar o link

### ALTERANDO AS PERMISSÕES

para alterar as permissões do arquivo, usamos o chmode (change mode):\

u (user)= r (read)/ w (write)/ x (execute)\
g (group)= r (read)/ w (write)/ x (execute)\
o (other)= r (read)/ w (write)/ x (execute)\
exemplo usando o test2, nesse caso nosso comando final ficou:\
`chmod u=rx,g=,o=r test2` (note que o grupo g nao tem nenhuma permissão, então deixa = a nada)

`chmod u=rwx,g=x,o=rx test0`\
`chmod u=rwx,g=x,o=r test1`\
`chmod u=rx,g=,o=r test2` (nesse caso o grupo g nao tem nenhuma permissão, então deixa = a nada)\
`chmod u=r,g=,o=r test3` (altera automaticamente o test5)\
`chmod u=rwx,g=rwx,o=rwx test6`

### COMPACTANDO
Para compactar usamos o comando \
`tar -cf exo.tar *`

Prontinho, agora está criado nosso exo.tar 

### LEMBRE-SE
de apagar os outros aquivos feitos, só deve ser entregue o exo.tar

para descompactar e conferir o que tem dentro use `tar -xpf exo.tar`