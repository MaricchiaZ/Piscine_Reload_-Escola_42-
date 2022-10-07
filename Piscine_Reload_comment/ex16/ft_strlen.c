/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:55:33 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/24 11:21:22 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str) // essa função mede o tamanho de uma string, sem incluir 
// o byte nulo final
{
	int	i; // criamos um inteiro i para ser nosso índice, e percorrer a string

	i = 0; // iniciamos ele em zero
	while (str[i] != '\0') //enquanto a string recebida na posição i for diferente do
	// byte nulo
	{
		i++; // nosso i ganha uma unidade, e indiretamente avançamos para a próxima posição
		//da string
	}
	return (i); // retornamos i, que vale a quantidade de casas/elementos que nossa string tem
}
