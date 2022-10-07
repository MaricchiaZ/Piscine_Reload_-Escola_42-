/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 22:08:26 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/24 10:20:53 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// O Fatorial de um número é ele multiplicado por todos menores que ele, até o um.
// O símbolo do fatorial é o !
// Então 5! = 5*4*3*2*1

int	ft_iterative_factorial(int nb) // função que calcula o fatorial de um número por
// meio de um loop
{
	int	result; //criamos uma variável para armazenar o valor do resultado

	result = 1; // iniciamos ela com o valor 1, porque ela vai participar de uma
	// conta de multiplicação e se fosse zero, ela zeraria a conta
	// (qualquer coisa vezes zero é zero! :) ... só lembrando)
	if ((nb < 0) || (nb > 12)) // fatorial de negativo não existe, e as diretrizes
	// pedem que retorne 0, e fatorial de um número maior que 12 ultrapassa o INT MAX.
		return (0); // então, em caso de erro, retornamos zero
	if (nb == 0) // na matemática, o fatorial de 0 é um
		return (1); // então se nb é idêntico a zero, a respota é 1.
	while (nb >= 1) // agora, se nb é maior que 1
	{
		result = result * nb; // multiplicamos o resultado por nb
		nb--; // e vamos reduzindo as unidades do nb até ser 1
	}
	return (result); // retornamos o resultado do fatorial
}
