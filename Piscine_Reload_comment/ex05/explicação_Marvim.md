# Pede-se que:
Criar um arquivo chamado `"\?\$\*’MaRViN’\*\$?\"` com o conteúdo `42` dentro. De modo que ao darmos `ls -l` vejamos:\
-rw---xr-- 1 75355 32015 2 Oct 2 12:21 "\\\$\*’MaRViN’\*\$?\\"

### OS COMANDOS:

`touch \"\\\\$\*\'\MaRViN\'\*\$\?\\\" ` (para criar o arquivo)

abra o arquivo no editor de texto e insira o conteúdo `42`

`touch -t 202110021221 \"\\\\$\*\'\MaRViN\'\*\$\?\\\" ` (pra mudar hora e data)

`chmod g=x,o=r \"\\\?\$\*\'MaRViN\'\*\$\?\\\" `(pra mudar permissão)

`ls -lRa *MaRV* | cat -e`  (comando pra ver se está tudo ok)

-rw---xr-- 1 coder coder 2 Oct  2 12:21 "\\?\$\*'MaRViN'*\$?\\" (fica assim)


### A EXPLICAÇÃO:
coloque a \\ antes de um comando que pode ser entendido como formatação e o computador lerá corretamente