/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 19:29:23 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/22 12:17:57 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // incluímos essa biblioteca para usarmos a função write que
//está incluída na ft_putchar(char c);

void	ft_putchar(char c); // aqui só prototipamos a função, pois a correção incluirá
// a própria versão da função ft_putchar

void	ft_print_alphabet(void) // criamos aqui uma função que imprime as letras do
//alfabeto minúsculo
{
	char	c; // declaramos uma variável do tipo char, chamada c

	c = 'a'; // inicializamos essa variável com o valor de a (quando passamos 
	// assim em aspas simples, passamos o valor desse caracter em específico, em 
	// valor ASCII)
	while (c <= 'z') // enquanto esse caracter ultrapassar o valor de z
	{
		ft_putchar(c); // usamos a função putchar para imprimr o caracter
		c++; // o caracter ganha uma unidade, representando agora a próxima letra
	}
}
