/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:40:03 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/24 15:03:43 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c); // o corretor automático usará a própria função
// ft_putchar, então aqui só devemos prototipá-la

// essa função deve imprimir no terminal os parâmetros 
// passados por argumento, mas cada argumento um em uma linha (mas sem imprimir o nome
// do executável, no caso o a.out )
// exemplo: ./a.out argumento1 argumento2 argumento3
// fica assim:
// argumento1
// argumento2
// argumento3

int	main(int argc, char **argv) // nossa função recebe argc (número/ quantidade de argumentos
// passados) e o argv (o valor/conteúdo dos argumentos passados)
{
	int	ac; // criamos um int ac para ir de um argumento ao outro
	int	i; // criamos um int i, índice, para percorrer cada letra do nome dos argumentos

	if (argc > 1) // se o número de argc é um, só temos o a.out que não devemos 
	// imprimir, então já pulamos para o final da função, MAS se temos mais de 1 argumento
	// temos o que imprimir, aí entramos nesse if
	{
		ac = 1; // nosso ac é iniciado em um, pois o argv[0] é o a.out que não nos interessa
		while (ac < argc) // enquanto o índice que vai de argv em arvg for menor que a quantidade
		// de argvs que existem (lembrando que do arg[0] ao arg[3] temos 4 argumentos
		// o arg[0], o arg[1], o arg[2] e o arg[3]) por isso usamos ac < argc e não ac <= argc
		{
			i = 0; // o índice que percorre as letras dos argumentos inicia-se no zero
			while (argv[ac][i]) // enquanto o argv[número ac][na letra/posição i] existir,
			// isto é, não for nulo
			{
				ft_putchar(argv[ac][i]); // mandamos imprimir a letra i do argc ac
				i++; // e i ganha uma unidade, assim vamos para a próxima letra
			}
			ft_putchar('\n'); // quando esse argv acabar, imprimimos uma quebra de linha
			ac++; // agora o contator/índice do arvg ganha uma unidade
			// assim vamos olhar para o próximo argumento passado, ao voltar para o topo do
			// loop zeraremos o índice i que percorre as letras do argumento
			// assim poderemos iniciar pelo caracter da posição zero do próximo argumento
		}
	}
	return (0); // retornamos 0 por que já imprimimos o que deveria, ou porque não tinha o
	// que imprimr (se não entramos no if)
}
