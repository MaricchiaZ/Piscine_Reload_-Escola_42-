/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclara-d <mclara-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:42:03 by mclara-d          #+#    #+#             */
/*   Updated: 2022/02/14 18:47:38 by mclara-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 10; //a vale 10
	b = 3; // b vale 3
	ft_div_mod(a, b, &div, &mod); // aqui a nossa função faz as contas e coloca os
    // valores em div e mod
	printf("Divisão = %d\n", div); // imprimimos então o valor da divisão, armazenado em div
	printf("Módulo = %d\n", mod); // imprimimos então o valor do módulo, armazenado em mod
}