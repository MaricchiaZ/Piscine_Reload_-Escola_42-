/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:41:18 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/24 15:03:47 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// essa função deve imprimir no terminal os parâmetros 
// passados por argumento, mas organizaos em ordem alfabéfica e 
//cada argumento um em uma linha (mas sem imprimir o nome do executável, no caso o a.out )
// exemplo: ./a.out bargumento1 zargumento2 aargumento3
// fica assim:
// aargumento3
// bargumento1
// zargumento2

//Optei por fazer essa função usando a técnica de Bubble Sort

typedef struct s_var // para não ultrapassar o número de linhas podemos declara uma struct
// 'estrutura' contendo várias variáveis, e chamar essa struct dentro da função....
// A ideia de usar uma struct é permitir que, ao armazenar os dados de uma mesma 
// entidade (no nosso caso variáveis), isto possa ser feito com uma única variável 
// (chamada t_var) que armazena as variáveis
{
	int		bs1; // variável auxiliar controlar o loop 1 da técnica de ordenação Bubble Sort
	int		bs2; // variável auxiliar controlar o loop 2 da técnica de ordenação Bubble Sort
	int		ac; // criamos um int ac para ir de um argumento ao outro
	int		l; // criamos um int l, índice, para percorrer cada letra/caracter do nome dos argumentos
	char	*temp; // essa varável temporária irá armazenar as letras para trocarmos a
	// ordem dos argumentos
}	t_var; // aqui damos um nome para esse tipo de struct que criamos

void	ft_putchar(char c); // nossa função recebe argc (número/ quantidade de argumentos
// passados) e o argv (o valor/conteúdo dos argumentos passados)

// ESSA FUNÇÃO É AUXILIAR ---> comece lendo pela outra função
void	order(int argc, char **argv) // essa função recebe os argvs que foi passado para
// função principal e reencaminhados para cá
{
	t_var	var; // aqui criamos dentro da nossa função uma estrutura
	// de variáveis igual a que criamos fora

	var.bs1 = 1; // a variável bs1 da nossa estrutura chamada var, recebe o valor 1
	// essa variável servirá para controlar as repetições do while externo da técnica
	// do Bubble Sort, ela inicia em 1 pois precisa fazer n-1 repetições que o loop interno
	while (var.bs1 < argc - 1) // agora comparamos se esse controlador var.bs1 é menor do que
	// o número de argc menos 1 (nesta técnica comparamos um elemento com o próximo, a direita
	// dele. Fazemos o argc - 1 por que não comparamos o último argumento, uma vez que a direita
	// deve não tem mais nada)
	{
		var.bs2 = 0; // a variável bs2 da nossa estrutura chamada var, recebe o valor 0
	// essa variável servirá para controlar as repetições do while interno da técnica
	// do Bubble Sort, inicia em 0 pois precisa fazer uma volta a mais do que o loop externo
		var.ac = 1; // nosso ac, dentro da struct var é iniciado em um,
		// pois o argv[0] é o a.out que não nos interessa
		while (var.bs2 < argc - 1)// agora comparamos se esse controlador var.bs2 é menor do que
	// o número de argc menos 1 (nesta técnica comparamos um elemento com o próximo, a direita
	// dele. Fazemos o argc - 1 por que não comparamos o último argumento, uma vez que a direita
	// deve não tem mais nada)
		{
			var.l = 0; // zeramos o índice que percorre as letras que compõe o nome do argumento
			while (argv[var.ac] && argv[var.ac + 1] && \ // condições para não acessar o que não existe
			argv[var.ac][var.l] == argv[var.ac + 1][var.l])
			// ENQUANTO o argv[var.ac] (que eu estou olhando) existir E
			// o argv[var.ac + 1] (próximo argv) existir E
			// argv[var.ac][var.l] (a letra l do argv que estou olhando) for igual a
			// (a letra l do próximo argv) argv[var.ac + 1][var.l]
				var.l++; // avançamos para a próxima letra, aqui 
			if (argv[var.ac] && argv[var.ac + 1] && \ // SE esses dois argumentos existirem E
			argv[var.ac][var.l] > argv[var.ac + 1][var.l]) // e a letra/caracter do atual for maior, 
			//isto é estiver mais para o fim do alfabeto, executamos a troca desses argumentos
			{
				var.temp = argv[var.ac]; // a variável temporária recebe o nome do argv[var.ac]
				argv[var.ac] = argv[var.ac + 1]; // o argv[var.ac] recebe o nome do argv seguinte
				argv[var.ac + 1] = var.temp; // o argv seguinte recebe o nome do anterior que
				// está armazenado na variável temporária da nossa struct
				// com isso esses dois argumentos mudaram de posição e agora estão em ordem entre si
			}
			var.ac++; //avançamos uma posição nos argumentos e agora vamos comparar os próximos 2
			var.bs2++; //a variável de controle do while interno ganha uma unidade, já que uma 
			// comparação está completa
		}
		var.bs1++; //a variável de controle do while externo ganha uma unidade, já que um
			// ciclo de comparações se completou
	// ao fim dos ciclos de comparações todos os argumentos estão em ordem alfabética
}

// ESSA FUNÇÃO É A PRINCIPAL ---> comece lendo por aqui
int	main(int argc, char **argv) // essa função recebe os argumentos passados por parâmetro
// nossa função recebe argc (número/ quantidade de argumentos
// passados) e o argv (o valor/conteúdo dos argumentos passados)
{
	int	ac; // criamos um int ac para ir de um argumento ao outro
	int	i; // criamos um int i, índice, para percorrer cada letra do nome dos argumentos

	order(argc, argv); // aqui chamamos nossa função auxiliar para ordenar os argumentos 
	// que rececebemos, e que repassamos para serem ordenados
	// agora que estamos em ordem, podemos imprimir
	if (argc > 1)
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
