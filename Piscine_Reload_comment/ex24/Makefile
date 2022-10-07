# O que é o Makefile?
# É uma forma de documentação ou um script, geralmente para a automação da compilação.
# Um makefile é um arquivo contendo um conjunto de diretivas usadas pela 
# ferramenta de automação de compilação make para gerar um alvo/meta (Wikipédia).


SRCS	= srcs/ft_putchar.c srcs/ft_putstr.c \
 srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c #aqui contém todos os nomes
 # dos arquivos que formarão a biblioteca, os arquivos estão na pasta srcs

HEADERS	= ./includes # indica que o cabeçalho está nessa mesma pasta (./), no arquivo includes

OBJS	= ${SRCS:.c=.o} #os objetos serão formados por o que existe em SRCS, mantendo o nome
# mas trocando o .c por .o

NAME	= libft.a # o nome para a biblioteca criada será libft.a

RM	= rm -f # para remover, usaremos rm com -f (force), ignora ficheiros e argumentos inexistentes

.c.o: # faz um arquivo.o a partir de um arquivo.c é a mesma coisa que:  %.o: %.c 
	gcc -Wall -Wextra -Werror -c $< -I ${HEADERS} -o ${<:.c=.o}
# os arquivos-fonte que compõem a biblioteca devem ser compilados, para gerar os arquivos-objeto 
# correspondentes
# é complilado usando o compilador gcc e usamos as flags
# -Wall -Wextra -Werror, possibilita os avisos
# -c a opção diz para não executar o linker, então ela forma os .o, objetos produzidos pelo assembler.
# $< pega o que está a direita da regra, no caso .c e passa para a esquerda
# -I inclui os que está contido em HEADERS (no caso a libft.a)
# -o orienta o output ${<:.c=.o} esse padrão indica que mantém-se os nomes apenas trocando .c para .o
# o @ não deixa a regra aparecer na linha de comando quando o make estiver rodando

${NAME}:	${OBJS}
	ar rc ${NAME} ${OBJS}
 # -deve ser usado o utilitário "ar" (archiver) para juntar todos os 
 # -arquivos-objeto em uma biblioteca estática chamada "libft.a"
 # -as flags -r, insere o arquivo membro... no arquivo (com substituição) / -c, criar o arquivo, e quando
 # se atualiza, cria o arquivo se ele não existir / -s, escreve um índice de ficheiro objeto no arquivo, 
 #ou atualiza um já existente, mesmo que nenhuma outra alteração seja feita no arquivo. 
 # -usamos a ar para compactar no arquivo (libft.a) local, os arquivos da SRCS mas com esses arquivos bônus
 # -como a instrução abaixo está subordinada ao name e aos objs ela só ocorre se houve modificações
 # evitando assim relink

all: ${NAME}  # all: É o nome das regras a serem executadas

clean:
	@${RM} ${OBJS}
# -Apaga os arquivos intermediários. Se você escrever make clean no terminal
# -usamos as rediretrizes de RM para remover os objetos da srcs e os objetos do bonus
# o @ não deixa a regra aparecer na linha de comando quando o make estiver rodando

fclean:	clean
	@${RM} ${NAME}
#-realiza a regra clean
# -e remove também o nome
# o @ não deixa a regra aparecer na linha de comando quando o make estiver rodando

re: fclean all #-deleta e recomplila tudo (se mexermos em algum arquivo podemos dar make re)

.PHONY:	all clean fclean re
# -Esta regra permite de evitar conflitos. é uma proteção, se tiver 
# um arqiuvo com o mesmo nome de uma das regras, a regra deve ser executada, mesmo se existirem 
# arquivos com o nome dela.

# significado dos símbolos que geralmente aparecem no Makefile
 #   $@    Nome da regra. 
 #   $<    Nome da primeira dependência 
 #   $^ 	Lista de dependências
 #   $? 	Lista de dependências mais recentes que a regra.
 #   $* 	Nome do arquivo sem sufixo