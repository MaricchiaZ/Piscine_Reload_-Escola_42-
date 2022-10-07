/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 22:09:27 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/24 10:33:52 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// O Fatorial de um número é ele multiplicado por todos menores que ele, até o um.
// O símbolo do fatorial é o !
// Então 5! = 5*4*3*2*1

int	ft_recursive_factorial(int nb) // função que calcula o fatorial de um número por
// meio uma chamada recursiva da nossa própria função
{
	if ((nb < 0) || (nb > 12)) // fatorial de negativo não existe, e as diretrizes
	// pedem que retorne 0, e fatorial de um número maior que 12 ultrapassa o INT MAX.
		return (0);
	else if (nb <= 1) // se o nosso nb for zero ou um
		return (1); // a resposta é 1
	return (nb * ft_recursive_factorial(nb - 1)); // e se estiver entre 2 e 12 caimos aqui 
	// no retorno 
	// o retorno é: nb * uma nova chamada da função usando nb - 1
	// isso faz com que a a função chame a função até que nb seja 1, depois volte
	// multiplicando os resultados, dando o retorno certo do fatorial de um número.
}
