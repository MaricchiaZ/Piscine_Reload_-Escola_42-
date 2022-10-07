/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 15:28:23 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/24 10:52:14 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb) // essa função calcula a raiz quadrada do número passado
{
	int	i; // criamos um int auxiliar, vamos multiplicar ele por ele mesmo e ver
	// se essa multiplicação (i * i) tem o mesmo valor do número passado, encontramos
	// o valor da raíz quadrada de nb

	i = 0; // iniciamos ele em zero
	while ((i * i < nb) && i <= 46340) // enquanto i * i é menor que nb, fazemos i ganhar
	// uma unidade, conferimos também se i é menor ou igual a 46.340, porque números
	// acima de 46.340 quando multiplicados por ele mesmo ultrapassam o INT MAX
		i++;
	if ((i * i) == nb) // se i * i é idêntico ao nb, achamos a raiz quadrada
		return (i); // então retornamos i
	else // se i * i não é menor do que nn, nem é idêntico ao nb, nosso nb não
	// tem uma raiz quadrada inteira
		return (0); // então nesse caso retornamos zero
}
