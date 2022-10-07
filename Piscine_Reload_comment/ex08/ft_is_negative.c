/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 19:29:23 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/22 12:24:39 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // incluímos essa biblioteca para usarmos a função write que
//está incluída na ft_putchar(char c);
void	ft_putchar(char c); // aqui só prototipamos a função, pois a correção incluirá
// a própria versão da função ft_putchar

void	ft_is_negative(int n) // essa função classifica o número passado como parâmetro
// em positivo ou negativo
{
	if (n >= 0) // se o número n for maior ou igual a 0
		ft_putchar('P'); // imprimimos a letra P, de positivo
	else // caso contrário (ele é menor que 0)
		ft_putchar('N'); // imprimimos a letra N, de negativo
}
