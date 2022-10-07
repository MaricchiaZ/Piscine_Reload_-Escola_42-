
# Pede-se que:
Criemos um arquivo chamado `z`. Que ao usarmos o comando `cat z` vejamos:\
Z \

## Resumo do que se pede: 
Criar um arquivo chamado z.\
Que dentro dele tenha um Z e uma quebra de linha.

### INICIANDO:

criar uma pasta:\
`mkdir ex01`(make directory=  fazer uma pasta) (vai criar a pasta, mas nao executa-la)

abrir e entrar na pasta:\
`cd ex01` (change directoy)

dentro da pasta:\
use o comando `touch z`(para criar o arquivo sem ext.)\
faça o comando `nano z` (para abrir o arquivo z no editor de texto)\
escreva a letra `Z`, aperte o ctrl+O (para salvar) e  o ctrl+X (para sair)

Para ver o conteúdo do arquivo com a quebra de linha:

use o comando `cat -e z` e conseguirás ver a quebra de linha exibida como \$.
Neste caso você deve ver:\
Z$\
cat significa: concatenate (usar apenas em arquivos pequenos, pois ele ter tudo em memória antes de mostrar)
