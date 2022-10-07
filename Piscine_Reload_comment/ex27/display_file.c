/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 23:07:08 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/24 21:47:58 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 /* Devemos criar um programa chamado ft_display_file que exibe, na saída padrão,
 somente o conteúdo do arquivo dado como argumento.
 - O diretório da entrega da tarefa deve ter um Makefile com as seguintes
 regras: t all, clean, fclean. 
- O binário será chamado ft_display_file.
 - A função malloc é proibida. Você só pode fazer este exercício declarando um 
de tamanho fixo.
 - Todos os arquivos apresentados como argumentos serão válidos */

#include "display_file.h" // para essa função criamos nossa própria biblioteca
// Note que: como nossa biblioteca não está instalada nos diretórios padrão do compilador 
// ou do sistema, você deve trocar os sinais de menor/maior (< ... >) pelas as aspas.

// ESSA FUNÇÃO É AUXILIAR ---> comece lendo pela outra função
void	ft_putstr(char *str) // essa função imprime no terminal uma string recebida
{
	int	i; // criamos um índice

	i = 0; // iniciamos nosso índice em zero
	while (str[i] != '\0') // enquanto str[na posição i] for diferente de nulo
	{
		write(1, &str[i], 1); // escrevemos na saída padrão, o conteúdo de str[na posição i],
		// que ocupa 1 byte
		i++; // avançamos para a próxima posição
	}
}

// ESSA FUNÇÃO É AUXILIAR ---> comece lendo pela outra função
void	check_error(int argc) // essa função confere o número de argvs recebidos
// a quantidade dos argvs recebidos é passada na forma de int argc (argument count)
{
	if (argc < 2) // o 1o argumento é sempre o executável a.out, então se não houver 2
	// argumentos, não temos o que ler
		ft_putstr("File name missing.\n"); // assim imprimimos a mensagem de erro
		// "Falta o nome do arquivo" por meio da função auxiliar ft_putstr
	if (argc > 2) // e se exite mais de 2 argumentos, não sabemos qual usar, então mandamos
	// a mensagem de erro "Existem argumentos demais"
		ft_putstr("Too many arguments.\n"); //a função ft_putstr imprime a string da mensagem
}

// ESSA FUNÇÃO É A PRINCIPAL ---> comece lendo por aqui
int	main(int argc, char **argv) //essa função recebe um arquivo de texto passado por argumento
// e lê e escreve no no terminal o conteúdo desse arquivo
{
	int		fd; // criamos um inteiro que será o File Descriptor, um indicador abstrato
	// para acessar um arquivo
	int		read_byte; // criamos um inteiro para armazenar a quantidade de bytes lidos
	char	buffer[BUFFER_SIZE + 1]; // criamos um array para armazenar o bloco de leitura
	// chamado BUFFER_SIZE e damos mais uma posição + 1 para o byte nulo

	if (argc != 2) // se tivermos um número de argumentos diferente de dois
	{
		check_error(argc); // nossa função check_error recebe o argc 
		// analisa o argc e emite as mensagens de erro
		return (0); // e sai do programa, já que não temos mais o que fazer aqui :)
	}
	fd = open(argv[1], O_RDONLY); // o int fd recebe a indicação da função open que abre 
	// o arquivo de texto passado como argv1, apenas no modo de leitura (read only O_RDONLY)
	if (fd < 0) // se o fd for menor que zero, a função open não deu certo
		return (1); // então retornamos 1 indicando que deu erro
	read_byte = read(fd, buffer, BUFFER_SIZE); // o int read_byte recebe a quantidade de bytes
	// lidos pela função read que lê o arquivo indicado por fd. A função read lê de bloco em bloco
	// esse bloco de leitura chama-se BUFFER_SIZE, que é a quantidade de bytes lidas por vez.
	// Esse bytes lidos são armazenados no array buffer.
	while (read_byte != 0) // se o número de bytes for diferente de zero
	{
		buffer[read_byte] = '\0'; // o nosso array na posição final recebe o byte nulo
		ft_putstr(buffer); // imprimimos a string armazenada no buffer
		read_byte = read(fd, buffer, BUFFER_SIZE); // e lemos mais um bloco de leitura
	}
	// acabado de ler o arquivo e de imprimi-lo
	close(fd); // fechamos o fd, parando assim de manipular o arquivo
	return (0); // retornamos 0, indicando que deu tudo certo 
}
