/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:57:40 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/24 15:03:51 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c); // o corretor automático usará a própria função
// ft_putchar, então aqui só devemos prototipá-la

void	ft_putstr(char *str) // essa função imprime uma string na tela
{
	int	i; // criamos um inteiro i, para ser o índice que percorrerá a string

	i = 0; // atribuímos a ele o valor zero
	while (str[i] != '\0') //enquanto a string recebida na posição i for diferente do
	// byte nulo
	{
		ft_putchar(str[i]); // mandamos o caracter da posição i, para a função ft_putcha
		i++; // acrescentando um no valor de i, avançamos para a próxima posição da string 
	}
}
