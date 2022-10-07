# O que é o Makefile?
# É uma forma de documentação ou um script, geralmente para a automação da compilação.
# Um makefile é um arquivo contendo um conjunto de diretivas usadas pela 
# ferramenta de automação de compilação make para gerar um alvo/meta (Wikipédia).

NAME =  ft_display_file # o nome para a programa que criaremos, em vez de a.out ele se 
# chamará ft_display_file

HEADER = display_file.h # indica que o cabeçalho (a biblioteca) está  no arquivo display_file.h

SRCS = display_file.c #aqui está o arquivo que deve ser compilado

CFLAGS =  -Wall -Wextra -Werror # para a complilação usaremos as flags -Wall
# -Wextra -Werror, possibilita os avisos

CC = gcc # o compilador que iremos usar é o gcc

OBJS = ${SRCS:.c=.o} #os objetos serão formados por o que existe em SRCS, mantendo o nome
# mas trocando o .c por .o

all:		$(NAME) # all: É o nome das regras a serem executadas

$(NAME):	$(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(CFLAGS)
 # como a instrução abaixo está subordinada ao name e aos objs ela só ocorre se houve modificações
 # evitando assim relink

.c.o: # faz um arquivo.o a partir de um arquivo.c é a mesma coisa que:  %.o: %.c 
	@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)
# é complilado usando o compilador gcc e usamos as flags
# -Wall -Wextra -Werror, possibilita os avisos
# -c a opção diz para não executar o linker, então ela forma os .o, objetos produzidos pelo assembler.
# $< pega o que está a direita da regra, no caso .c e passa para a esquerda
# -o orienta o output ${<:.c=.o} esse padrão indica que mantém-se os nomes apenas trocando .c para .o
# o @ não deixa a regra aparecer na linha de comando quando o make estiver rodando

clean:
	rm -f $(OBJS)
# -Apaga os arquivos intermediários. Se você escrever make clean no terminal
# -usamos as rediretrizes de RM para remover os objetos da srcs e os objetos do bonus

fclean: clean
	rm -f $(NAME)
#-realiza a regra clean
# -e remove também o nome

re: fclean all 
#-deleta e recomplila tudo (se mexermos em algum arquivo podemos dar make re)