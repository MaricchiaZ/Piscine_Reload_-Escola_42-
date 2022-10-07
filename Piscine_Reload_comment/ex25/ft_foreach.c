/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 22:35:56 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/24 18:04:38 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f) (int)) // essa função recebe um
// array, e aplica a função f também recebida por parâmetro, até o tamanho length
{
	while (length > 0) // enquanto length for maior que zero
	{
		f(*tab); // aplicamos a função f sobre o elemento apontado pelo ponteiro do array
		tab++; // o ponteiro avança para o próximo elemento
		length--; // decrementamos uma unidade no tamanho do length
		// e repetimos o processo ...
	}
}
