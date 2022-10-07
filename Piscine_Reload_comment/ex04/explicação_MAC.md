# Pede-se que:
Escreva e entregue uma linha de comando que exiba os endereços MAC da máquina. Cada endereço
deve ser seguido por uma quebra de linha.

### O COMANDO:

ifconfig | grep ether | awk '{print $2}'

### A EXPLICAÇÃO:
\
`ifconfig` mostra as interfaces de rede\
`|` redireciona a saída para o próximo comando, no caso o grep\
`awk`  linguagem de script usada para manipular dados e gerar resultados\
`'{print $2}'` pede que se imprima apenas a coluna 2, que é a coluna dos endereços MAC que queremos